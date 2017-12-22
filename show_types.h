#define CONCAT_2(x,y) CONCAT_2_EXPAND(x,y)
#define CONCAT_2_EXPAND(x,y) x ## y

#define show_(name) CONCAT_2(show_,real)

#include "generic.h"
#include "all_types.h"