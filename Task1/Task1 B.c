#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

Node* head = NULL;

void addToBeginningLinkedList(int num) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = num;
    newNode->next = head;
    head = newNode;
}

void printLinkedList() {
    Node* current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

int main() {
    // Test with 10 elements
    int test_arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (int i = 0; i < 10; i++) {
        addToBeginningLinkedList(test_arr[i]);
    }

    printf("Linked list after adding 10 elements to the beginning:\n");
    printLinkedList();

    // Generalize for input size n
    int new_n;
    printf("Enter the number of elements to add: ");
    scanf("%d", &new_n);

    for (int i = 0; i < new_n; i++) {
        int num;
        printf("Enter a number: ");
        scanf("%d", &num);
        addToBeginningLinkedList(num);
    }

    printf("Linked list after adding %d elements to the beginning:\n", new_n);
    printLinkedList();

    return 0;
}