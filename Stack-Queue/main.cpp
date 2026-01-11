//Using Array's
/*#include <bits/stdc++.h>
using namespace std;

class Stack{
    public:
        int *stack = NULL; // Dont use *Stack and dont use stack[] as for DM Allocation we need pointers
        int top;
        int n;
        Stack(int size){
            this -> n = size; // OR n = size we use this -> n = n when parameter and data member variable names are same 
            stack = new int[n];
            top = -1;
        }
        void push(int element){
            if(top==n-1){
                cout<<"Stack Overflow"<<endl;
            }else{
                top++;
                stack[top]=element;
            }
        }
        void pop(){
            if(top==-1){
                cout<<"Stack Underflow"<<endl;
            }else{
                top--;
            }
        }
        int peek(){
            if(top==-1){
                return -1; 
            }else{
                return stack[top];
            }
        }
        bool empty(){
            if(top==-1){
                return 1;
            }else{
                return 0;
            }
        }
        bool full(){
            if(empty()){
                return 0;
            }else{
                return 1;
            }
        }
        ~Stack(){
            delete []stack;
        }
};

int main()
{
    Stack stack(5);
    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.push(4);
    stack.push(5);
    stack.push(6);
    cout<<stack.full()<<endl;
    cout<<stack.peek()<<endl;
    stack.pop();
    cout<<stack.peek()<<endl;
    return 0;
}  //Destructor runs here !
  */



//Using Linked List