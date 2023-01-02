#include <stdio.h>

void get_smallest_highest(int arr[], int arr_size, int *smallest, int *highest);

int main(void){
	int smallest, highest, arr_size;
	int test_arr[] = {1, 23, 2, 5, 8, 9, 10, 15};

	arr_size = (int) sizeof(test_arr) /sizeof(test_arr[0]);
	get_smallest_highest(test_arr, arr_size, &smallest, &highest);

	printf("The smallest number is %3d\n The highest number is %3d\n", smallest, highest);

}

void get_smallest_highest(int arr[], int arr_size,
						  int *smallest, int *highest)
{
	int small, high = arr[0];

	for(int i = 0; i < arr_size; ++i){
		if (arr[i] > high)
			high = arr[i];
		if (small > arr[i])
			small = arr[i];

	}
	*highest = high;
	*smallest = small;
}

//time complexity: O(n)
