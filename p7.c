#include <stdio.h>
#include <string.h>
int volcount(char *, char *);
int main()
{
    char str[100], vol[5] = {'a', 'e', 'i', 'o', 'u'};
    int count = 0, length = 0;
    printf("enter the word:");
    gets(str);
    length = strlen(str);
    count = volcount(&str, &vol);
    printf("Number of vowels are is %d\nNumber of consonants are: %d", count, length - count);
}
int volcount(char *str, char *vol)
{
    int count = 0;
    for (int i = 0; i < str[i]; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (str[i] == vol[j])
            {a
                count++;
            }
        }
    }
    return count;
}
