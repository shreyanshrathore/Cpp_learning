#include <bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* next;
    node* prev;
};

node* new_one(int val){
    node* temp = new node();
    temp ->data = val;
    temp->next = NULL;
    temp->prev = NULL;
    return temp; 
}

node* insert(node* head, int val){
    if(head == NULL){
        return new_one(val);
    } 

    else{
        node* temp = new_one(val);
        head->next = insert(head->next , val);
        head->next->prev = head;
        return  head;
    }
}

void print(node* head){
    node* curr = head;
    while(curr != NULL){
        cout<<curr->data<<" ";
        curr = curr->next;
    }
}








void printatpos(node* head, int val, int pos){
    int k = 1;
    while(k!=pos){
        head = head ->next;
        k++;
    }
    node* temp = new_one(val);
    head->next->prev = temp;
    temp->next = head->next;
    head->next = temp;
    temp->prev = head;
}


int main(){
    node* head = NULL;
    head = insert(head , 1);
    head = insert(head , 2);
    head = insert(head , 3);
    head = insert(head , 4);
    head = insert(head , 5);
    printatpos(head, 6, 2);
    print(head);
}