#include <stdio.h>
#include <stdlib.h>
#define CAPACITY 5

int isFull(void);
int isEmpty(void);
void push(int);
int pop(void);
void peek(void);
void print_stack(void);

int stack[CAPACITY];
int top_index = -1;

int main()
{
    int choice;
    int element;

    while(1)
    {
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Print Stack\n");
        printf("5. Quit\n");
        printf("\nPlease enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Please enter the element: ");
                scanf("%d", &element);
                push(element);
                break;

            case 2:
                element = pop();

                if(element == 0)
                    printf("Stack is Empty.\n\n");

                else
                    printf("%d is deleted from stack.\n\n", element);

                break;

            case 3:
                peek();
                break;

            case 4:
                print_stack();
                break;

            case 5:
                exit(0);

            default:
                printf("Invalid input.\n\n");
                break;
        }
    }

    return 0;
}

int isFull(void)
{
    if(top_index == CAPACITY -1)
        return 1;

    else
        return 0;
}

int isEmpty(void)
{
    if(top_index == -1)
        return 1;

    else
        return 0;
}

void push(int element)
{
    if(isFull())
        printf("Stack is Full.\n\n");

    else
    {
        top_index++;
        stack[top_index] = element;
        printf("%d is pushed is stack.\n\n", element);
    }
}

int pop(void)
{
    if(isEmpty())
        return 0;

    else
        return stack[top_index--];
}

void peek(void)
{
    if(isEmpty())
    {
        printf("Stack is empty.\n\n");
    }

    else
    {
        printf("The top element of stack is %d.\n\n", stack[top_index]);
    }
}

void print_stack(void)
{
    int index;

    if(isEmpty())
    {
        printf("Stack is empty.\n\n");
    }

    else
    {
        for(index = top_index; index >= 0; index--)
        {
            printf("%d\n", stack[index]);
        }
    }
}
