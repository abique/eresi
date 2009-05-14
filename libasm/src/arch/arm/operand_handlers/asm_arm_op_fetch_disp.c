#include <libasm.h>

int asm_arm_op_fetch_disp(asm_operand *operand, u_char *opcode,
                          int otype, asm_instr *ins)
{
  LIBASM_PROFILE_FIN();

  operand->content = ASM_ARM_OTYPE_DISP;
  operand->type = ASM_OPTYPE_IMM;

  LIBASM_PROFILE_FOUT(0);
}