// Write a program in C to sort elements of array in ascending order.

#include <stdio.h>
#include <stdlib.h>

int* sort(n)
{
    int i,j,tmp;
    int* arr=(int*)(malloc(sizeof(int)*n));
    printf(" Input %d in the array : \n",n);
    for(i=0;i<n;i++)
    {
	    printf(" element = %d : ",i+1);
	    scanf("%d",&arr[i]);
    }  
   
    for(i=0;i<n;i++)
    {
       for(j=i+1;j<n;j++)
       {
           if( *(arr+i) > *(arr+j))
           {
               tmp = *(arr+i);
               *(arr+i) = *(arr+j);
               *(arr+j) = tmp;
            }
        }
    }
   return arr;
}

void main()
{
    int i,n;
    printf("Number of elements to store in the array : ");
    scanf("%d",&n);
	  
    int* a=sort(n);
   
    printf("\nArray after sorting : \n");
    for(i=0;i<n;i++)
    {
	    printf(" Element = %d : %d \n",i+1,a[i]);
    }         
}


// Output
// Number of elements to store in the array : 3
//  Input 3 in the array : 
//  element = 1 : 2
//  element = 2 : 5
//  element = 3 : 1

// Array after sorting : 
//  Element = 1 : 1 
//  Element = 2 : 2 
//  Element = 3 : 5 
