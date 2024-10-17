#include <stdio.h>
#include <stdbool.h>

int top = -1;
int stk[100];

// Push function
void push(int Max_Size) {
    if (top == Max_Size - 1) {
        printf("Stack Overflow\n");
    } else {
        int item;
        printf("Enter the element to be pushed: ");
        scanf("%d", &item);
        top++;
        stk[top] = item;
        printf("Element successfully added to stack.\n");
    }
}

// Pop function
void pop() {
    if (top == -1) {
        printf("Stack Underflow\n");
    } else {
        int item = stk[top];
        top--;
        printf("Element successfully removed from the stack: %d\n", item);
    }
}

// Display function
void display() {
    if (top == -1) {
        printf("Stack is empty.\n");
    } else {
        printf("Stack elements are:\n");
        for (int i = top; i >= 0; i--) {
            printf("%d\n", stk[i]);
        }
    }
}

int main() {
    int ch, Max_Size;
    printf("Enter the size of the stack: ");
    scanf("%d", &Max_Size);
    printf("\n");

    while (true) {
        printf("1. PUSH\n2. POP\n3. DISPLAY\n4. EXIT\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);
        printf("\n");
        
        switch (ch) {
            case 1:
                push(Max_Size);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exiting\n");
                return 0; // Exiting the program
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}

