
#include "cpu/exec/template-start.h"

#define instr setle

static void do_execute () {
	int  index;
	if(cpu.eflags.ZF==1&&(cpu.eflags.OF!=cpu.eflags.SF))
      	 index=1;
	else index=0;
	OPERAND_W(op_dest, index);
       // else OPERAND_W(op_dest,0);
	print_asm_template1();
}

make_instr_helper(rm)

#include "cpu/exec/template-end.h"
