#include <stdio.h>
#include "Stack.h"

void basic_test()
{
    struct Stack s;
    printf("\n======BASIC TEST======\n");
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
    printf("\n======OVERFLOW TEST======\n");
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


void push_and_pop_test()
{
    printf("\n======PUSH AND POP TEST======\n");
    struct Stack s;
    init(&s);

    push(&s, 100);
    push(&s, 200);
    printf("Pop after two pushes: expected 200, actual: %d\n", pop(&s));
    
    push(&s, 300);
    printf("Pop after new push: expected 300, actual: %d\n", pop(&s));
    printf("Pop remaining element: expected 100, actual: %d\n", pop(&s));

    destroy(&s);
}

void two_stacks_test()
{
    printf("\n======TWO STACKS TEST======\n");
    struct Stack s1;
    struct Stack s2;
    init(&s1);
    init(&s2);

    printf("STACK 1:\n");
    push(&s1, 11);
    printf("STACK 2:\n");
    push(&s2, 99);
    printf("STACK 1:\n");
    push(&s1, 22);
    printf("STACK 2:\n");
    push(&s2, 88);

    printf("Pop from stack 1: expected 22, actual: %d\n", pop(&s1));
    printf("Pop from stack 2: expected 88, actual: %d\n", pop(&s2));
    printf("Pop from stack 1: expected 11, actual: %d\n", pop(&s1));
    printf("Pop from stack 2: expected 99, actual: %d\n", pop(&s2));

    destroy(&s1);
    destroy(&s2);
}


void push_and_pop_test()
{
    Stack stack;
    std::cout << "======PUSH AND POP TEST======" << std::endl;

    stack.push(100);
    stack.push(200);
    std::cout << "Pop after two pushes: expected 200, actual: " << stack.pop() << std::endl;
    
    stack.push(300);
    std::cout << "Pop after new push: expected 300, actual: " << stack.pop() << std::endl;
    std::cout << "Pop remaining element: expected 100, actual: " << stack.pop() << std::endl;
}


void empty_stack_test()
{
    printf("\n======EMPTY STACK TEST======\n");
    struct Stack s;
    init(&s);
   
    printf("Check if stack is empty:\n");
    if (isEmpty(&s))
    {
        printf("Stack is empty\n\n");
    }

    printf("Try to pop from empty stack:\n");
    pop(&s);

    destroy(&s);
}



int main(void)
{
    basic_test();
    overflow_test();
    push_and_pop_test();
    two_stacks_test();
    empty_stack_test();

    return 0;
}

