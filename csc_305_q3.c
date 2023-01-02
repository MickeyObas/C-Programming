#include <stdio.h>

void find_duplicate(int arr[], int size){
        for(int i=0; i < size; i++){
            for(int j=i+1; j < size; j++){
                if(arr[i] == arr[j]){
                    printf("%d is the first duplicate.", arr[j]);
                    goto end;
                }
            }
        }
        end:
        printf("\n");
};

int main(){
    int testArray[] = {3, 15, 18, 19, 45, 11, 24, 12, 11, 15};
    int size = sizeof(testArray) / sizeof(testArray[0]);
    find_duplicate(testArray, size);


}
