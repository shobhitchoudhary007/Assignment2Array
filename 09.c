// Find the first non-repeating element in a given array arr of N integers.
// Note: Array consists of only positive and negative integers and not zero.

#include <stdio.h>
#include <stdlib.h>
int nonRepeat(int a[], int n)
{
    int i, j, c = 1;
    ;
    int *arr = (int *)(malloc(sizeof(int) * n));
    printf("Input the array elements : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (arr[i] == arr[j] && i != j)
                break;
        }
        if (j == n)
        {
            printf("Non-repeating element %d = %d \n", c, arr[i]);
            ++c;
        }
    }
    return 0;
}
int main()
{
    int n, i, a;
    printf("\nEnter the number of elements : ");
    scanf("%d", &n);
    nonRepeat(a, n);
    return 0;
}


// Output
// Enter the number of elements : 4
// Input the array elements : 1
// 2
// 3
// 3
// Non-repeating element 1 = 1 
// Non-repeating element 2 = 2 