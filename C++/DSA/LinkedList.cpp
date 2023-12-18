#include <iostream>
using namespace std;

struct Node{
    int variable;
    Node *next;
};

Node *head=nullptr;

void addNodeToEnd(int x){
    Node *newNodePtr=new Node();
    newNodePtr->variable=x;
    newNodePtr->next=nullptr;
    
    if(head==nullptr){
        head=newNodePtr;
    }else{
        Node *temp=head;
        while (temp->next!=nullptr){
            temp=temp->next;
        }
        temp->next=newNodePtr;
    }
}

void deleteNodeOnFront(){
    if (head==nullptr){
        cout<<"\nList is empty.\n";
    }else{
        Node *temp=head;
        head=head->next;
        delete temp;
        
        
    }
}

void printList(){
    if(head==nullptr){
        cout<<"\nList is empty.";
    }else{
        Node *temp=head;
        cout<<"\nElements of Your list are: \n";
        while(temp!=nullptr){
            
            cout<<(temp->variable)<<" ";
            temp=temp->next;
        }

    }
}

void printMenu(){
    cout<<"\n\nEnter a command";
    cout<<"\n==================================\n";
    cout<<"1.ADD ELEMENT ON THE END OF THE LIST.\n";
    cout<<"2.ADD ELEMENT ON THE GIVEN POSTION\n";      // This is buggy, need to fix later 
    cout<<"3.DELETE ELEMENT ON THE BEGINNING OF THE LIST.\n";
    cout<<"4.PRINT OUT THE LIST.\n";
    cout<<"ENTER -1 TO EXIT MENU";
    cout<<"\n==================================\n";
}


void addNumberToPosition(int x,int postion){   // Will fix later 
    Node *nodePtr=new Node();
    nodePtr->variable=x;
    if (head==nullptr){
        head=nodePtr;
    }else{
        Node *temp=head;
        for(int i=2;i<=postion;i++){
            while(temp->next->next!=nullptr){
                temp=temp->next;
            }
        }
        temp->next=nodePtr;
        nodePtr->next=temp->next->next;
    }
}


int main(){
    int n;
    while(n!=-1){
        printMenu();
        cin>>n;
        if(n==1){
            int x;
            cout<<"\nEnter the number which you want to add to the list.\n";
            cin>>x;
            addNodeToEnd(x);
        }else if (n==2){
            int x,y;
            cout<<"\nEnter the number wihich you want to add to the list.\n";
            cin>>x;
            cout<<"\nEnter the postion of the number which you want to add to the list.\n";
            cin>>y;
            addNumberToPosition(x,y);
        }else if (n==3){
            deleteNodeOnFront();
        }else if (n==4){
            printList();
        }
    }
    cout<<"\n\nYou have exited the programme.";
}
