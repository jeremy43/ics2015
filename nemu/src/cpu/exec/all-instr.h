#include "prefix/prefix.h"

#include "data-mov/mov.h"
#include "data-mov/xchg.h"
#include "data-mov/leave.h"
#include "data-mov/pop.h"
#include "arith/dec.h"
#include "arith/inc.h"
#include "arith/neg.h"
#include "arith/imul.h"
#include "arith/mul.h"
#include "arith/add.h"
#include "arith/adc.h"
#include "arith/sbb.h"
#include "arith/idiv.h"
#include "arith/div.h"
#include "arith/sub.h"
#include "arith/cmp.h"
#include "arith/call.h"
#include "control/je.h"
#include "control/push.h"
#include "logic/and.h"
#include "logic/or.h"
#include "logic/setcc/seta.h"
#include "logic/setcc/setae.h"
#include "logic/setcc/setb.h"
#include "logic/setcc/setbe.h"
#include "logic/setcc/setno.h"
#include "logic/setcc/sete.h"
#include "logic/setcc/setg.h"
#include "logic/setcc/setge.h"
#include "logic/setcc/setl.h"
#include "logic/setcc/setle.h"
#include "logic/setcc/setne.h"
//#include "logic/setcc/setno.h"
#include "logic/setcc/setnp.h"
#include "logic/setcc/setns.h"
#include "logic/setcc/seto.h"
#include "logic/setcc/setp.h"
#include "logic/setcc/sets.h"

#include "logic/not.h"
#include "logic/xor.h"
#include "logic/sar.h"
#include "logic/shl.h"
#include "logic/shr.h"
#include "logic/shrd.h"
#include "logic/test.h"
#include "string/rep.h"

#include "misc/misc.h"

#include "special/special.h"
