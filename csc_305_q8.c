//Question 8
//Write a program in C to find second highest number in an integer array

#include <stdio.h>
int get_sec_highest(int arr[], int arr_size);


int main(void)
{
	int test_arr[] = {5,23, 2, 4, 8, 12, 17, 332, 311, 50};
	int arr_size =  (int) sizeof(test_arr) / sizeof(test_arr[0]);
	
	printf("The second highest number in the array is: %d \n",
			 get_sec_highest(test_arr, arr_size));
}


int get_sec_highest(int arr[], int arr_size){
	int highest = 0;
	int second_highest = 0;

	for(int i = 0; i < arr_size; ++i){
		if (arr[i] >= highest){
			highest = arr[i];
		}
		else if (arr[i] >= second_highest){
			second_highest = arr[i];
		}
	}
	return second_highest;

}

//time complexity: O(n)