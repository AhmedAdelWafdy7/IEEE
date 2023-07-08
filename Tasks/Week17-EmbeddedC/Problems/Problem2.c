#include <stdio.h>

int countBits(int *num) {
    int count = 0;

    while (*num != 0) {
        count += (*num) & 1;
        *num >>= 1;
    }

    return count;
}

int main() {
    int number = 120;  

    int bitCount = countBits(&number);

    printf("Number of bits set to 1: %d\n", bitCount);

    return 0;
}
