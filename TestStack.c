#include <stdio.h>
#include "Stack.h"

void basic_test()
{
    struct Stack s;
    printf("======BASIC TEST======\n");
    init(&s);

    push(&s, 10);
    push(&s, 20);
    push(&s, 30);

    printf("Pop: expected 30, actual: %d\n", pop(&s));
    printf("Pop: expected 20, actual: %d\n", pop(&s));

    destroy(&s);
}

void overflow_test()
{
    printf("======OVERFLOW TEST======\n");
    struct Stack s;
    init(&s);
    push(&s, 10);
    push(&s, 20);
    push(&s, 30);
    push(&s, 40);
    push(&s, 50);

    printf("Top of the stack after extension: expected 50, actual: %d\n", pop(&s));

    destroy(&s);
    
}

void empty_stack_test()
{
    printf("======EMPTY STACK TEST======\n");
    struct Stack s;
    init(&s);
    
    if (isEmpty(&s))
    {
        printf("Stack is empty\n");
    }

    //pop(&s);

    destroy(&s);
}



int main(void)
{
    basic_test();
    overflow_test();
    empty_stack_test();

    return 0;
}

