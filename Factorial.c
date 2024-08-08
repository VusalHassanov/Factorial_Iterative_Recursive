#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "FactorialLib.h"



int factorialIterative(int stack[], int n) {
    if (n == 0) {
        return 1;
    }
    else if (n < 0) {
        return -1;
    }

    initStack(stack);
    push(stack, 1);
    int output = 0;
    for (int i = 1; i <= n; i++) {
        output = pop(stack) * i;
        pop(stack);
        push(stack, i);
        push(stack, output);
    }

    return stack[countElements(stack) - 1];
}
int factorialRecursive(int stack[], int n) {
    if (n == 0) {
        return pop(stack);
    }
    else if (n < 0) {
        return -1;
    }
    else {
        int var = n * factorialRecursive(stack, n - 1);
        push(stack, n);
        push(stack, var);
        return pop(stack);
    }
}

int main() {
    int stack[STACK_SIZE];
    int n, result;
    printf("Please enter a number to find its factorial: ");
    scanf("%d", &n);
    result = factorialIterative(stack, n);
    printStack(stack);
    printf("factorialIterative = %d \n", result);

    initStack(stack);
    push(stack, 1);
    result = factorialRecursive(stack, n);
    printStack(stack);
    printf("factorialRecursive = %d", result);

}