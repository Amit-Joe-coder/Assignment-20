// 6. Write a program to calculate the length of the string using a pointer
#include <stdio.h>
int strc(char *);
int main()
{
    char st[1000], *pt;
    printf("enter any sentence:");
    gets(st);
    int total = strc(st);
    printf("%d", total);
}
int strc(char *ptr)
{
    int i, count = 0;
    for (i = 0; i <= ptr[i]; i++)
    {
        if (ptr[i] == ' ')
        {
            continue;
        }
        else
        {
            count++;
        }
    }
    return count;
}
