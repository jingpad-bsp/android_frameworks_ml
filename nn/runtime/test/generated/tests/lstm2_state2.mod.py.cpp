// DO NOT EDIT;
// Generated by ml/nn/runtime/test/specs/generate_test.sh
#include "../../TestGenerated.h"

namespace lstm2_state2 {
std::vector<MixedTypedExample> examples = {
// Generated lstm2_state2 test
#include "generated/examples/lstm2_state2.example.cpp"
};
// Generated model constructor
#include "generated/models/lstm2_state2.model.cpp"
} // namespace lstm2_state2
TEST_F(GeneratedTests, lstm2_state2) {
    execute(lstm2_state2::CreateModel,
            lstm2_state2::is_ignored,
            lstm2_state2::examples);
}