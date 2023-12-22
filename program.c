/*
* Author: Anton Jonsson
* This is a calculator in C using Polish notation and a stack implementation.
*/

#include <stdio.h>
#include <stdlib.h>

#define SIZE 100

typedef struct {
    int top;
    int inp_array[SIZE];
} Stack;

void push(Stack* stack, int element);
int pop(Stack* stack);
void show(Stack* stack);

int main() {
    Stack myStack;
    myStack.top = -1;


    
    return 0;
}

void push(Stack* stack, int element) {
    if (stack->top == SIZE - 1) {
        printf("\nOverflow!!");
    } else {
        stack->top = stack->top + 1;
        stack->inp_array[stack->top] = element;
    }
}

int pop(Stack* stack) {
    if (stack->top == -1) {
        printf("\nUnderflow!!");
        return -1; // or any suitable value to indicate underflow
    } else {
        int poppedValue = stack->inp_array[stack->top];
        stack->top = stack->top - 1;
        return poppedValue;
    }
}

void show(Stack* stack) {
    if (stack->top == -1) {
        printf("\nUnderflow");
    } else {
        printf("\nElements present in the stack: \n");
        for (int i = stack->top; i >= 0; --i)
            printf("%d\n", stack->inp_array[i]);
    }
}
