#include <stdio.h>
int max(int *, int *);
int main()
{
    int a, b;
    printf("enter two value:");
    scanf("%d %d", &a, &b);
    int mxi = max(&a, &b);
    printf("maximum value is: %d", mxi);
}
int max(int *a1, int *a2)
{
    if (*a1 > *a2)
    {
        return *a1;
    }
    else
    {
        return *a2;
    }
}
