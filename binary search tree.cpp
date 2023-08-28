
    #include <stdio.h>
#include <stdlib.h>

// Define the structure of a binary tree node
struct TreeNode {
    int data;
    struct TreeNode* left;
    struct TreeNode* right;
};

// Function to create a new node
struct TreeNode* newNode(int value) {
    struct TreeNode* node = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    node->data = value;
    node->left = NULL;
    node->right = NULL;
    return node;
}

// Function to insert a new node into the binary search tree
struct TreeNode* insert(struct TreeNode* root, int value) {
    if (root == NULL) {
        return newNode(value);
    }

    if (value < root->data) {
        root->left = insert(root->left, value);
    } else if (value > root->data) {
        root->right = insert(root->right, value);
    }

    return root;
}

// Function to find the minimum value in the binary search tree
int findMin(struct TreeNode* root) {
    if (root == NULL) {
        printf("Tree is empty\n");
        return -1; // Return a sentinel value
    }

    while (root->left != NULL) {
        root = root->left;
    }

    return root->data;
}

// Function to find the maximum value in the binary search tree
int findMax(struct TreeNode* root) {
    if (root == NULL) {
        printf("Tree is empty\n");
        return -1; // Return a sentinel value
    }

    while (root->right != NULL) {
        root = root->right;
    }

    return root->data;
}

int main() {
    struct TreeNode* root = NULL;
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);

    printf("Minimum value: %d\n", findMin(root));
    printf("Maximum value: %d\n", findMax(root));

    return 0;
}
