#include<stdio.h>
int main()
{
    int n , total=0;
    scanf("%d",&n);
    
    char a[n+1];
    scanf("%s",a);

    for(int i=0; i<n; i++)
    {
        total = total + a[i]-'0';
    }

    if(total%3==0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}