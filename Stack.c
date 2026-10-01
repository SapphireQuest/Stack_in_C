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
}


bool isEmpty(const struct Stack *s)


int main(int argc, char* argv[])
{
    struct Stack stack;
    init(&stack);
    push(&stack, 1);
    push(&stack, 2);
    push(&stack, 3);
    
    for (int i = 0; i < stack.top; i++)
    {
        printf("%d\n", stack.data[i]);
    }
    return 0;
}

