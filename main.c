#include <stdio.h>
#include <stdlib.h>

#define NUM_ELEMENTS 5

int multiplyNumbers(int x, int y) {
    int product = x * y;
    return product;
}

int main(void) {
    int a = 4, b = 5; //uninitvar, legacyUninitvar
    int result = multiplyNumbers(a, b);
    printf("a x b = %d\n", result);

    int arr[NUM_ELEMENTS];
    for(int i = 0; i < NUM_ELEMENTS; i++) { //arrayIndexOutOfBounds
        arr[i] = i;
        printf("i: %d\n", arr[i]);
    }

    return 0;
}
