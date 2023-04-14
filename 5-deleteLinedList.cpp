#include <bits/stdc++.h>
using namespace std;;

struct node{
    int data;
    node* next;
};

void push(node** head , int val){
    node* temp = new node();
    temp ->data = val;
    temp->next = *head;
    *head = temp;
}

void print(node* n){
    while(n  != NULL){
        cout<<n->data<<" ";
        n = n ->next;

    }
}

void del(node** head, int pos ){
    node* temp = new node();
    temp = *head;
    int k = 2;
    while(k<pos){
        k++;
        temp = temp->next;
    }
    temp->next = temp->next->next;
}

int main(){
    node *head = NULL;
    push(&head , 1);
    push(&head , 2);
    push(&head , 3);
    push(&head , 4);
    push(&head , 5);
    del(&head, 5);

    print(head);

}