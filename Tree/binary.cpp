#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};


void printInorder(Node* head){
    if(head == NULL){
        return;
    }
    printInorder(head->left);
    cout<<head->data<<" ";
    printInorder(head->right);
}






void printPostorder(Node* head){
    if(head == NULL){
        return;
    }
    cout<<head->data<<" ";
    printPostorder(head->left);
    printPostorder(head->right);
}




void printPreorder(Node* head){
    if(head == NULL){
        return;
    }
    printPreorder(head->left);
    printPreorder(head->right);
    cout<<head->data<<" ";
}
int main(){
    Node* head = new Node(1);
    head->left = new Node(2); 
    head->right = new Node(3);
    head->left->left = new Node(4);
    head->left->right = new Node(5);
    // head->right->left = new Node(6);
    // head->right->right = new Node(7);
    printInorder(head);
    cout<<endl;
    printPreorder(head);
    cout<<endl;
    printPostorder(head);
    cout<<endl;

}