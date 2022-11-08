// Write a program in C to read n number of values in an array and display it in reverse 

#include<stdio.h>  
#include<stdlib.h>  

int* reverse(int n)
{
    int i;  
    int* arr = (int*)(malloc(sizeof(int)*n));
    printf("Enter %d integer numbers\n", n);  
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);  
    }
  
    printf("Reverse Elements\n");  
    for(i = n-1; i >= 0; i--) 
    {
        printf("%d\n", arr[i]);  
    }
}
int main()  
{
    int n;
    printf("Enter the size of the aaray = ");
    scanf("%d",&n);
    int* arr=reverse(n);
    
    return 0;  
}


// Output 
// Enter the size of the aaray = 4
// Enter 4 integer numbers
// 2
// 3
// 4
// 5
// Reverse Elements
// 5
// 4
// 3
// 2
