#include <bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* next;
};
//  BRUTE FORCE 
// node* push(node *head , int newdata){
//     node* temp = new node();
//     temp ->data = newdata;
//     temp ->next = head;
//     head = temp;
//     return head;
// }

3
node* temp = new node();
temp ->data = 3;
temp->next = heads;
heads = 3;



2    [6-7]  index = 4
3 4 5 6 -----2------ 7 8 9 -->  linked list  == head = heads

node* temp = new node();
temp->data = 2;

2->next =7

int cnt = 0;
while(cnt == 4){
    heads = heads->next;
}

3 4 5 6-> 2-> 7 8 9
|      |
head    heads->next = temp ->next=  7 [head->next]
    temp->next = heads->next
    heads->next = temp


node* push(node **head_ref , int newdata){
    node* temp = new node();
    temp ->data = newdata;
    temp ->next = *head_ref;
    *head_ref = temp;
}

void print(node* head){
    while(head  != NULL){
        cout<<head->data<<" ";
        head = head ->next;
    }
}

void insert(node** head , int value, int pos){
    node* temp = new node();
    temp ->data= value;
    // temp ->next = NULL;

    int k = 1;
    node* curr = *head;
    while(k !=pos){
        k++;
        curr = curr ->next;
    }
    
    temp ->next =  curr->next;
    curr ->next = temp;
}

int main(){
    // node* head = new node(); // this will declare that their is a int block and it will automatically point to that adress(head pointer)
    // node* second = new node();
    // node* third = new node();

    // head->data = 5;
    // head -> next = second;

    // second ->data = 10;
    // second ->next = third;

    // third ->data = 15;
    // third ->next = NULL;

    // node* head = NULL;
    // head = push(head , 5);
    // head = push(head , 4);
    // head = push(head , 3);
    // head = push(head , 2);



    node* head = NULL;
    push(&head , 5);
    push(&head , 4);
    push(&head , 3);
    push(&head , 2);
    insert(&head, 89 , 2);
    print(head);

}