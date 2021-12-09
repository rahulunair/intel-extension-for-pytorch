#pragma once

#include <ATen/Tensor.h>

#include <c10/core/Scalar.h>
#include <torch/csrc/jit/runtime/custom_operator.h>

#include "csrc/cpu/ideep/ideep.hpp"

namespace torch {
namespace jit {

// XXX: PyTorch does not support nesting namespace
// And the alias analysis is not working for namespace other than aten ...
// So we fake some op namespaces to workaround that.
namespace ipex {
static auto matmul_div = Symbol::fromQualString("ipex::matmul_div");

} // namespace ipex

} // namespace jit
} // namespace torch

namespace torch_ipex {
namespace cpu {

at::Tensor dil_matmul_div(
    const at::Tensor& left,
    const at::Tensor& right,
    at::Tensor out_opt,
    const at::Tensor& div_input);

at::Tensor dil_matmul_div(
    const at::Tensor& left,
    const at::Tensor& right,
    at::Tensor out_opt,
    const c10::Scalar& div_input);

} // namespace cpu
} // namespace torch_ipex
