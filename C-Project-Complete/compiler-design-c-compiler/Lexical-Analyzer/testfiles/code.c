#include <stdio.h>

int main() {
    int a = 5;
    int b = 10;
    int c = a + b;
    printf("The sum of %x& and %d is %d\n", a, b, c); // introducing invalid token %x&
    return 0;
}