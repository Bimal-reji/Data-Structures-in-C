#include <stdio.h>
#include <stdlib.h>

// Define the structure for a tree node
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Function to insert data into the binary tree
struct Node* insert(struct Node* root, int data) {
    if (root == NULL) {
        return createNode(data);
    }
    if (data < root->data) {
        root->left = insert(root->left, data);
    } else {
        root->right = insert(root->right, data);
    }
    return root;
}

// Function for in-order traversal of the binary tree
void inOrderTraversal(struct Node* root) {
    if (root != NULL) {
        inOrderTraversal(root->left);
        printf("%d ", root->data);
        inOrderTraversal(root->right);
    }
}

// Function for pre-order traversal of the binary tree
void preOrderTraversal(struct Node* root) {
    if (root != NULL) {
        printf("%d ", root->data);
        preOrderTraversal(root->left);
        preOrderTraversal(root->right);
    }
}

// Function for post-order traversal of the binary tree
void postOrderTraversal(struct Node* root) {
    if (root != NULL) {
        postOrderTraversal(root->left);
        postOrderTraversal(root->right);
        printf("%d ", root->data);
    }
}

// Main function to demonstrate the binary tree
int main() {
    struct Node* root = NULL;
    int n, value;

    // Prompt user for number of nodes
    printf("Enter the number of nodes to insert: ");
    scanf("%d", &n);

    // Insert data into the binary tree
    for (int i = 0; i < n; i++) {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &value);
        root = insert(root, value);
        
    }
printf("Pre-order Traversal of the Binary Tree:\n");
    preOrderTraversal(root);
    printf("\n");
    
    // Display the tree using different traversals
    printf("In-order Traversal of the Binary Tree:\n");
    inOrderTraversal(root);
    printf("\n");

    printf("Post-order Traversal of the Binary Tree:\n");
    postOrderTraversal(root);
    printf("\n");

    return 0;
}


