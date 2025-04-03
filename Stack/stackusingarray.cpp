#include<iostream>
using namespace std;

#define n 100

class Stack {

    int top;
    int arr[n];


    public:
    Stack(){
        top = -1;
    }

    void push(int x){

        if(top == n-1){
            cout<<"Stack Overflow"<<endl;
        }
        else{
            top++;
            arr[top] = x;
        }
    }

    void pop(){

        if(top == -1){
            cout<<"Stack Underflow"<<endl;
        } else{
            top--;
        }
    }

    void peek(){
        if(top == -1){
            cout<<"Stack is empty"<<endl;
        }else{
            cout<<"Top element is "<<arr[top]<<endl;
        }
    }

    void display(){

        if(top ==  -1){
            cout<<"Stack is empty"<<endl;
        }else{
            for(int i = 0; i <= top; i++){
                cout << arr[i] << endl;
            }
        }
    }


};

int main(){

    Stack stk1;

    stk1.push(10);
    stk1.push(20);
    stk1.push(30);
    stk1.push(40);
    stk1.display();
    stk1.peek();
    stk1.pop();
    stk1.pop();
    stk1.peek();

    
}