// Write a program in C to find the sum of all elements of the array.

#include <stdio.h>
#include <stdlib.h>

int* sum()
{
    int i,n,sum=0;
    int* arr=(int*)(malloc(sizeof(int)*100));
    printf("Enter size of the array : ");
    scanf("%d",&n);
    
    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0; i<n; i++)
    {
         
        sum=sum+arr[i];
    }
    return sum;
}
int main()
{
    int* a=sum();
    printf("Sum of array is : %d",a);
 
    return 0;
}


// Output 
// Enter size of the array : 4
// Enter elements in array : 1
// 2 
// 3
// 4
// Sum of array is : 10