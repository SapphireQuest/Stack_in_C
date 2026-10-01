#include <stdio.h>
#include <stdlib.h>
#include "stack.h"


void init(struct Stack *s)
{
    s->top = 0;
    s->capacity = 2;
    s->data = malloc(s->capacity * sizeof(int));
    
    if (s->data == NULL)
    {
        exit(1);
    }
}


void destroy(struct Stack *s)
{
    free(s->data);
    s->data = NULL;
}


bool isEmpty(const struct Stack *s)
{
    return s->top == 0;
}


void push(struct Stack *s, int element)
{
    if (s->top >= s->capacity)
    {
        s->capacity *= 2;
        int *newData = realloc(s->data, s->capacity * sizeof(int));
        if (newData == NULL)
        {
            exit(1);
        }
        s->data = newData;
    }
    s->data[s->top] = element;
    s->top += 1;
    printf("Push: %d\n", element);
}


int pop(struct Stack *s)
{
    if (isEmpty(s))
    {
        printf("Stack empty\n");
        exit(1);
    }
    s->top -= 1;
    int element = s->data[s->top];
    printf("Pop: %d\n", element);
    return element;
}


void printStack(struct Stack *s)
{
    for (int i = 0; i < s->top; i++)
    {
        printf("%d\n", s->data[i]);
    }
}


