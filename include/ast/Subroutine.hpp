#pragma once

#include <string>
#include "AST.hpp"


class Subroutine : public AST {
public:
    Subroutine(node_ptr id, node_ptr params, node_ptr body)
        : _id(id), _params(params), _body(body) {
    }
    ~Subroutine();
    std::string print() const {
        std::string code = "- Subroutine\n";
        for (AST *child : children) {
            if (child != nullptr) {
                code += " " + child->print() + "\n";
            }
        }
        return code;
    }

private:
    node_ptr _id;
    node_ptr _params;
    node_ptr _body;
};