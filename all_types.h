// 这个文件就是要多重包含
// 不能在开头写预防多重包含的宏

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

#undef GENERIC_FILE // 这句不能删，看我的博客就知道为什么