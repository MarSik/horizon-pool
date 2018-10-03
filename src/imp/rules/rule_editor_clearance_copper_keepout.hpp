#pragma once
#include "rule_editor.hpp"

namespace horizon {
class RuleEditorClearanceCopperKeepout : public RuleEditor {
    using RuleEditor::RuleEditor;

public:
    void populate() override;

private:
    class RuleClearanceCopperKeepout *rule2;
    void set_some(int row, int col);
    std::map<std::pair<int, int>, class SpinButtonDim *> spin_buttons;
};
} // namespace horizon
