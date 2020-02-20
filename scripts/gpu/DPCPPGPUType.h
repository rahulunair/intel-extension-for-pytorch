#pragma once

// @generated by aten/src/ATen/gen.py

#include <c10/core/TensorOptions.h>
#include <c10/core/Scalar.h>
#include <c10/core/QScheme.h>
#include <c10/core/MemoryFormat.h>
#include <c10/util/ArrayRef.h>
#include <c10/util/intrusive_ptr.h>
#include <torch/csrc/WindowsTorchApiMacro.h>

#include <ATen/DeviceGuard.h>

namespace c10 {
struct Storage;
}

namespace at {

class Tensor;
using TensorList = ArrayRef<Tensor>;

class Context;
struct Generator;

struct Quantizer;
// This is temporary typedef to enable Quantizer in aten native function API
// we'll remove them when we are actually exposing Quantizer class
// to frontend
using ConstQuantizerPtr = const c10::intrusive_ptr<Quantizer>&;

struct TORCH_API SYCLType final {
  // static std::tuple<Tensor,Tensor,Tensor,std::vector<Tensor>> _sycl_rnn(const Tensor & self, const Tensor & hx_, const Tensor & cx_, TensorList params, bool has_biases, int64_t num_layers_, double dropout_p, bool train, bool bidirectional, bool batch_first);
  // static std::tuple<Tensor,Tensor,Tensor,std::vector<Tensor>> _sycl_rnn_backward(const Tensor & self, const Tensor & hx_, const Tensor & cx_, const Tensor & output, const Tensor & hy_, const Tensor & cy_, TensorList workspace, const Tensor & grad_output, const Tensor & grad_hy, const Tensor & grad_cy, TensorList params, bool has_biases, int64_t num_layers_, double dropout_p, bool train, bool bidirectional, bool batch_first);
  // static Tensor & abs_(Tensor & self);
  // static Tensor & abs_out(Tensor & out, const Tensor & self);
  // static Tensor & acos_(Tensor & self);
  // static Tensor & acos_out(Tensor & out, const Tensor & self);
  // static Tensor add(const Tensor & self, const Tensor & other, Scalar alpha);
  // static Tensor & add_(Tensor & self, const Tensor & other, Scalar alpha);
  // static Tensor & add_out(Tensor & out, const Tensor & self, const Tensor & other, Scalar alpha);
  // static Tensor addmv(const Tensor & self, const Tensor & mat, const Tensor & vec, Scalar beta, Scalar alpha);
  // static Tensor & addmv_(Tensor & self, const Tensor & mat, const Tensor & vec, Scalar beta, Scalar alpha);
  // static Tensor & addmv_out(Tensor & out, const Tensor & self, const Tensor & mat, const Tensor & vec, Scalar beta, Scalar alpha);
   static Tensor & arange_out(Tensor & out, Scalar start, Scalar end, Scalar step);  // aten::arange.start_out(Scalar start, Scalar end, Scalar step=1, *, Tensor(a!) out) -> Tensor(a!)
  static Tensor as_strided(const Tensor & self, IntArrayRef size, IntArrayRef stride, c10::optional<int64_t> storage_offset); // aten::as_strided(Tensor(a) self, int[] size, int[] stride, int? storage_offset=None) -> Tensor(a)
  // static Tensor & asin_(Tensor & self);
  // static Tensor & asin_out(Tensor & out, const Tensor & self);
  // static Tensor & atan_(Tensor & self);
  // static Tensor & atan_out(Tensor & out, const Tensor & self);
  // static Tensor baddbmm(const Tensor & self, const Tensor & batch1, const Tensor & batch2, Scalar beta, Scalar alpha);
  // static Tensor & baddbmm_(Tensor & self, const Tensor & batch1, const Tensor & batch2, Scalar beta, Scalar alpha);
  // static Tensor & baddbmm_out(Tensor & out, const Tensor & self, const Tensor & batch1, const Tensor & batch2, Scalar beta, Scalar alpha);
  // static Tensor & bernoulli_(Tensor & self, const Tensor & p, Generator * generator); // aten::bernoulli_.Tensor(Tensor(a!) self, Tensor p, *, Generator? generator=None) -> Tensor(a!)
  // static Tensor & bernoulli_(Tensor & self, double p, Generator * generator); // aten::bernoulli_.float(Tensor(a!) self, float p=0.5, *, Generator? generator=None) -> Tensor(a!)
  // static Tensor bincount(const Tensor & self, const Tensor & weights, int64_t minlength);
  // static Tensor & bitwise_not_out(Tensor & out, const Tensor & self);
  // static Tensor & logical_not_out(Tensor & out, const Tensor & self);
  // static Tensor & logical_xor_out(Tensor & out, const Tensor & self, const Tensor & other);
  // static Tensor bmm(const Tensor & self, const Tensor & mat2);
  // static Tensor & bmm_out(Tensor & out, const Tensor & self, const Tensor & mat2);
  // static Tensor & ceil_(Tensor & self);
  // static Tensor & ceil_out(Tensor & out, const Tensor & self);
  // static Tensor & clamp_(Tensor & self, c10::optional<Scalar> min, c10::optional<Scalar> max);
  // static Tensor & clamp_out(Tensor & out, const Tensor & self, c10::optional<Scalar> min, c10::optional<Scalar> max);
  // static Tensor & clamp_max_(Tensor & self, Scalar max);
  // static Tensor & clamp_max_out(Tensor & out, const Tensor & self, Scalar max);
  // static Tensor & clamp_min_(Tensor & self, Scalar min);
  // static Tensor & clamp_min_out(Tensor & out, const Tensor & self, Scalar min);
  // static Tensor & cos_(Tensor & self);
  // static Tensor & cos_out(Tensor & out, const Tensor & self);
  // static Tensor & cosh_(Tensor & self);
  // static Tensor & cosh_out(Tensor & out, const Tensor & self);
  // static Tensor embedding_dense_backward(const Tensor & grad_output, const Tensor & indices, int64_t num_weights, int64_t padding_idx, bool scale_grad_by_freq);
  // static std::tuple<Tensor,Tensor,Tensor,Tensor> _embedding_bag(const Tensor & weight, const Tensor & indices, const Tensor & offsets, bool scale_grad_by_freq, int64_t mode, bool sparse, const Tensor & per_sample_weights);
  // static Tensor _embedding_bag_dense_backward(const Tensor & grad, const Tensor & indices, const Tensor & offsets, const Tensor & offset2bag, const Tensor & bag_size, const Tensor & maximum_indices, int64_t num_weights, bool scale_grad_by_freq, int64_t mode, const Tensor & per_sample_weights);
  static Tensor empty(IntArrayRef size, const TensorOptions & options, c10::optional<MemoryFormat> memory_format); // aten::empty.memory_format(int[] size, *, ScalarType? dtype=None, Layout? layout=None, Device? device=None, bool? pin_memory=None, MemoryFormat? memory_format=None) -> Tensor
   //static Tensor & resize_(Tensor & self, IntArrayRef size);
  static Tensor & resize_(Tensor & self, IntArrayRef size, c10::optional<MemoryFormat> memory_format); // aten::resize_(Tensor(a!) self, int[] size, *, MemoryFormat? memory_format=None) -> Tensor(a!)
   static Tensor empty_strided(IntArrayRef size, IntArrayRef stride, const TensorOptions & options);  // aten::empty_strided(int[] size, int[] stride, *, ScalarType? dtype=None, Layout? layout=None, Device? device=None, bool? pin_memory=None) -> Tensor
  // static Tensor & erf_(Tensor & self);
  // static Tensor & erf_out(Tensor & out, const Tensor & self);
  // static Tensor & erfc_(Tensor & self);
  // static Tensor & erfc_out(Tensor & out, const Tensor & self);
  // static Tensor & exp_(Tensor & self);
  // static Tensor & exp_out(Tensor & out, const Tensor & self);
  // static Tensor & expm1_(Tensor & self);
  // static Tensor & expm1_out(Tensor & out, const Tensor & self);
   static Tensor & eye_out(Tensor & out, int64_t n); // aten::eye.out(int n, *, Tensor(a!) out) -> Tensor(a!)
   static Tensor & eye_out(Tensor & out, int64_t n, int64_t m); // aten::eye.m_out(int n, int m, *, Tensor(a!) out) -> Tensor(a!)
  // static Tensor & floor_(Tensor & self);
  // static Tensor & floor_out(Tensor & out, const Tensor & self);
  // static Tensor ger(const Tensor & self, const Tensor & vec2);
  // static Tensor & ger_out(Tensor & out, const Tensor & self, const Tensor & vec2);
  // static std::tuple<Tensor &,Tensor &> kthvalue_out(Tensor & values, Tensor & indices, const Tensor & self, int64_t k, int64_t dim, bool keepdim);
   static Tensor & linspace_out(Tensor & out, Scalar start, Scalar end, int64_t steps);  // aten::linspace.out(Scalar start, Scalar end, int steps=100, *, Tensor(a!) out) -> Tensor(a!)
  // static Tensor & log_(Tensor & self);
  // static Tensor & log_out(Tensor & out, const Tensor & self);
  // static Tensor & log10_(Tensor & self);
  // static Tensor & log10_out(Tensor & out, const Tensor & self);
  // static Tensor & log1p_(Tensor & self);
  // static Tensor & log1p_out(Tensor & out, const Tensor & self);
  // static Tensor & log2_(Tensor & self);
  // static Tensor & log2_out(Tensor & out, const Tensor & self);
   static Tensor & logspace_out(Tensor & out, Scalar start, Scalar end, int64_t steps, double base);  // aten::logspace.out(Scalar start, Scalar end, int steps=100, float base=10.0, *, Tensor(a!) out) -> Tensor(a!)
  static Tensor _log_softmax(const Tensor & self, int64_t dim, bool half_to_float); // aten::_log_softmax(Tensor self, int dim, bool half_to_float) -> Tensor
  // static Tensor _log_softmax_backward_data(const Tensor & grad_output, const Tensor & output, int64_t dim, const Tensor & self);
  // static Tensor mm(const Tensor & self, const Tensor & mat2);
  // static Tensor & mm_out(Tensor & out, const Tensor & self, const Tensor & mat2);
  // static Tensor mul(const Tensor & self, const Tensor & other);
  // static Tensor & mul_(Tensor & self, const Tensor & other);
  // static Tensor & mul_out(Tensor & out, const Tensor & self, const Tensor & other);
  // static Tensor mv(const Tensor & self, const Tensor & vec);
  // static Tensor & mv_out(Tensor & out, const Tensor & self, const Tensor & vec);
  // static Tensor narrow_copy(const Tensor & self, int64_t dim, int64_t start, int64_t length);
  static std::tuple<Tensor,Tensor,Tensor> native_batch_norm(const Tensor & input, const Tensor & weight, const Tensor & bias, const Tensor & running_mean, const Tensor & running_var, bool training, double momentum, double eps); // aten::native_batch_norm(Tensor input, Tensor? weight, Tensor? bias, Tensor? running_mean, Tensor? running_var, bool training, float momentum, float eps) -> (Tensor, Tensor, Tensor)
  // static std::tuple<Tensor,Tensor,Tensor> native_batch_norm_backward(const Tensor & grad_out, const Tensor & input, const Tensor & weight, const Tensor & running_mean, const Tensor & running_var, const Tensor & save_mean, const Tensor & save_invstd, bool train, double eps, std::array<bool,3> output_mask);
   static Tensor & range_out(Tensor & out, Scalar start, Scalar end, Scalar step);  // aten::range.out(Scalar start, Scalar end, Scalar step=1, *, Tensor(a!) out) -> Tensor(a!)
  // static Tensor & neg_out(Tensor & out, const Tensor & self);
  // static Tensor repeat_interleave(const Tensor & repeats); // aten::repeat_interleave.Tensor(Tensor repeats) -> Tensor
  // static Tensor & round_(Tensor & self);
  // static Tensor & round_out(Tensor & out, const Tensor & self);
  // static Tensor relu(const Tensor & self);
  static Tensor & relu_(Tensor & self); // aten::relu_(Tensor(a!) self) -> Tensor(a!)
  // static Tensor & rsqrt_(Tensor & self);
  // static Tensor & rsqrt_out(Tensor & out, const Tensor & self);
  // static Tensor sigmoid(const Tensor & self);
  // static Tensor & sigmoid_(Tensor & self);
  // static Tensor & sigmoid_out(Tensor & out, const Tensor & self);
  // static Tensor & sin_(Tensor & self);
  // static Tensor & sin_out(Tensor & out, const Tensor & self);
  // static Tensor & sinh_(Tensor & self);
  // static Tensor & sinh_out(Tensor & out, const Tensor & self);
  // static Tensor _softmax(const Tensor & self, int64_t dim, bool half_to_float);
  // static Tensor _softmax_backward_data(const Tensor & grad_output, const Tensor & output, int64_t dim, const Tensor & self);
  // static Tensor & sqrt_(Tensor & self);
  // static Tensor & sqrt_out(Tensor & out, const Tensor & self);
  // static Tensor & tan_(Tensor & self);
  // static Tensor & tan_out(Tensor & out, const Tensor & self);
  // static Tensor & tanh_(Tensor & self);
  // static Tensor & tanh_out(Tensor & out, const Tensor & self);
   static Tensor roll(const Tensor & self, IntArrayRef shifts, IntArrayRef dims); // aten::roll(Tensor self, int[1] shifts, int[1] dims=[]) -> Tensor
  // static Tensor & trunc_(Tensor & self);
  // static Tensor & trunc_out(Tensor & out, const Tensor & self);
  // static Tensor _s_where(const Tensor & condition, const Tensor & self, const Tensor & other);
  // static Tensor clone(const Tensor & self);
   static Tensor & resize_as_(Tensor & self, const Tensor & the_template, c10::optional<MemoryFormat> memory_format); // aten::resize_as_(Tensor(a!) self, Tensor the_template, *, int? memory_format=None) -> (Tensor(a!))
  // static Tensor & pow_out(Tensor & out, const Tensor & self, Scalar exponent);
  // static Tensor pow(const Tensor & self, Scalar exponent);
   static Tensor & zero_(Tensor & self); // aten::zero_(Tensor(a!) self) -> Tensor(a!)
  // static Scalar _local_scalar_dense(const Tensor & self);
  // static Tensor & set_(Tensor & self, Storage source);
  // static Tensor & set_(Tensor & self, Storage source, int64_t storage_offset, IntArrayRef size, IntArrayRef stride);
  // static Tensor & set_(Tensor & self, const Tensor & source);
  // static Tensor & set_(Tensor & self);
  // static bool is_set_to(const Tensor & self, const Tensor & tensor);
  // static Tensor & masked_fill_(Tensor & self, const Tensor & mask, Scalar value);
  // static Tensor & masked_fill_(Tensor & self, const Tensor & mask, const Tensor & value);
  // static Tensor & masked_scatter_(Tensor & self, const Tensor & mask, const Tensor & source);
  static Tensor view(const Tensor & self, IntArrayRef size); // aten::view(Tensor(a) self, int[] size) -> Tensor(a)
  // static Tensor & index_add_(Tensor & self, int64_t dim, const Tensor & index, const Tensor & source);
  // static Tensor & index_fill_(Tensor & self, int64_t dim, const Tensor & index, Scalar value);
  // static Tensor & index_fill_(Tensor & self, int64_t dim, const Tensor & index, const Tensor & value);
  // static Tensor & scatter_(Tensor & self, int64_t dim, const Tensor & index, const Tensor & src);
  // static Tensor & scatter_(Tensor & self, int64_t dim, const Tensor & index, Scalar value);
  // static Tensor & scatter_add_(Tensor & self, int64_t dim, const Tensor & index, const Tensor & src);
  // static Tensor & lt_(Tensor & self, Scalar other); // aten::lt_.Scalar(Tensor(a!) self, Scalar other) -> Tensor(a!)
  // static Tensor & lt_(Tensor & self, const Tensor & other); // aten::lt_.Tensor(Tensor(a!) self, Tensor other) -> Tensor(a!)
  // static Tensor & gt_(Tensor & self, Scalar other); // aten::gt_.Scalar(Tensor(a!) self, Scalar other) -> Tensor(a!)
  // static Tensor & gt_(Tensor & self, const Tensor & other); // aten::gt_.Tensor(Tensor(a!) self, Tensor other) -> Tensor(a!)
  // static Tensor & le_(Tensor & self, Scalar other); // aten::le_.Scalar(Tensor(a!) self, Scalar other) -> Tensor(a!)
  // static Tensor & le_(Tensor & self, const Tensor & other); // aten::le_.Tensor(Tensor(a!) self, Tensor other) -> Tensor(a!)
  // static Tensor & ge_(Tensor & self, Scalar other); // aten::ge_.Scalar(Tensor(a!) self, Scalar other) -> Tensor(a!)
  // static Tensor & ge_(Tensor & self, const Tensor & other); // aten::ge_.Tensor(Tensor(a!) self, Tensor other) -> Tensor(a!)
  // static Tensor & eq_(Tensor & self, Scalar other); // aten::eq_.Scalar(Tensor(a!) self, Scalar other) -> Tensor(a!)
  // static Tensor & eq_(Tensor & self, const Tensor & other); // aten::eq_.Tensor(Tensor(a!) self, Tensor other) -> Tensor(a!)
  // static Tensor & ne_(Tensor & self, Scalar other); // aten::ne_.Scalar(Tensor(a!) self, Scalar other) -> Tensor(a!)
  // static Tensor & ne_(Tensor & self, const Tensor & other); // aten::ne_.Tensor(Tensor(a!) self, Tensor other) -> Tensor(a!)
  // static Tensor __and__(const Tensor & self, Scalar other);
  // static Tensor __and__(const Tensor & self, const Tensor & other);
  // static Tensor & __iand__(Tensor & self, Scalar other);
  // static Tensor & __iand__(Tensor & self, const Tensor & other);
  // static Tensor __or__(const Tensor & self, Scalar other);
  // static Tensor __or__(const Tensor & self, const Tensor & other);
  // static Tensor & __ior__(Tensor & self, Scalar other);
  // static Tensor & __ior__(Tensor & self, const Tensor & other);
  // static Tensor __xor__(const Tensor & self, Scalar other);
  // static Tensor __xor__(const Tensor & self, const Tensor & other);
  // static Tensor & __ixor__(Tensor & self, Scalar other);
  // static Tensor & __ixor__(Tensor & self, const Tensor & other);
  // static Tensor __lshift__(const Tensor & self, Scalar other);
  // static Tensor __lshift__(const Tensor & self, const Tensor & other);
  // static Tensor & __ilshift__(Tensor & self, Scalar other);
  // static Tensor & __ilshift__(Tensor & self, const Tensor & other);
  // static Tensor __rshift__(const Tensor & self, Scalar other);
  // static Tensor __rshift__(const Tensor & self, const Tensor & other);
  // static Tensor & __irshift__(Tensor & self, Scalar other);
  // static Tensor & __irshift__(Tensor & self, const Tensor & other);
   static Tensor & tril_(Tensor & self, int64_t diagonal); // aten::tril_(Tensor(a!) self, int diagonal=0) -> Tensor(a!)
   static Tensor & triu_(Tensor & self, int64_t diagonal); // aten::triu_(Tensor(a!) self, int diagonal=0) -> Tensor(a!)
  // static Tensor & digamma_(Tensor & self);
  // static Tensor & erfinv_(Tensor & self);
  // static Tensor & pow_(Tensor & self, Scalar exponent);
  // static Tensor & pow_(Tensor & self, const Tensor & exponent);
  // static Tensor & sign_(Tensor & self);
  // static Tensor & fmod_(Tensor & self, Scalar other);
  // static Tensor & fmod_(Tensor & self, const Tensor & other);
  // static Tensor & remainder_(Tensor & self, Scalar other);
  // static Tensor & remainder_(Tensor & self, const Tensor & other);
  // static Tensor & addbmm_(Tensor & self, const Tensor & batch1, const Tensor & batch2, Scalar beta, Scalar alpha);
  // static Tensor & addbmm_out(Tensor & out, const Tensor & self, const Tensor & batch1, const Tensor & batch2, Scalar beta, Scalar alpha);
  // static Tensor addbmm(const Tensor & self, const Tensor & batch1, const Tensor & batch2, Scalar beta, Scalar alpha);
  // static Tensor & normal_(Tensor & self, double mean, double std, Generator * generator);
  // static Tensor & diag_out(Tensor & out, const Tensor & self, int64_t diagonal);
  // static Tensor diag(const Tensor & self, int64_t diagonal);
   static Tensor & triu_out(Tensor & out, const Tensor & self, int64_t diagonal); // aten::triu.out(Tensor self, int diagonal=0, *, Tensor(a!) out) -> Tensor(a!)
   static Tensor & tril_out(Tensor & out, const Tensor & self, int64_t diagonal); // aten::tril.out(Tensor self, int diagonal=0, *, Tensor(a!) out) -> Tensor(a!)
   static Tensor tril_indices(int64_t row, int64_t col, int64_t offset, const TensorOptions & options); // aten::tril_indices(int row, int col, int offset=0, *, ScalarType? dtype=long, Layout? layout=None, Device? device=None, bool? pin_memory=None) -> Tensor
   static Tensor triu_indices(int64_t row, int64_t col, int64_t offset, const TensorOptions & options); // aten::triu_indices(int row, int col, int offset=0, *, ScalarType? dtype=long, Layout? layout=None, Device? device=None, bool? pin_memory=None) -> Tensor
  // static Tensor trace(const Tensor & self);
  // static Tensor & ne_out(Tensor & out, const Tensor & self, Scalar other);
  // static Tensor ne(const Tensor & self, Scalar other);
  // static Tensor & ne_out(Tensor & out, const Tensor & self, const Tensor & other);
  // static Tensor ne(const Tensor & self, const Tensor & other);
  static Tensor & eq_out(Tensor & out, const Tensor & self, Scalar other); // aten::eq.Scalar_out(Tensor self, Scalar other, *, Tensor(a!) out) -> Tensor(a!)
  static Tensor eq(const Tensor & self, Scalar other); // aten::eq.Scalar(Tensor self, Scalar other) -> Tensor
  static Tensor & eq_out(Tensor & out, const Tensor & self, const Tensor & other); // aten::eq.Tensor_out(Tensor self, Tensor other, *, Tensor(a!) out) -> Tensor(a!)
  static Tensor eq(const Tensor & self, const Tensor & other); // aten::eq.Tensor(Tensor self, Tensor other) -> Tensor
  // static Tensor & eq_out(Tensor & out, const Tensor & self, Scalar other);
  // static Tensor eq(const Tensor & self, Scalar other);
  // static Tensor & eq_out(Tensor & out, const Tensor & self, const Tensor & other);
  // static Tensor eq(const Tensor & self, const Tensor & other);
  // static Tensor & ge_out(Tensor & out, const Tensor & self, Scalar other);
  // static Tensor ge(const Tensor & self, Scalar other);
  // static Tensor & ge_out(Tensor & out, const Tensor & self, const Tensor & other);
  // static Tensor ge(const Tensor & self, const Tensor & other);
  // static Tensor & le_out(Tensor & out, const Tensor & self, Scalar other);
  // static Tensor le(const Tensor & self, Scalar other);
  // static Tensor & le_out(Tensor & out, const Tensor & self, const Tensor & other);
  // static Tensor le(const Tensor & self, const Tensor & other);
  // static Tensor & gt_out(Tensor & out, const Tensor & self, Scalar other);
  // static Tensor gt(const Tensor & self, Scalar other);
  // static Tensor & gt_out(Tensor & out, const Tensor & self, const Tensor & other);
  // static Tensor gt(const Tensor & self, const Tensor & other);
  // static Tensor & lt_out(Tensor & out, const Tensor & self, Scalar other);
  // static Tensor lt(const Tensor & self, Scalar other);
  // static Tensor & lt_out(Tensor & out, const Tensor & self, const Tensor & other);
  // static Tensor lt(const Tensor & self, const Tensor & other);
  // static Tensor & take_out(Tensor & out, const Tensor & self, const Tensor & index);
  // static Tensor take(const Tensor & self, const Tensor & index);
  // static Tensor & index_select_out(Tensor & out, const Tensor & self, int64_t dim, const Tensor & index);
  // static Tensor index_select(const Tensor & self, int64_t dim, const Tensor & index);
  // static Tensor & masked_select_out(Tensor & out, const Tensor & self, const Tensor & mask);
  // static Tensor masked_select(const Tensor & self, const Tensor & mask);
  // static Tensor & nonzero_out(Tensor & out, const Tensor & self);
  // static Tensor nonzero(const Tensor & self);
  // static Tensor & gather_out(Tensor & out, const Tensor & self, int64_t dim, const Tensor & index, bool sparse_grad);
  // static Tensor gather(const Tensor & self, int64_t dim, const Tensor & index, bool sparse_grad);
  // static Tensor digamma(const Tensor & self);
  // static Tensor & erfinv_out(Tensor & out, const Tensor & self);
  // static Tensor erfinv(const Tensor & self);
  // static Tensor & sign_out(Tensor & out, const Tensor & self);
  // static Tensor sign(const Tensor & self);
  // static Tensor & fmod_out(Tensor & out, const Tensor & self, Scalar other);
  // static Tensor fmod(const Tensor & self, Scalar other);
  // static Tensor & fmod_out(Tensor & out, const Tensor & self, const Tensor & other);
  // static Tensor fmod(const Tensor & self, const Tensor & other);
  // static Tensor & remainder_out(Tensor & out, const Tensor & self, Scalar other);
  // static Tensor remainder(const Tensor & self, Scalar other);
  // static Tensor & remainder_out(Tensor & out, const Tensor & self, const Tensor & other);
  // static Tensor remainder(const Tensor & self, const Tensor & other);
  // static Tensor & min_out(Tensor & out, const Tensor & self, const Tensor & other);
  // static Tensor min(const Tensor & self, const Tensor & other);
  // static Tensor min(const Tensor & self);
  // static Tensor & max_out(Tensor & out, const Tensor & self, const Tensor & other);
  // static Tensor max(const Tensor & self, const Tensor & other);
  // static Tensor max(const Tensor & self);
  // static Tensor median(const Tensor & self);
  // static std::tuple<Tensor &,Tensor &> sort_out(Tensor & values, Tensor & indices, const Tensor & self, int64_t dim, bool descending);
  // static std::tuple<Tensor,Tensor> sort(const Tensor & self, int64_t dim, bool descending);
  static std::tuple<Tensor &,Tensor &> topk_out(Tensor & values, Tensor & indices, const Tensor & self, int64_t k, int64_t dim, bool largest, bool sorted); // aten::topk.values(Tensor self, int k, int dim=-1, bool largest=True, bool sorted=True, *, Tensor(a!) values, Tensor(b!) indices) ->(Tensor(a!) values, Tensor(b!) indices)
  static std::tuple<Tensor,Tensor> topk(const Tensor & self, int64_t k, int64_t dim, bool largest, bool sorted); // aten::topk(Tensor self, int k, int dim=-1, bool largest=True, bool sorted=True) -> (Tensor values, Tensor indices)
  // static Tensor unfold(const Tensor & self, int64_t dimension, int64_t size, int64_t step);
  // static bool equal(const Tensor & self, const Tensor & other);
  // static Tensor & pow_out(Tensor & out, const Tensor & self, const Tensor & exponent);
  // static Tensor pow(const Tensor & self, const Tensor & exponent);
  // static Tensor & pow_out(Tensor & out, Scalar self, const Tensor & exponent);
  // static Tensor pow(Scalar self, const Tensor & exponent);
  // static Tensor _addr(const Tensor & self, const Tensor & vec1, const Tensor & vec2, Scalar beta, Scalar alpha);
  // static Tensor & _addr_(Tensor & self, const Tensor & vec1, const Tensor & vec2, Scalar beta, Scalar alpha);
  // static Tensor & _addr_out(Tensor & out, const Tensor & self, const Tensor & vec1, const Tensor & vec2, Scalar beta, Scalar alpha);
  // static Tensor & _index_copy_(Tensor & self, int64_t dim, const Tensor & index, const Tensor & source);
  // static Tensor _cumsum(const Tensor & self, int64_t dim);
  // static Tensor & _cumsum_out(Tensor & out, const Tensor & self, int64_t dim);
  // static Tensor _cumprod(const Tensor & self, int64_t dim);
  // static Tensor & _cumprod_out(Tensor & out, const Tensor & self, int64_t dim);
  static Tensor addmm(const Tensor & self, const Tensor & mat1, const Tensor & mat2, Scalar beta, Scalar alpha); // aten::addmm(Tensor self, Tensor mat1, Tensor mat2, *, Scalar beta=1, Scalar alpha=1) -> Tensor
  // static Tensor & _addmm_out(Tensor & out, const Tensor & self, const Tensor & mat1, const Tensor & mat2, Scalar beta, Scalar alpha);
  // static Tensor _addmm(const Tensor & self, const Tensor & mat1, const Tensor & mat2, Scalar beta, Scalar alpha);
  // static Tensor & _addmm_(Tensor & self, const Tensor & mat1, const Tensor & mat2, Scalar beta, Scalar alpha);
  // static Tensor _cat(TensorList tensors, int64_t dim);
  // static Tensor & _cat_out(Tensor & out, TensorList tensors, int64_t dim);
  // static std::tuple<Tensor,Tensor> _mode(const Tensor & self, int64_t dim, bool keepdim);
  // static std::tuple<Tensor &,Tensor &> _mode_out(Tensor & values, Tensor & indices, const Tensor & self, int64_t dim, bool keepdim);
  // static std::tuple<Tensor,Tensor> _max(const Tensor & self, int64_t dim, bool keepdim);
  // static std::tuple<Tensor &,Tensor &> _max_out(Tensor & max, Tensor & max_indices, const Tensor & self, int64_t dim, bool keepdim);
  // static std::tuple<Tensor,Tensor> _min(const Tensor & self, int64_t dim, bool keepdim);
  // static std::tuple<Tensor &,Tensor &> _min_out(Tensor & min, Tensor & min_indices, const Tensor & self, int64_t dim, bool keepdim);
  // static Tensor & binary_cross_entropy_out(Tensor & out, const Tensor & self, const Tensor & target, const Tensor & weight, int64_t reduction);
  // static Tensor binary_cross_entropy(const Tensor & self, const Tensor & target, const Tensor & weight, int64_t reduction);
  // static Tensor & binary_cross_entropy_backward_out(Tensor & grad_input, const Tensor & grad_output, const Tensor & self, const Tensor & target, const Tensor & weight, int64_t reduction);
  // static Tensor binary_cross_entropy_backward(const Tensor & grad_output, const Tensor & self, const Tensor & target, const Tensor & weight, int64_t reduction);
  // static Tensor & mse_loss_out(Tensor & out, const Tensor & self, const Tensor & target, int64_t reduction);
  // static Tensor mse_loss(const Tensor & self, const Tensor & target, int64_t reduction);
  // static std::tuple<Tensor &,Tensor &> nll_loss_forward_out(Tensor & output, Tensor & total_weight, const Tensor & self, const Tensor & target, const Tensor & weight, int64_t reduction, int64_t ignore_index);
  static std::tuple<Tensor,Tensor> nll_loss_forward(const Tensor & self, const Tensor & target, const Tensor & weight, int64_t reduction, int64_t ignore_index); // aten::nll_loss_forward(Tensor self, Tensor target, Tensor? weight, int reduction, int ignore_index) -> (Tensor output, Tensor total_weight)
  // static Tensor & nll_loss_backward_out(Tensor & grad_input, const Tensor & grad_output, const Tensor & self, const Tensor & target, const Tensor & weight, int64_t reduction, int64_t ignore_index, const Tensor & total_weight);
  // static Tensor nll_loss_backward(const Tensor & grad_output, const Tensor & self, const Tensor & target, const Tensor & weight, int64_t reduction, int64_t ignore_index, const Tensor & total_weight);
  // static Tensor & softplus_out(Tensor & out, const Tensor & self, Scalar beta, Scalar threshold);
  // static Tensor softplus(const Tensor & self, Scalar beta, Scalar threshold);
  // static Tensor & softplus_backward_out(Tensor & grad_input, const Tensor & grad_output, const Tensor & self, Scalar beta, Scalar threshold, const Tensor & output);
  // static Tensor softplus_backward(const Tensor & grad_output, const Tensor & self, Scalar beta, Scalar threshold, const Tensor & output);
   static Tensor & adaptive_avg_pool2d_out(Tensor & out, const Tensor & self, IntArrayRef output_size); // aten::adaptive_avg_pool2d.out(Tensor self, int[2] output_size, *, Tensor(a!) out) -> Tensor(a!)
   static Tensor _adaptive_avg_pool2d(const Tensor & self, IntArrayRef output_size); // aten::_adaptive_avg_pool2d(Tensor self, int[2] output_size) -> Tensor
   static Tensor adaptive_avg_pool2d(const Tensor & self, IntArrayRef output_size); // aten::adaptive_avg_pool2d(Tensor self, int[2] output_size) -> Tensor
  // static Tensor _adaptive_avg_pool2d_backward(const Tensor & grad_output, const Tensor & self);
  static Tensor & avg_pool2d_out(Tensor & out, const Tensor & self, IntArrayRef kernel_size, IntArrayRef stride, IntArrayRef padding, bool ceil_mode, bool count_include_pad, c10::optional<int64_t> divisor_override); // aten::avg_pool2d.out(Tensor self, int[2] kernel_size, int[2] stride=[], int[2] padding=0, bool ceil_mode=False, bool count_include_pad=True, int? divisor_override=None, *, Tensor(a!) out) -> Tensor(a!)
  static Tensor avg_pool2d(const Tensor & self, IntArrayRef kernel_size, IntArrayRef stride, IntArrayRef padding, bool ceil_mode, bool count_include_pad, c10::optional<int64_t> divisor_override); // aten::avg_pool2d(Tensor self, int[2] kernel_size, int[2] stride=[], int[2] padding=0, bool ceil_mode=False, bool count_include_pad=True, int? divisor_override=None) -> Tensor
  // static Tensor & avg_pool2d_backward_out(Tensor & grad_input, const Tensor & grad_output, const Tensor & self, IntArrayRef kernel_size, IntArrayRef stride, IntArrayRef padding, bool ceil_mode, bool count_include_pad, c10::optional<int64_t> divisor_override);
  // static Tensor avg_pool2d_backward(const Tensor & grad_output, const Tensor & self, IntArrayRef kernel_size, IntArrayRef stride, IntArrayRef padding, bool ceil_mode, bool count_include_pad, c10::optional<int64_t> divisor_override);
  static std::tuple<Tensor &,Tensor &> max_pool2d_with_indices_out(Tensor & out, Tensor & indices, const Tensor & self, IntArrayRef kernel_size, IntArrayRef stride, IntArrayRef padding, IntArrayRef dilation, bool ceil_mode); // aten::max_pool2d_with_indices.out(Tensor self, int[2] kernel_size, int[2] stride=[], int[2] padding=0, int[2] dilation=1, bool ceil_mode=False, *, Tensor(a!) out, Tensor(b!) indices) -> (Tensor(a!), Tensor(b!))
  static std::tuple<Tensor,Tensor> max_pool2d_with_indices(const Tensor & self, IntArrayRef kernel_size, IntArrayRef stride, IntArrayRef padding, IntArrayRef dilation, bool ceil_mode); // aten::max_pool2d_with_indices(Tensor self, int[2] kernel_size, int[2] stride=[], int[2] padding=0, int[2] dilation=1, bool ceil_mode=False) -> (Tensor, Tensor)
  // static Tensor & max_pool2d_with_indices_backward_out(Tensor & grad_input, const Tensor & grad_output, const Tensor & self, IntArrayRef kernel_size, IntArrayRef stride, IntArrayRef padding, IntArrayRef dilation, bool ceil_mode, const Tensor & indices);
  // static Tensor max_pool2d_with_indices_backward(const Tensor & grad_output, const Tensor & self, IntArrayRef kernel_size, IntArrayRef stride, IntArrayRef padding, IntArrayRef dilation, bool ceil_mode, const Tensor & indices);
   static Tensor & upsample_nearest2d_out(Tensor & out, const Tensor & self, IntArrayRef output_size); // aten::upsample_nearest2d.out(Tensor self, int[2] output_size, *, Tensor(a!) out) -> Tensor(a!)
   static Tensor upsample_nearest2d(const Tensor & self, IntArrayRef output_size); // aten::upsample_nearest2d(Tensor self, int[2] output_size) -> Tensor
  // static Tensor & upsample_nearest2d_backward_out(Tensor & grad_input, const Tensor & grad_output, IntArrayRef output_size, IntArrayRef input_size);
  // static Tensor upsample_nearest2d_backward(const Tensor & grad_output, IntArrayRef output_size, IntArrayRef input_size);
  // static Tensor & sigmoid_backward_out(Tensor & grad_input, const Tensor & grad_output, const Tensor & output);
  // static Tensor sigmoid_backward(const Tensor & grad_output, const Tensor & output);
  // static Tensor & tanh_backward_out(Tensor & grad_input, const Tensor & grad_output, const Tensor & output);
  // static Tensor tanh_backward(const Tensor & grad_output, const Tensor & output);
};

} // namespace at
