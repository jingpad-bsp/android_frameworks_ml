// DO NOT EDIT;
// Generated by ml/nn/runtime/test/specs/generate_test.sh
#include "../../TestGenerated.h"

namespace batch_to_space_float_1 {
std::vector<MixedTypedExample> examples = {
// Generated batch_to_space_float_1 test
#include "generated/examples/batch_to_space_float_1.example.cpp"
};
// Generated model constructor
#include "generated/models/batch_to_space_float_1.model.cpp"
} // namespace batch_to_space_float_1
TEST_F(GeneratedTests, batch_to_space_float_1) {
    execute(batch_to_space_float_1::CreateModel,
            batch_to_space_float_1::is_ignored,
            batch_to_space_float_1::examples);
}