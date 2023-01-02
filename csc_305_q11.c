#include <stdio.h>
#include <stdlib.h>

int checkIfEven(int n){
    if (n % 2 == 0){
        return 1;
    }
    return 0;
}

void swap(int *a, int *b){
    int temp = *b;
    *b = *a;
    *a = temp;
}

void swapReverseArray(int arr[], int arrLength){
    int loopCount = checkIfEven(arrLength) ? arrLength / 2 : (arrLength - 1) / 2;

    for (int i = 0; i < loopCount; i++) {
        swap(&arr[i], &arr[arrLength - 1 - i]);
    }
}

void copyReverseArray(int newarr[], int arr[], int arrLength){
    int j = 0;
    for (int i = arrLength - 1; i >= 0; i--){
        newarr[j] = arr[i];
        j++;
    }
}

void printArray(int arr[], int arrLength){
    for (int i = 0; i < arrLength; i++){
        printf("%d\n", arr[i]);
    }
}
int main()
{
    int arrLength, option;
    printf("Enter array length: ");
    scanf("%d", &arrLength);

    int arr[arrLength], newarr[arrLength];

    printf("\n==========================================");
    for (int i = 0; i < arrLength; i++){
        printf("\nEnter array item: ");
        scanf("%d", &arr[i]);
    }

    printf("\n====================\n");
    printf("Do you want to reverse array by swap method or copy method?\n(Press '1' for swap or '2' for copy) ");
    scanf("%d", &option);

    if (option == 1){
        swapReverseArray(arr, arrLength);
        printf("Bleep Bloop :|-|- The array would be swapped\n");
        printArray(arr, arrLength);
    }
    else if (option == 2) {
        copyReverseArray(newarr, arr, arrLength);
        printf("Bleep Bloop :|-|- The reversed array would be copied into a new one\n");
        printArray(newarr, arrLength);
    }
    else{
        printf("Your input is not valid, Goodbye! :|");
    }

    return 0;
}

