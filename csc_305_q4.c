#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[50], i, j, k, number;

    printf("Enter the size of the array: ");
    scanf("%d", &number);

    printf("Enter the %d numbers of the array: \n", number);
    for (i = 0; i < number; i++){
      scanf("%d", &a[i]);
    };

    printf("\nThe elements of the array are: ");
    for (i = 0; i <number; i++){
        printf("%d ", a[i]);
    }

    for (i=0; i<number; i++){
        for (j=i+1; j<number; j++){
            if (a[i] == a[j]){
                for (k=j; k<number; k++){
                    a[k] = a[k+1];
                }
                j--;
                number--;
            }
        }
    }

    printf("\nAfter deleting the duplicates, the final array is: ");
    for (i=0; i < number; i++){
        printf("%d ", a[i]);
    }

}
