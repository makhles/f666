#ifndef __AST_PARAMETER_STATEMENT_HPP__
#define __AST_PARAMETER_STATEMENT_HPP__

#include "AST.hpp"

class ParameterStatement : public AST {
public:
    ParameterStatement(node_ptrs&& constants)
        : m_constants(std::forward<node_ptrs>(constants)) {
    }
    ~ParameterStatement() {}
    void print(int width) const {
        std::cout << std::setw(width) << "- " << "ParameterStatement:" << std::endl;
        for (auto &child : m_constants) {
            child->print(width + 4);
        }
    }

    void addChild(node_ptr child) {
        m_constants.emplace_back(std::move(child));
    }

private:
    node_ptrs m_constants;
};

#endif /* END __AST_PARAMETER_STATEMENT_HPP__ */