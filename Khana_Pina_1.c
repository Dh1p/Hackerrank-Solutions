#include<stdio.h>
int main()
{
    int money;
    scanf("%d",&money);

    if(money>=1000)
    {
        printf("Three Kacchi\n");
    }
    else if(money>=500 && money<1000)
    {
        printf("One Large Pizza\n");
    }
    else if (money<500 && money>=250)
    {
        printf("Three Small Burger\n");
    }
    else if (money>=100 &&  money<250)
    {
        printf("Three Fuchka\n");
    }
    else
    {
        printf("Nothing\n");
    }
    
    return 0;
}