// #include <bits/stdc++.h>
// using namespace std;

// struct node{
//     int data;
//     node* next;
// };

// void push(node** head , int val){
//     node* temp = new node();
//     temp->data = val;
//     temp->next = *head;
//     *head = temp;
// }

// void traverse(node* head)
// {
//     if (head == NULL)
//        return;
     
//     // If head is not NULL, print current node
//     // and recur for remaining list  
//     cout << head->data << " ";
 
//     traverse(head->next);
// }

// int main(){

//     node* head = NULL;
//     push(&head , 1);
//     push(&head , 2);
//     push(&head , 3);
//     push(&head , 4);
//     push(&head , 5);
    
//     traverse(head);
// }





#include <bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* next;
};



node *newnode(int val){
    node* temp = new node();
    temp->data = val;
    temp->next = NULL;
    return temp;
}

node* insert(node* head , int val){
    if(head == NULL)
        return newnode(val);
    

    else
        head->next = insert(head->next, val);
    
    return head;
}



void traverse(node* head){
    if(head == NULL){
        return;
    }
    cout<<head->data<<" ";
    traverse(head->next);
}



int main(){
    node* head = NULL;
    head = insert(head , 1);
    head = insert(head , 2);
    head = insert(head , 3);
    head = insert(head , 4);
    head = insert(head , 5);

    traverse(head);
}