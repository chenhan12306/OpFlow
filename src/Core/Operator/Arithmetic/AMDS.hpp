// ----------------------------------------------------------------------------
//
// Copyright (c) 2019 - 2021 by the OpFlow developers
//
// This file is part of OpFlow.
//
// OpFlow is free software and is distributed under the MPL v2.0 license.
// The full text of the license can be found in the file LICENSE at the top
// level directory of OpFlow.
//
// ----------------------------------------------------------------------------

#ifndef OPFLOW_AMDS_HPP
#define OPFLOW_AMDS_HPP

#include "Core/Expr/Expr.hpp"
#include "Core/Expr/Expression.hpp"
#include "Core/Field/FieldExpr.hpp"
#include "Core/Field/MeshBased/MeshBasedFieldExprTrait.hpp"
#include "Core/Field/MeshBased/SemiStructured/SemiStructuredFieldExprTrait.hpp"
#include "Core/Field/MeshBased/Structured/StructuredFieldExprTrait.hpp"
#include "Core/Meta.hpp"
#include "Core/Operator/BinOpDefMacros.hpp.in"
#include "Core/Operator/Operator.hpp"
#include "Core/Operator/UniOpDefMacros.hpp.in"
#include <cmath>
#include <type_traits>
#include <utility>

namespace OpFlow {

    DEFINE_BINOP(Add, +)
    DEFINE_BINOP(Mul, *)
    DEFINE_BINOP(Sub, -)
    DEFINE_BINOP(Div, /)
    DEFINE_BINOP(Mod, %)
    DEFINE_BINFUNC(Pow, std::pow, pow)

    DEFINE_UNIOP(Neg, -)
    DEFINE_UNIOP(Pos, +)
    DEFINE_UNIFUNC(Sqrt, std::sqrt, sqrt)

#undef DEFINE_BINOP
#undef DEFINE_BINFUNC
#undef DEFINE_UNIOP
#undef DEFINE_UNIFUNC
}// namespace OpFlow
#endif//OPFLOW_AMDS_HPP