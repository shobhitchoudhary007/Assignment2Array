// Write a program in C to count a total number of duplicate elements in an array.

#include<stdio.h>
#include<stdlib.h>
int* duplicate(int n)
{
    int *arr =(int*)(malloc(sizeof(int)*n));
    
    printf("Enter elements in array : ");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int count=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                break;
            }
        }
    }
    printf("Duplicate elements in array :%d",count);
}
int main()
{
    int n;
    printf("Enter size of the array : ");
    scanf("%d", &n);
    int* dup=duplicate(n);
    
    return 0;
}

// Output
// Enter size of the array : 4
// Enter elements in array : 2
// 1
// 3
// 1
// Duplicate elements in array :1
