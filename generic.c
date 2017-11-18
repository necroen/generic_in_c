#ifndef GENERIC_FILE
    #define GENERIC_FILE "generic.c"
#else
 
#include <stdio.h>

void show_(real)(real number){
	printf("real = %f\n", (double)number );
	// printf 不具备泛型打印功能，所以做了个强制类型转换
}
 
#endif