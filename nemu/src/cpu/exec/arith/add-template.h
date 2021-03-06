

#include "cpu/exec/template-start.h"

#define instr add
static void do_execute(){
	DATA_TYPE result = op_dest->val + op_src->val;
	cpu.eflags.CF=result<op_dest->val;
	OPERAND_W(op_dest, result);

	/* TODO: Update EFLAGS. */
	DATA_TYPE_S index=result;
        //cpu.eflags.CF=result<op_dest->val;
	cpu.eflags.ZF=(result==0);
	cpu.eflags.PF=1;
        cpu.eflags.SF=index<0;
	while (index)
       {
	       if(index&0x1) cpu.eflags.PF=!cpu.eflags.PF;
	       index&=(index-1);
        }
        cpu.eflags.AF=(result^(op_dest->val))>>4;
	if (MSB(op_src->val)!=MSB(op_dest->val)&&(MSB(op_dest->val)!=MSB(result))) cpu.eflags.OF = 1; else cpu.eflags.OF = 0;
print_asm_template2();  
}
make_instr_helper(i2a)
//make_insre_helper(i2r)

make_instr_helper(i2rm)
make_instr_helper(r2rm)
make_instr_helper(rm2r)
#if (DATA_BYTE == 2 || DATA_BYTE == 4)
make_instr_helper(si2rm)
#endif
#include "cpu/exec/template-end.h"
