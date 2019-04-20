#include <iostream>
#include <string>

using namespace std;

//basic stack

class Stack {
    private: 
        string UI_element[10];
        int top;
    public:
    
        Stack(){
            top = -1;
        }
    
        void Push(string element) {
        if(top >= 10) {
            cout << "Error occurred";
        }
        UI_element[++top] = element;
    }    
    
        string Pop() {
        if (top == -1) {
            cout << "Error occurred";
        }
        return UI_element[top--];
    }    
    
        string Top() {
            return UI_element[top];
        }
        
        int Size() {
            return top + 1;
        }
        
        bool isEmpty() {
            return (top == -1) ? true : false;
        }
};



int main() {

    Stack _stack;
    if(_stack.isEmpty()) {
        cout << "Stack is empty" << endl;
    }
    _stack.Push("UI_element_1");
    _stack.Push("UI_element_2");
    _stack.Push("UI_element_3");
    _stack.Push("UI_element_4");
    _stack.Push("UI_element_5");
    _stack.Push("UI_element_6");
    _stack.Push("UI_element_7");
    _stack.Push("UI_element_8");
    _stack.Push("UI_element_9");
    _stack.Push("UI_element_10");
    
    cout << "Size of stack is " << _stack.Size() << endl;
    cout << "Top Element is " << _stack.Top() << endl;
    cout << "Remove Top Element " << _stack.Pop() << endl;
    cout << "Top element is now " << _stack.Top() << endl;
    
    
return 0;
}
