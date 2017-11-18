#define CONCAT_2(x,y) CONCAT_2_EXPAND(x,y)
#define CONCAT_2_EXPAND(x,y) x ## y

#define show_(name) CONCAT_2(show_,real) // 这 3 行可以另外用一个头文件装


#include "generic.c"
#include "all_types.h"