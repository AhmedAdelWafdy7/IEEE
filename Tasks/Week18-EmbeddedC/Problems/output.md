# Function Pointers and Array Sum

This repository includes two tasks:

## Task 1: Function Pointers

### Description
In this task, we have implemented a C program that demonstrates the use of function pointers to perform basic arithmetic operations. Four functions (`add`, `sub`, `mult`, and `div`) are defined, each of which performs a specific arithmetic operation on two integers. The `calculate` function takes two integers and a function pointer as arguments and calls the specified operation function using the function pointer.

### Code
```c
#include <stdio.h>

// Function prototypes
int add(int a, int b);
int sub(int a, int b);
int mult(int a, int b);
int div(int a, int b);
int calculate(int a, int b, int (*operation)(int, int));

int main() {
    int num1 = 10, num2 = 5;
    int result;

    result = calculate(num1, num2, add);
    printf("Addition: %d\n", result);

    result = calculate(num1, num2, sub);
    printf("Subtraction: %d\n", result);

    result = calculate(num1, num2, mult);
    printf("Multiplication: %d\n", result);

    result = calculate(num1, num2, div);
    printf("Division: %d\n", result);

    return 0;
}
```

### Output
![Task 1 Output](![code png](https://github.com/AhmedAdelWafdy7/IEEE/assets/107740350/8f24d3c4-7021-49fd-b65d-7363b0133c21)
ng)

## Task 2: Array Sum

### Description
In this task, we have implemented a C program that calculates the sum of elements in an integer array using pointers. The `findArraySum` function takes an integer array and its size as arguments, and it returns the sum of all elements in the array.

### Code
```c
#include <stdio.h>

// Function prototype
int findArraySum(int arr[], int size);

int main() {
    int arr1[] = {1, 2, 3};
    int arr2[] = {15, 12, 13, 10};

    int sum1 = findArraySum(arr1, sizeof(arr1) / sizeof(arr1[0]));
    int sum2 = findArraySum(arr2, sizeof(arr2) / sizeof(arr2[0]));

    printf("Sum of arr1: %d\n", sum1);
    printf("Sum of arr2: %d\n", sum2);

    return 0;
}
```

### Output
![Task 2 Output](code.p![Task2 c - C_session1 - Visual Studio Code 7_19_2023 4_14_26 PM](https://github.com/AhmedAdelWafdy7/IEEE/assets/107740350/219f8262-ddaa-4b80-ab77-80b89b820796)
ng)

Note: The output screenshot for both tasks is provided in `code.png` file.

