#include <stdio.h>
#include <string.h>

int main()
{
    char a[101];
    char b[101];
    int count = 0;
    scanf("%s %s", a, b);

    int len = strlen(a);

    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len; j++)
        {
           // printf("a=%c b=%c\n", a[i], b[j]);
            if (a[i] == b[j])
            {
                continue;
            }
            else
            {
                count++;
            }
        }
        if (count == len)
        {
            printf("No\n");
            return 0;
        }
        count=0;
    }

    printf("Yes\n");

        return 0;
}