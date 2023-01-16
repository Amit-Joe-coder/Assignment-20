#include <stdio.h>
void Value_Swap(int *, int *);
int main()
{
    int a, b;
    int *x,*y;
    x=&a;
    y=&b;
    printf("enter the first value:");
    scanf("%d", &a);
    printf("enter the second value:");
    scanf("%d", &b);
    printf("You entered the value of a is %d and of b is %d\n",a,b);
    Value_Swap(x,y);
    printf("After swapping the values are a=%d and b=%d", a, b);
}
void Value_Swap(int *x, int *y)
{
    int t;
    t = *x;
    *x = *y;
    *y = t;
}
