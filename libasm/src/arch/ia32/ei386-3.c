/*
** Author  : <strauss at rfdslabs com br>
** Started : Wed Dec  6 01:40:17 2006
** Updated : Wed Dec  6 01:40:17 2006
*/

#include <libasm.h>
#include <libasm-int.h>

/*
  <i386 func="i386_rdtsc" opcode="0x31"/>
 */

int	i386_rdtsc(asm_instr *new, u_char *opcode, u_int len, asm_processor *proc) {
  new->ptr_instr = opcode;
  new->len += 1;
  new->instr = ASM_RDTSC;
  return (new->len);
}
