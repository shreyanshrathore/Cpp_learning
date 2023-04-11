#include <bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* next;
};

void print(node* n){
    while(n  != NULL){
        cout<<n->data<<" ";
        n = n ->next;

    }
}

int main(){
    node* head = new node(); // this will declare that their is a int block and it will automatically point to that adress(head pointer)
    node* second = new node();
    node* third = new node();

    head->data = 5;
    head -> next = second;

    second ->data = 10;
    second ->next = third;

    third ->data = 15;
    third ->next = NULL;

    print(head);

}