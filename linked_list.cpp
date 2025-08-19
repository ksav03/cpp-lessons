#include <iostream>

using namespace std;

struct node {
    int data;
    node* next;
};

node* create_node(int val) {
    
    node* new_node = new node;
    new_node->data = val;
    new_node->next = nullptr;
    return new_node;
}

void insert(node*& head, int val) {
    
    node* new_node = create_node(val);
    
    if (head == nullptr) {
        
        head = new_node;
        
    } else {
        
        node* temp = head;
    
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        
        temp->next = new_node;
    }
}

void print_list(node* head) {
    
    node* temp = head;
    
    while (temp->next != nullptr) {
        cout << temp->data << "\n";
        temp = temp->next;
    }
}

int main(){
    
    node* head = nullptr;

    for (int i = 0; i<10; i++) {
        insert(head, i);   
    }
    
    print_list(head);
    
    return 0;
}