#include <float.h>
#include <limits.h>
#include <stdio.h>

int main(void)
{

 printf("float型の最大値:%g\n", FLT_MAX);
    printf("float型の最小値:%g\n", FLT_MIN);
    printf("float型の精度:%d\n", FLT_DIG);
    printf("long double型の最大値:%Lg\n", LDBL_MAX);
    printf("long double型の最小値:%Lg\n", LDBL_MIN);
    printf("long double型の精度:%d\n", LDBL_DIG);
	return 0;
}