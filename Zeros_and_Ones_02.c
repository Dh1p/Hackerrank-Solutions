#include<stdio.h>
int main()
{
    int n,index;
    scanf("%d",&n);
    int a[n];

    for(int i=1; i<=n; i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&index);

    if(a[index]==1)
    {
        a[index]=0;
    }
    else
    {
        a[index]=1;
    }

    for(int i=1; i<=n; i++)
    {
        printf("%d ",a[i]);
    }

    return 0;
}