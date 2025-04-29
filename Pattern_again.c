#include <stdio.h>
int main()
{
    int number;
    scanf("%d", &number);

    for (int i = 1; i < number + 1; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    for (int i = 1; i < number; i++)
    {
        for (int space = 1; space <= i; space++)
        {
            printf(" ");
        }

        for (int j = 1; j < number - i + 1; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    
    return 0;
}