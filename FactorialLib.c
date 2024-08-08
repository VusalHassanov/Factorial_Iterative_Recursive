#include "FactorialLib.h"


void push(int stack[], int value) {
	int number = countElements(stack);
	if (number >= STACK_SIZE) {
		printf("Stack is full !");
	}
	else {
		for (int i = 0; i < STACK_SIZE; i++) {
			if (stack[i] == 0) {
				stack[i] = value;
				break;
			}
		}
	}
}

int pop(int stack[]) {
	for (int i = STACK_SIZE - 1; i >= 0; i--) {
		if (stack[i] != 0) {
			int elem = stack[i];
			stack[i] = 0;
			return elem;
		}
	}
	return -1;
}

int countElements(int stack[]) {
	int i = 0;
	for (i = 0; i < STACK_SIZE; i++) {
		if (stack[i] == 0) {
			break;
		}
	}
	return i;
}

void printStack(int stack[]) {
	for (int i = 0; i < STACK_SIZE; i++) {
		if (stack[i] == 0) {
			break;
		}
		printf("%d\n", stack[i]);
	}
}

void initStack(int stack[]) {

	for (int i = 0; i < STACK_SIZE; i++) {
		stack[i] = 0;
	}
}