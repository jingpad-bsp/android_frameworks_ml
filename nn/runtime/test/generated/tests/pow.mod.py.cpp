// clang-format off
// Generated file (from: pow.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace pow {
// Generated pow test
#include "generated/examples/pow.example.cpp"
// Generated model constructor
#include "generated/models/pow.model.cpp"
} // namespace pow

TEST_F(GeneratedTests, pow) {
    execute(pow::CreateModel,
            pow::is_ignored,
            pow::get_examples());
}

TEST_F(GeneratedTests, pow_relaxed) {
    execute(pow::CreateModel_relaxed,
            pow::is_ignored_relaxed,
            pow::get_examples_relaxed());
}

TEST_F(GeneratedTests, pow_float16) {
    execute(pow::CreateModel_float16,
            pow::is_ignored_float16,
            pow::get_examples_float16());
}

TEST_F(GeneratedTests, pow_2) {
    execute(pow::CreateModel_2,
            pow::is_ignored_2,
            pow::get_examples_2());
}

TEST_F(GeneratedTests, pow_relaxed_2) {
    execute(pow::CreateModel_relaxed_2,
            pow::is_ignored_relaxed_2,
            pow::get_examples_relaxed_2());
}

TEST_F(GeneratedTests, pow_float16_2) {
    execute(pow::CreateModel_float16_2,
            pow::is_ignored_float16_2,
            pow::get_examples_float16_2());
}

TEST_F(GeneratedTests, pow_3) {
    execute(pow::CreateModel_3,
            pow::is_ignored_3,
            pow::get_examples_3());
}

TEST_F(GeneratedTests, pow_relaxed_3) {
    execute(pow::CreateModel_relaxed_3,
            pow::is_ignored_relaxed_3,
            pow::get_examples_relaxed_3());
}

TEST_F(GeneratedTests, pow_float16_3) {
    execute(pow::CreateModel_float16_3,
            pow::is_ignored_float16_3,
            pow::get_examples_float16_3());
}

