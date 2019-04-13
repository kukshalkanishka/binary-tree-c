# include <stdio.h>
#include <stdlib.h> 

typedef struct Node{
    int value;
    struct Node * left;
    struct Node * right;
} Node;

Node * createNode(int value){
    Node * node = malloc(sizeof(struct Node));
    node->value = value;
    return node;
}

void addLeftNode(Node *  node, Node * leftNode){
    node->left = leftNode;
}

void addRightNode(Node *  node, Node * rightNode){
    node->right = rightNode;
}

int main(){
    Node * node1 = createNode(20);
    Node * node2 = createNode(18);
    Node * node3 = createNode(21);
    addLeftNode(node1, node2);
    addRightNode(node1, node3);
    printf("%p, and, %d and %p and %p", node1, node1->value, node1->left, node1->right);
    return 0;
}