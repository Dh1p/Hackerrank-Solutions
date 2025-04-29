#include<stdio.h>
int main()
{
    int n,max;
    scanf("%d",&n);
    int a[n];

    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(int i=0; i<n; i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }

    for(int i=0; i<n; i++)
    {
        printf("%d ",max-a[i]);
    }

    return 0;
}