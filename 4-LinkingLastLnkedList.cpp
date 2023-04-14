#include <bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* next;
};

void push(node** head_ref, int newdata){
    node* temp = new node();
    temp->data = newdata;
    temp->next = *head_ref;
    *head_ref = temp;


}

void insert(node** head_ref , int newdata ){
    node* temp = new node();
    temp ->data= newdata;
    temp->next = NULL;

    node* last = *head_ref;
    while(last->next != NULL){
        last = last->next;
    }
    last->next = temp; 
}

void print(node* n){
    while(n  != NULL){
        cout<<n->data<<" ";
        n = n ->next;

    }
}

int main(){
    node* head = NULL;
    push(&head , 6);
    push(&head , 7);
    push(&head , 8);
    push(&head , 9);
    push(&head , 2);
    push(&head , 3);
    insert(&head , 230 );
    print(head);

}

