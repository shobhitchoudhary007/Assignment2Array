// Write a program in C to find the maximum and minimum element in an array.

#include<stdio.h>
#include<stdlib.h>

int* mx(int a[],int n)
{
    int max;
    max=a[0];
    for(int i=1; i<n; i++)
    {
        if(a[i]>max)
        {
            max = a[i];
        }
    }
    printf("Maximum is = %d\n",max);
    return 0;
}

int* mn(int a[],int n)
{
    int min;
    min=a[0];
    for(int i=1; i<n; i++)
    {
        if(a[i]<min)
        {
            min = a[i];
        }
    }
    printf("Minimum is = %d",min);
    return 0;
}
int main()
{
    int n;
    printf("Number of aarays=");
    scanf("%d",&n);
    int* arr=(int*)(malloc(sizeof(int)*n));
 
    for(int i=0;i<n;i++)
    {
        printf("Enter the element = ");
        scanf("%d",&arr[i]);
    }
    int* b=mx(arr,n);
    int* c=mn(arr,n);
    return 0;
}

// Output 
// Number of aarays=3
// Enter the element = 5
// Enter the element = 4
// Enter the element = 9
// Maximum is = 9
// Minimum is = 4