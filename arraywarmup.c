#include <stdio.h>
#include <stdlib.h>

// creating an array Using DMA
int main()
{
	int *arr;
	int i, n , Element;
	printf("Enter the size of array : \n");
	scanf(" %d", &n);
	arr = (int *)malloc(n*sizeof(int));
	for (i = 0; i < n; ++i){
		printf("Enter the array element : arr[%d]\n", i);
		scanf(" %d", (arr+i));
	}
    printf("The given array is :\n");
	for (i = 0; i < n; ++i){
		printf(" arr[%d] = %d\n", i, *(arr+i));
	}
    // Inserting Element in Array
	
    arr = realloc(arr,(n* sizeof(int)+1));
	printf("Enter the new array element at index value : arr[%d]\n", n);
	scanf(" %d", (arr+n));
    printf("The new array formed is :\n");
	for (i = 0; i < n+1; ++i){
		printf(" arr[%d] = %d\n", i, *(arr+i));
	}
    //performing linear search to find the given element  
    
    printf("Enter element to search: "); 
    scanf("%d",&Element);
     
    for(i=0;i<n+1;++i)
    if(arr[i]==Element)
        break;
     
    if(i<n+1)
        printf("Element found at index %d",i); 
        else
        printf("Element not found!"); 
  
    return 0;
}