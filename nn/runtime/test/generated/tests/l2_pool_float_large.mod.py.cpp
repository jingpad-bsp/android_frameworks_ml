// DO NOT EDIT;
// Generated by ml/nn/runtime/test/specs/generate_test.sh
#include "../../TestGenerated.h"

namespace l2_pool_float_large {
std::vector<MixedTypedExample> examples = {
// Generated l2_pool_float_large test
#include "generated/examples/l2_pool_float_large.example.cpp"
};
// Generated model constructor
#include "generated/models/l2_pool_float_large.model.cpp"
} // namespace l2_pool_float_large
TEST_F(GeneratedTests, l2_pool_float_large) {
    execute(l2_pool_float_large::CreateModel,
            l2_pool_float_large::is_ignored,
            l2_pool_float_large::examples);
}