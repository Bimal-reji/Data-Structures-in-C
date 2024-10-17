#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define SIZE 5
int queue[SIZE], front = -1, rear = -1, max_size = SIZE;
bool isFull() {
    return (rear + 1) % max_size == front;
}
bool isEmpty() {
    return front == -1;
}
void enqueue() {
    if (isFull()) {
        printf("Queue is overflow.\n");
    } else {
        int val;
        if (isEmpty()) {
            front = rear = 0;
        } else {
            rear = (rear + 1) % max_size;
        }
        printf("Enter the value to be added to the queue: ");
        scanf("%d", &val);
        queue[rear] = val;
    }
}
void dequeue() {
    if (isEmpty()) {
        printf("Queue is underflow.\n");
    } else {
        printf("Element removed from the queue is %d\n", queue[front]);
        if (front == rear) {
            front = rear = -1;
        } else {
            front = (front + 1) % max_size;
        }
    }
}
void display() {
    if (isEmpty()) {
        printf("Queue is empty.\n");
    } else {
        printf("Elements in the Queue are: ");
        int i = front;
        while (true) {
            printf("%d ", queue[i]);
            if (i == rear) break;
            i = (i + 1) % max_size;
        }
        printf("\n");
    }
    }
int main() {
    int ch;
    printf("Enter the size of the queue (max %d): ", SIZE);
    scanf("%d", &max_size);

    if (max_size > SIZE) {
        printf("Max size cannot be greater than %d. Setting to %d.\n", SIZE, SIZE);
        max_size = SIZE;
    }
    while (true) {
        printf("\nQueue Operations\n");
        printf("1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);
        printf("\n");
        switch (ch) {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    }
    return 0;
}

