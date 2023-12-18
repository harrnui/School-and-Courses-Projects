#include <iostream>
using namespace std;

#define max_size 100

struct Stack{     // This program works with Stack memory, not Heap
    int top;          //therefore there is no usage of new operator and pointers
    int arr[max_size];  // The reason for that is - practice
};                      


Stack createStack(){   
    Stack stack;        
    stack.top=-1;       
    return stack;       
}

void push(Stack& s,int x){  
    if (s.top==max_size-1){     
        cout<<"\nStack is full.\n";
    }else{
        s.top++;
        s.arr[s.top]=x;
    }
}

void pop(Stack& s){
    if(s.top==-1){
        cout<<"\nStack is empty.\n";
    }else{
        s.top--;
    }
}

void printStack(Stack& s){
    if(s.top==-1){
        cout<<"\nStack is empty.\n";
    }else{
        cout<<"\nYour elements of the stack are: \n";
        for (int i=0;i<=s.top;i++){
            cout<<s.arr[i]<<" ";
        }
    }
}


void readMeni(){
    cout<<"\n\nChoose a command: \n";
    cout<<"==============================\n";
    cout<<"1) Enter a new element to the stack.\n";
    cout<<"2) Remove an element from the stack.\n";
    cout<<"3) Print stack. \n";
    cout<<"4) EXIT\n";
    cout<<"==============================\n\n\n";
}




int main(){
    int n;
    Stack s = createStack();
    while(!(n==4)){
        readMeni();
        cin>>n;
        if(n==1){
            cout<<"\n\nEnter the number which you want to add to the stack: \n";
            int x;
            cin>>x;
            push(s,x);
        }else if (n==2){
            cout<<"\n\nYou are removing an element from the stack. \n";
            pop(s);
        }else if (n==3){
            printStack(s);
    }
    
}
cout<<"IZASLI STE IZ PROGRAMA.";
}
