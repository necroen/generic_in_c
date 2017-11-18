#ifndef ALL_TYPES_H
#define ALL_TYPES_H

	// 下面4行是 double
	#define real double    
	#line 1 GENERIC_FILE
	#include GENERIC_FILE
	#undef real

	// 下面4行是 int
	#define real int
	#line 1 GENERIC_FILE
	#include GENERIC_FILE
	#undef real

	#undef GENERIC_FILE // 这句不能删

#endif