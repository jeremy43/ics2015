#include "cpu/exec/template-start.h"
#include "cpu/exec/helper.h"
#include "cpu/reg.h"

#define instr call
make_helper(concat(call_rel32_, SUFFIX))
{
	 
	   
//	printf("HHHH\n");
	   swaddr_t addr=instr_fetch(eip+1,DATA_BYTE);
	   cpu.esp-=DATA_BYTE;
	   MEM_W(cpu.esp,cpu.eip+DATA_BYTE);
//	   cpu.eip+=op_src->val;
	   cpu.eip+=addr;
	   if (DATA_BYTE==2)
	         cpu.eip&=0x0000ffff;
	   print_asm_template1();
           return 1+DATA_BYTE;
}
static void do_execute() {
               DATA_TYPE_S addr=op_dest->val;
//	       DATA_TYPE index=addr;
	       cpu.esp-=DATA_BYTE;
	       MEM_W(cpu.esp,cpu.eip+DATA_BYTE);
//	       if (index<0x100000)cpu.eip+=addr;
	//         else 
        	 cpu.eip=addr - 1;
	print_asm_template1();
}


make_instr_helper(rm)
#include "cpu/exec/template-end.h"

