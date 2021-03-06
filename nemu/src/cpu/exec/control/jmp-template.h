#include "cpu/exec/helper.h"
#include "cpu/exec/template-start.h"
#include "cpu/decode/modrm.h"
#define instr jmp
static void do_execute() {
	DATA_TYPE_S index=op_src->val;
//        DATA_TYPE addr=index;
/*	if(DATA_BYTE==2)
    {
	if(addr>0x100000)
	cpu.eip=MEM_R(index)&0x0000ffff;
	else
	{ 
	  cpu.eip+=MEM_R(index);
	  cpu.eip&=0x0000ffff;
	 }
   }
	else
	{
	 if(addr>0x1500)
		 cpu.eip=MEM_R(index) - 2;
          else cpu.eip+=MEM_R(index);
       	}
*/
	cpu.eip = index -len-1;
	print_asm_template1();
}

make_instr_helper(rm);
make_helper(concat(jmp_rel_,SUFFIX))
{
     	DATA_TYPE_S addr=instr_fetch(eip+1,DATA_BYTE); 
   cpu.eip+=addr;
   print_asm("jmp"  " $0x%x", cpu.eip+DATA_BYTE+1);
    return 1+DATA_BYTE;
}
#include "cpu/exec/template-end.h"

