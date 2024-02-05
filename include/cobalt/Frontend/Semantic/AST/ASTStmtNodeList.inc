#ifndef REG_STMT_NODE
#define REG_STMT_NODE(x) REG_NODE(x)
#endif
REG_STMT_NODE(Stmt)
REG_STMT_NODE(If)
REG_STMT_NODE(While)
REG_STMT_NODE(For)
REG_STMT_NODE(Return)
REG_STMT_NODE(Break)
REG_STMT_NODE(Continue)
REG_STMT_NODE(Block)
REG_STMT_NODE(VariableDef)
REG_STMT_NODE(FuncDef)
REG_STMT_NODE(StructDef)
REG_STMT_NODE(AliasDef)
#undef REG_STMT_NODE