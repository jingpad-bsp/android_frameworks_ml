// clang-format off
// Generated file (from: argmax_2.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace argmax_2 {
// Generated argmax_2 test
#include "generated/examples/argmax_2.example.cpp"
// Generated model constructor
#include "generated/models/argmax_2.model.cpp"
} // namespace argmax_2

TEST_F(GeneratedTests, argmax_2) {
    execute(argmax_2::CreateModel,
            argmax_2::is_ignored,
            argmax_2::get_examples());
}

TEST_F(GeneratedTests, argmax_2_relaxed) {
    execute(argmax_2::CreateModel_relaxed,
            argmax_2::is_ignored_relaxed,
            argmax_2::get_examples_relaxed());
}

TEST_F(GeneratedTests, argmax_2_float16) {
    execute(argmax_2::CreateModel_float16,
            argmax_2::is_ignored_float16,
            argmax_2::get_examples_float16());
}

TEST_F(GeneratedTests, argmax_2_int32) {
    execute(argmax_2::CreateModel_int32,
            argmax_2::is_ignored_int32,
            argmax_2::get_examples_int32());
}

TEST_F(GeneratedTests, argmax_2_quant8) {
    execute(argmax_2::CreateModel_quant8,
            argmax_2::is_ignored_quant8,
            argmax_2::get_examples_quant8());
}

#if 0
TEST_F(DynamicOutputShapeTests, argmax_2_dynamic_output_shape) {
    execute(argmax_2::CreateModel_dynamic_output_shape,
            argmax_2::is_ignored_dynamic_output_shape,
            argmax_2::get_examples_dynamic_output_shape());
}

#endif
#if 0
TEST_F(DynamicOutputShapeTests, argmax_2_dynamic_output_shape_relaxed) {
    execute(argmax_2::CreateModel_dynamic_output_shape_relaxed,
            argmax_2::is_ignored_dynamic_output_shape_relaxed,
            argmax_2::get_examples_dynamic_output_shape_relaxed());
}

#endif
#if 0
TEST_F(DynamicOutputShapeTests, argmax_2_dynamic_output_shape_float16) {
    execute(argmax_2::CreateModel_dynamic_output_shape_float16,
            argmax_2::is_ignored_dynamic_output_shape_float16,
            argmax_2::get_examples_dynamic_output_shape_float16());
}

#endif
#if 0
TEST_F(DynamicOutputShapeTests, argmax_2_dynamic_output_shape_int32) {
    execute(argmax_2::CreateModel_dynamic_output_shape_int32,
            argmax_2::is_ignored_dynamic_output_shape_int32,
            argmax_2::get_examples_dynamic_output_shape_int32());
}

#endif
#if 0
TEST_F(DynamicOutputShapeTests, argmax_2_dynamic_output_shape_quant8) {
    execute(argmax_2::CreateModel_dynamic_output_shape_quant8,
            argmax_2::is_ignored_dynamic_output_shape_quant8,
            argmax_2::get_examples_dynamic_output_shape_quant8());
}

#endif
