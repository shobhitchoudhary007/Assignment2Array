// Write a program in C to find the second largest element in an array.

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
    printf(" Second Largest = %d",a[1]);
}


// Output
// Number of elements to store in the array : 3
//  Input 3 in the array : 
//  element = 1 : 6
//  element = 2 : 4
//  element = 3 : 3
//  Second Largest = 4