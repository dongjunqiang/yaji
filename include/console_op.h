#ifndef INCLUDE_CONSOLE_OP_H
#define INCLUDE_CONSOLE_OP_H

#include "ast.h"

struct jaz_ast_entry *jaz_op_show(struct jaz_ast *ast, struct jaz_ast_entry *entry);
struct jaz_ast_entry *jaz_op_print(struct jaz_ast *ast, struct jaz_ast_entry *entry);

#endif
