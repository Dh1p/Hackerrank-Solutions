#include<stdio.h>
int main()
{
    int amount;
    scanf("%d",&amount);
    if(amount%3==0)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    return 0;
}