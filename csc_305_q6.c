//Question 6
//Write a program in C for, How to compare two array is equal in size or not.

#include <stdio.h>

int main(void){
	int arr1[] = {1,2, 3, 4, 5, 6, 7, 8, 9};
	int arr2[] = {2, 3, 5, 4, 6, 7, 8, 2, 23, 2, 4};

	int arr1_size = (int) sizeof(arr1) / sizeof(arr1[0]);
	int arr2_size = (int) sizeof(arr2) / sizeof(arr2[0]);


	if(arr1_size != arr2_size)
		printf("The arrays are not equal in size\n");
	else
		printf("The array size are equal\n");
}
