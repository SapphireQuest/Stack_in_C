#pragma once
#include <stdbool.h>

struct Stack 
{
    int *data;
    int capacity;
    int top;
};

void init(struct Stack* s);
void destroy(struct Stack* s);
void push(struct Stack* s, int element);
int pop(struct Stack* s);
bool isEmpty(const struct Stack* s);