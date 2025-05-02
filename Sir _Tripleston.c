#include <stdio.h>
int main()
{
    char a[78];
    scanf("%s", a);

    int fre[26] = {0};

    for (int i = 0; a[i]!='\0'; i++)
    {
        fre[a[i]-'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (fre[i] != 3)
        {
            printf("%c\n", i + 'a');
            break;
        }
    }
    return 0;
}