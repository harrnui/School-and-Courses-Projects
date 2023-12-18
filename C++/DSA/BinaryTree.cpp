#include <iostream>
using namespace std;

//Just a Binary Tree and the types of traversal through it ...

struct Node{
    int value;
    Node *left;
    Node *right;
};

Node *createNode(int value){
    Node *newNode = new Node();
    newNode->value = value;
    newNode->right = newNode->left = nullptr;
    return newNode;
}

void preorder(Node *node){
    if (node==nullptr){
        return;
    }else{
        cout<<(node->value)<<" ";
        preorder(node->left);
        preorder(node->right);
    }
}
void inorder(Node *node){
    if (node==nullptr){
        return;
    }else{
        inorder(node->left);
        cout<<(node->value)<<" ";
        inorder(node->right);
    }
}
void postorder(Node *node){
    if (node==nullptr){
        return;
    }else{
        postorder(node->left);
        postorder(node->right);
        cout<<(node->value)<<" ";
    }
}

int main(){
    Node *root=createNode(1);
    root->left=createNode(2);
    root->right=createNode(3);
    root->left->left=createNode(4);
    root->left->right=createNode(5);
    root->right->left=createNode(6);
    root->right->right=createNode(7);
    root->left->left->left=createNode(8);
    root->left->left->right=createNode(9);

    cout<<"\n\nPreorder Traversal: \n";
    preorder(root);
    

    cout<<"\n\nInorder Traversal: \n";
    inorder(root);
    

    cout<<"\n\nPostorder Traversal: \n";
    postorder(root);
    
}
