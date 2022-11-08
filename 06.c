// Write a program in C to insert New value in the array (sorted list ).

#include<stdio.h>
#include<stdlib.h>

int* addElement(int n)
{
    int new,j,i;
    int newSize=n+1;
    int* arr=(int*)malloc(sizeof(int)*newSize);
    
    printf("Enter %d elements in sorted order array= ",n);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter a new value = ");
    scanf("%d",&new);
    for(j=0; j<n; j++)
    {
        if(new<arr[j])
          break;
    }
    for(i=newSize; i>j; i--)
    {
        arr[i]=arr[i-1];
    }
    arr[j]=new;
    printf("After inserting a new element\n");
    for(int i=0; i<=n; i++)
    {
        printf("%d ",arr[i]);
    }
}
int main()
{
    int n;
    printf("Enter size of the array = ");
    scanf("%d", &n);
    int* p=addElement(n);

    return 0;
}


// Output
// Enter size of the array = 4
// Enter 4 elements in sorted order array= 2
// 3
// 5
// 7
// Enter a new value = 6
// After inserting a new element
// 2 3 5 6 7 
