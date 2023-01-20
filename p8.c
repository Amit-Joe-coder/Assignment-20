#include <stdio.h>
int sum(int *, int);
int main()
{
    int ar[100], size = 0;
    printf("enter the total number you want to add:");
    scanf("%d", &size);
    printf("enter the elements:");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &ar[i]);
    }
    int total = sum(ar, size);
    printf("the sum is: %d", total);
}
int sum(int *arr, int size)
{
    // printf("this is checking %d",arr[0]);
    int total = 0;
    for (int i = 0; i < size; i++)
    {
        total = total + arr[i];
    }
    // printf("%d",total);
    return total;
}
