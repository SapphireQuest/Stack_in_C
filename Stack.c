#include <stdio.h>
#include <stdlib.h>
#include "stack.h"


void init(struct Stack *s)
{
    s->top = 0;
    s->capacity = 2;
    s->data = malloc(s->capacity * sizeof(int));
}

void destroy(struct Stack *s)
{
    
}



int main(int argc, char* argv[])
{
    struct Stack stack;
    init(&stack);
    return 0;
}

