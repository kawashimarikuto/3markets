#include <stdio.h>
int main()
{
    int k;
    printf("How old are you?");
    scanf("%d",&k);
    if (k>20)
    {
        printf("You are a fine adult!");
    
}
else if(k<20)
{
    printf("You are still a child!！");
    
}
else (k=20);
{
    printf("Congratulations on your coming of age!");
}
    return 0;
}