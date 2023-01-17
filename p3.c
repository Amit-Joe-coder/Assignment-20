
#include <stdio.h>
void srd(int *, int);
int main(void)
{
    int i, arr[100], sz, count = 0;
    // srd(arr,sz);
    printf("enter the size:");
    scanf("%d", &sz);
    printf("Enter the elements:");
    for (i = 0; i < sz; i++)
    {
        scanf("%d", &arr[i]);
    }
    srd(arr, sz);
    for (int i = 0; i < sz; i++)
    {
        printf(" %d", arr[i]);
    }
}
void srd(int *ptr, int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            if (ptr[i] > ptr[j])
            {
                int temp = ptr[j];
                ptr[j] = ptr[i];
                ptr[i] = temp;
            }
        }
    }
}
