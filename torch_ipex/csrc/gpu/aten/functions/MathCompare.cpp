#include <ATen/ScalarOps.h>
#include <ATen/Functions.h>

#include <utils/Numerics.h>
#include <ATen/aten_ipex_type_dpcpp.h>
#include <core/SYCLApplyUtils.h>


namespace at {
namespace AtenIpexTypeDPCPP {
namespace impl {

namespace {

template <typename T, typename TOut>
struct TensorLTOp {
  inline void operator()(TOut &out, T &a, T &b) const {
    out = ScalarConvert<bool, TOut>::to(Numerics<T>::lt(a, b));
  }
};

template <typename T, typename TOut>
struct TensorGTOp {
  inline void operator()(TOut &out, T &a, T &b) const {
    out = ScalarConvert<bool, TOut>::to(Numerics<T>::gt(a, b));
  }
};

template <typename T, typename TOut>
struct TensorLEOp {
  inline void operator()(TOut &out, T &a, T &b) const {
    out = ScalarConvert<bool, TOut>::to(Numerics<T>::le(a, b));
  }
};

template <typename T, typename TOut>
struct TensorGEOp {
  inline void operator()(TOut &out, T &a, T &b) const {
    out = ScalarConvert<bool, TOut>::to(Numerics<T>::ge(a, b));
  }
};

template <typename T, typename TOut>
struct TensorEQOp {
  void operator()(TOut &out, T &a, T &b) const {
   out = ScalarConvert<bool, TOut>::to(Numerics<T>::eq(a, b));
  }
};

template <typename T, typename TOut>
struct TensorNEOp {
  inline void operator()(TOut &out, T &a, T &b) const {
    out = ScalarConvert<bool, TOut>::to(Numerics<T>::ne(a, b));
  }
};

template <typename ScalarTypeOut, typename ScalarType, class Op>
void logicalTensor(Tensor & self_, const Tensor & src1, const Tensor & src2, Op op) {
  at::AtenIpexTypeDPCPP::resize_as_(self_, src1, c10::nullopt);

  TORCH_CHECK(src1.numel() == src2.numel(), "sizes do not match");
  at::sycl::SYCL_tensor_apply3<ScalarTypeOut, ScalarType, ScalarType>(
      self_, src1, src2, op);
}

} // namespace

#if COMPARE_PORTED
void THSYCLTensor_(ltTensor)(THSYCLState *state, THSyclBoolTensor *self_, THSYCLTensor *src1, THSYCLTensor *src2)
{
  THSYCLAssertSameGPU(THSYCLTensor_(checkGPU)(state, 3, self_, src1, src2));
  THSYCL_logicalTensor<bool, scalar_t>(state, self_, src1, src2,
                                   TensorLTOp<scalar_t,
                                   bool>());
}

void THSYCLTensor_(gtTensor)(THSYCLState *state, THSyclBoolTensor *self_, THSYCLTensor *src1, THSYCLTensor *src2)
{
  THSYCLAssertSameGPU(THSYCLTensor_(checkGPU)(state, 3, self_, src1, src2));
  THSYCL_logicalTensor<bool, scalar_t>(state, self_, src1, src2,
                                   TensorGTOp<scalar_t,
                                   bool>());
}

void THSYCLTensor_(leTensor)(THSYCLState *state, THSyclBoolTensor *self_, THSYCLTensor *src1, THSYCLTensor *src2)
{
  THSYCLAssertSameGPU(THSYCLTensor_(checkGPU)(state, 3, self_, src1, src2));
  THSYCL_logicalTensor<bool, scalar_t>(state, self_, src1, src2,
                                   TensorLEOp<scalar_t,
                                   bool>());
}

void THSYCLTensor_(geTensor)(THSYCLState *state, THSyclBoolTensor *self_, THSYCLTensor *src1, THSYCLTensor *src2)
{
  THSYCLAssertSameGPU(THSYCLTensor_(checkGPU)(state, 3, self_, src1, src2));

  THSYCL_logicalTensor<bool, scalar_t>(state, self_, src1, src2,
                                   TensorGEOp<scalar_t,
                                   bool>());
}
#endif

template <typename scalar_t>
void eqTensor(Tensor & self_, const Tensor & src1, const Tensor & src2)
{
  logicalTensor<bool, scalar_t>(self_, src1, src2, TensorEQOp<scalar_t, bool>());
}

#if COMPARE_PORTED
void THSYCLTensor_(neTensor)(THSYCLState *state, THSyclBoolTensor *self_, THSYCLTensor *src1, THSYCLTensor *src2)
{
  THSYCLAssertSameGPU(THSYCLTensor_(checkGPU)(state, 3, self_, src1, src2));
  THSYCL_logicalTensor<bool, scalar_t>(state, self_, src1, src2,
                                   TensorNEOp<scalar_t,
                                   bool>());
}

void THSYCLTensor_(ltTensorT)(THSYCLState *state, THSYCLTensor *self_, THSYCLTensor *src1, THSYCLTensor *src2)
{
  THSYCLAssertSameGPU(THSYCLTensor_(checkGPU)(state, 3, self_, src1, src2));
  THSYCL_logicalTensor<scalar_t, scalar_t>(state, self_, src1, src2,
                                TensorLTOp<scalar_t,
                                scalar_t>());
}

void THSYCLTensor_(gtTensorT)(THSYCLState *state, THSYCLTensor *self_, THSYCLTensor *src1, THSYCLTensor *src2)
{
  THSYCLAssertSameGPU(THSYCLTensor_(checkGPU)(state, 3, self_, src1, src2));
  THSYCL_logicalTensor<scalar_t, scalar_t>(state, self_, src1, src2,
                                TensorGTOp<scalar_t,
                                scalar_t>());
}

void THSYCLTensor_(leTensorT)(THSYCLState *state, THSYCLTensor *self_, THSYCLTensor *src1, THSYCLTensor *src2)
{
  THSYCLAssertSameGPU(THSYCLTensor_(checkGPU)(state, 3, self_, src1, src2));
  THSYCL_logicalTensor<scalar_t, scalar_t>(state, self_, src1, src2,
                                TensorLEOp<scalar_t,
                                scalar_t>());
}

void THSYCLTensor_(geTensorT)(THSYCLState *state, THSYCLTensor *self_, THSYCLTensor *src1, THSYCLTensor *src2)
{
  THSYCLAssertSameGPU(THSYCLTensor_(checkGPU)(state, 3, self_, src1, src2));
  THSYCL_logicalTensor<scalar_t, scalar_t>(state, self_, src1, src2,
                                TensorGEOp<scalar_t,
                                scalar_t>());
}
#endif

// void eqTensorT(Tensor *self_, THSYCLTensor *src1, THSYCLTensor *src2)
// {
//   THSYCL_logicalTensor<scalar_t, scalar_t>(state, self_, src1, src2,
//                                 TensorEQOp<scalar_t,
//                                 scalar_t>());
// }

#if COMPARE_PORTED
void THSYCLTensor_(neTensorT)(THSYCLState *state, THSYCLTensor *self_, THSYCLTensor *src1, THSYCLTensor *src2)
{
  THSYCLAssertSameGPU(THSYCLTensor_(checkGPU)(state, 3, self_, src1, src2));
  THSYCL_logicalTensor<scalar_t, scalar_t>(state, self_, src1, src2,
                                TensorNEOp<scalar_t,
                                scalar_t>());
}

void THSYCLTensor_(ltTensorByte)(THSYCLState *state, THSyclByteTensor *self_, THSYCLTensor *src1, THSYCLTensor *src2)
{
  THSYCLAssertSameGPU(THSYCLTensor_(checkGPU)(state, 3, self_, src1, src2));
  THSYCL_logicalTensor<unsigned char, scalar_t>(state, self_, src1, src2,
                                             TensorLTOp<scalar_t,
                                             unsigned char>());
}

void THSYCLTensor_(gtTensorByte)(THSYCLState *state, THSyclByteTensor *self_, THSYCLTensor *src1, THSYCLTensor *src2)
{
  THSYCLAssertSameGPU(THSYCLTensor_(checkGPU)(state, 3, self_, src1, src2));
  THSYCL_logicalTensor<unsigned char, scalar_t>(state, self_, src1, src2,
                                             TensorGTOp<scalar_t,
                                             unsigned char>());
}

void THSYCLTensor_(leTensorByte)(THSYCLState *state, THSyclByteTensor *self_, THSYCLTensor *src1, THSYCLTensor *src2)
{
  THSYCLAssertSameGPU(THSYCLTensor_(checkGPU)(state, 3, self_, src1, src2));
  THSYCL_logicalTensor<unsigned char, scalar_t>(state, self_, src1, src2,
                                             TensorLEOp<scalar_t,
                                             unsigned char>());
}

void THSYCLTensor_(geTensorByte)(THSYCLState *state, THSyclByteTensor *self_, THSYCLTensor *src1, THSYCLTensor *src2)
{
  THSYCLAssertSameGPU(THSYCLTensor_(checkGPU)(state, 3, self_, src1, src2));
  THSYCL_logicalTensor<unsigned char, scalar_t>(state, self_, src1, src2,
                                             TensorGEOp<scalar_t,
                                             unsigned char>());
}
#endif

// void THSYCLTensor_(eqTensorByte)(THSYCLState *state, THSyclByteTensor *self_, THSYCLTensor *src1, THSYCLTensor *src2)
// {
//   THSYCLAssertSameGPU(THSYCLTensor_(checkGPU)(state, 3, self_, src1, src2));
//   THSYCL_logicalTensor<unsigned char, scalar_t>(state, self_, src1, src2,
//                                              TensorEQOp<scalar_t,
//                                              unsigned char>());
// }

#if COMPARE_PORTED
void THSYCLTensor_(neTensorByte)(THSYCLState *state, THSyclByteTensor *self_, THSYCLTensor *src1, THSYCLTensor *src2)
{
  THSYCLAssertSameGPU(THSYCLTensor_(checkGPU)(state, 3, self_, src1, src2));
  THSYCL_logicalTensor<unsigned char, scalar_t>(state, self_, src1, src2,
                                             TensorNEOp<scalar_t,
                                             unsigned char>());
}
#endif
} // namespace impl

Tensor & eq_out(Tensor & out, const Tensor & self, Scalar other_) {
  auto other = c10::scalar_to_tensor(other_, kDPCPP);
  other.unsafeGetTensorImpl()->set_wrapped_number(true);
  return at::eq_out(out, self, other);
}

Tensor eq(const Tensor & self, Scalar other_) {
  auto result = at::empty({0}, self.options().dtype(kBool));
  auto other = c10::scalar_to_tensor(other_, kDPCPP);
  other.unsafeGetTensorImpl()->set_wrapped_number(true);
  return at::eq_out(result, self, other);
}

Tensor & eq_out(Tensor & out, const Tensor & self, const Tensor & other) {
  AT_DISPATCH_ALL_TYPES(self.scalar_type(), "eqTensor",
      [&]() {
        impl::eqTensor<scalar_t>(out, self, other);
      }
  );

  return out;
}

Tensor eq(const Tensor & self, const Tensor & other) {
  Tensor result = at::empty({0}, self.options().dtype(kBool));
  return at::eq_out(result, self, other);
}

} // namespace AtenIpexTypeDPCPP
} // namespace at
