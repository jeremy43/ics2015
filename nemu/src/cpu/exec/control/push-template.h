
#include "cpu/exec/template-start.h"
#include "cpu/exec/helper.h"
#include "cpu/reg.h"

#define instr push

//#if DATA_BYTE == 2 || DATA_BYTE == 4
static void do_execute() {
		cpu.esp=cpu.esp-DATA_BYTE;
		swaddr_write(cpu.esp+1,DATA_BYTE,op_src->val);
					
		print_asm_template1();
}
make_instr_helper(r)
make_instr_helper(rm)
make_instr_helper(i)
//#if DATA_BYTE==2||DATA_BYTE==4
//make_instr_helper(si)
//#endif
#include "cpu/exec/template-end.h"

