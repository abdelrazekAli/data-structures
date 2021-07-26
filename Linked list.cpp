#include <iostream>
using namespace std;

struct node{
    int data;
    node* next;
};

node* head = NULL;

void insertNode(int value){
    node* new_node, *last;
    new_node = new node;
    new_node -> data = value;
    if(head == NULL){
        head = new_node;
        new_node -> next = NULL;
    }else{
        last=head;
        while(last -> next != NULL){
            last = last -> next;
        }
        last -> next = new_node;
        new_node -> next = NULL;
    }
};

void insertBegin(int value){
    node* new_node = new node;
    new_node -> data = value;
    new_node -> next = head;
    head = new_node;
};

void deleteNode(int value){
    node* current, *previous;
    current= head;
    previous =head;
    if(current -> data == value){
        head = current -> next;
        free(current);
    }else{
        while(current -> data != value){
            previous = current;
            current = current -> next;
        }
        previous -> next = current -> next;
        delete(current);
    };
};

void deleteBegin(){
    if(head ==NULL) {cout<<"Linked list is empty \n";}
    else{
        node* first_node = head;
        head = first_node -> next;
        delete(first_node);
    };
};

void deleteEnd(){
    if(head ==NULL) {cout<<"Linked list is empty \n";}
    else if(head -> next == NULL){
        delete(head);
        head = NULL;
    }
    else{
        node* current,*previous;
        current= head;
        previous= head;
        while(current -> next != NULL){
            previous = current;
            current = current -> next;
        }
        previous -> next = NULL;
        delete(current);
    };
}; 

void display(){
    node* current_node;
    if(head ==NULL) {cout<<"Linked list is empty \n";}
    else{
        current_node = head;
        while(current_node != NULL){
            cout<<current_node -> data<<"\t";
            current_node = current_node -> next;
        }
    };
    cout<<endl;
}

int main() {
    return 0;
}
