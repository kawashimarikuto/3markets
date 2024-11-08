#include <stdio.h>

int main()
{
	int k;
	printf("How old are you?");
	scanf("%d", &k);
	
	if(k >=20)
	{
	printf("You are %d years old.  You are a fine adult!", k);
	}
	
	else
	{
	    printf("You are still a child!");
	}
	return 0;
}