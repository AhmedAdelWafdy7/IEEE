#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int mult(int a, int b) {
    return a * b;
}

int div(int a, int b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Error: Division by zero\n");
        return 0;
    }
}

int calculate(int a, int b, int (*operation)(int, int)) {
    return operation(a, b);
}

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
