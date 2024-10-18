#include <stdio.h>

int main()
{
	int k;
	int j;
	printf("How many pencils do you have ??");
	scanf("%d", &k);
	
	printf("You have %d pencils.", k);
	
	printf("How many erasers do you have?");
	scanf("%d",&j);
	
	printf("You have %d erasers.", j);
	
	printf("k + j =%d\n", k+j);
	
	return 0;
	
	}  