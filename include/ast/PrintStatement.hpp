#ifndef __AST_PRINT_STATEMENT_HPP__
#define __AST_PRINT_STATEMENT_HPP__

#include "AST.hpp"

class PrintStatement : public AST {
public:
    PrintStatement(node_ptrs&& arguments)
        : m_arguments(std::forward<node_ptrs>(arguments)) {
    }
    ~PrintStatement() {}
    void print(int width) const {
        std::cout << std::setw(width) << "- " << "PrintStatement:" << std::endl;
        std::cout << std::setw(width + 4) << "- " << "arguments: " << std::endl;
        for (auto &child : m_arguments) {
            child->print(width + 8);
        }
    }
    virtual llvm::Value* codeGen(CodeGenContext& context);

private:
    node_ptrs m_arguments;
};

#endif /* END __AST_PRINT_STATEMENT_HPP__ */