
#include "cpu/exec/template-start.h"

#define instr test

static void do_execute () {
	DATA_TYPE index = op_dest->val & op_src->val;
//	OPERAND_W(op_dest, result);

	/* TODO: Update EFLAGS. */
        cpu.eflags.CF=0;
	cpu.eflags.ZF=(index==0);
	cpu.eflags.PF=1;
	while (index)
       {
	       if(index&0x1) cpu.eflags.PF=!cpu.eflags.PF;
	       index&=(index-1);
        }
        //cpu.eflags.AF=(result^(op_dest->val))>>4;
        cpu.eflags.SF=index<0;
        cpu.eflags.OF=0;
	panic("please implement me");

	print_asm_template2();
}

//#if DATA_BYTE == 2 || DATA_BYTE == 4
make_instr_helper(r2rm)
//#endif

#include "cpu/exec/template-end.h"
