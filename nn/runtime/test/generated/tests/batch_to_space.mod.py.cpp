// DO NOT EDIT;
// Generated by ml/nn/runtime/test/specs/generate_test.sh
#include "../../TestGenerated.h"

namespace batch_to_space {
std::vector<MixedTypedExample> examples = {
// Generated batch_to_space test
#include "generated/examples/batch_to_space.example.cpp"
};
// Generated model constructor
#include "generated/models/batch_to_space.model.cpp"
} // namespace batch_to_space
TEST_F(GeneratedTests, batch_to_space) {
    execute(batch_to_space::CreateModel,
            batch_to_space::is_ignored,
            batch_to_space::examples);
}