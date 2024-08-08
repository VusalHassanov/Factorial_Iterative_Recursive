#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define STACK_SIZE 10
#define EMPTY (-1)
#define STACK_EMPTY INT_MIN

void push(int stack[], int val);
int pop(int stack[]);
int countElements(int stack[]);
void printStack(int stack[]);
void initStack(int stack[]);
