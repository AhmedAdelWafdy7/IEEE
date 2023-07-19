#include <stdio.h>

int findArraySum(int arr[], int size) {
    int sum = 0;
    int *ptr = arr; 

    for (int i = 0; i < size; i++) {
        sum += *ptr;
        ptr++; 
    }

    return sum;
}

int main() {
    int arr1[] = {1, 2, 3};
    int arr2[] = {15, 12, 13, 10};

    int sum1 = findArraySum(arr1, sizeof(arr1) / sizeof(arr1[0]));
    int sum2 = findArraySum(arr2, sizeof(arr2) / sizeof(arr2[0]));

    printf("Sum of arr1: %d\n", sum1);
    printf("Sum of arr2: %d\n", sum2);

    return 0;
}
