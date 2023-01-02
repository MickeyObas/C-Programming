#include <stdio.h>
#define ARR_SIZE 99 //size of the array for 1 -100 is 99 since one number is missing

int check_missing(int arr[], int size);

int main(void){

	int test_arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21,
					   22,23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41,
					   42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61,62,
					   63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83,
					   84, 85, 86, 87, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100};
	int miss_arr1 = 88; // 88 is missing for test_arr1

	int test_arr2[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21,
					   22,23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41,
					   42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61,62,
					   63, 64, 65, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83,
					   84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100};
	int miss_arr2 = 66; // 66 is missing for test_arr2

	int missing1 = check_missing(test_arr1, ARR_SIZE);
	int missing2 = check_missing(test_arr2, ARR_SIZE);


	if (miss_arr1 == missing1){
		printf("Test successful!\n");
		printf("The missing number is %d\n", missing1);
	}

	if (miss_arr2 == missing2){
		printf("Test successful!\n");
		printf("The missing number is %d\n", missing2);
	}

}

int check_missing(int arr[], int size){

	int arr_sum = 0;
	int expected_sum = ((size + 1) * (size+ 2))/2;
	int missing_num;

	for (int i = 0; i < size; i++)
		arr_sum += arr[i];

	missing_num = expected_sum - arr_sum;
	return missing_num;
}

//Time complexity is O(n)
