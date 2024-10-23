// main.c
#include <stdio.h>

int sum(int a, int b) {
    // TODO: Implement the sum function
    return a+ b;
}

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Sum: %d\n", sum(a, b));
    return 0;
}
