#include<iostream>

using namespace std;

class Node{
    
    public:
    int data;
    Node* next;

    Node(){
        data = 0;
        next = NULL;
    }
};

class Stack{

    Node* top;

    public:

    Stack(){ top = nullptr; }

    void push(int x){
        Node* newNode = new Node();
        newNode->data = x;
        newNode -> next = top;
        top = newNode;
    }

    void pop(){
        if(top == nullptr){
            cout << "Stack is empty" << endl;
        } else{
            Node* temp = top;
            top = top -> next;
            delete temp;
        }
    }

    void peek(){
        if(top == nullptr){
            cout << "Stack is empty" << endl;
        }else{
            cout << top->data << endl;
        }
    }

    void display(){
        Node* temp = top;
        while(temp != nullptr){
            cout << temp->data << endl;
            temp = temp->next;
        }
    }
};

int main(){

    Stack stk;

    stk.push(1);
    stk.push(2);
    stk.push(3);
    stk.push(4);

    stk.display();
    stk.pop();
    stk.peek();
}

