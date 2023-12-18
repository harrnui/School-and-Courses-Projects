#include <iostream>
using namespace std;
#define max_size 15

struct Queue{
    int front;
    int end;
    int arr[max_size];
};

void displayMenu(){
    cout<<"\n\nEnter command.";
    cout<<"\n==================================\n";
    cout<<"1.ADD ELEMENT INTO THE QUEUE(ENQUEUE)\n";
    cout<<"2.REMOVE ELEMENT FROM THE QUEUE(DEQUEUE)\n";
    cout<<"3.PRINT THE QUEUE.\n";
    cout<<"ENTER -1 TO EXIT";
    cout<<"\n==================================\n";
}

Queue *createQueue(){
    Queue *queuePtr=new Queue();
    queuePtr->end=-1;
    queuePtr->front=-1;
    return queuePtr;
}

void enQueue(Queue *que,int x){
    if (que->arr[que->front]==max_size-1){
       cout<<"\nQueue is full.\n";
    }else{
        que->front++;
        que->arr[que->front] = x;
    }
}

void deQueue(Queue *que){
    if (que->end==-1 && que->front==-1){
        cout<<"\nQueue is empty.\n";
    }else{
        
        que->front--;
    }
}

void printQueue(Queue *que){
    if (que->arr[que->front]==max_size-1){
        cout<<"\nQueue is full.\n";
    }else if (que->end==-1 && que->front==-1){
        cout<<"\nQueue is empty.\n";
    }else{
        cout<<"\nYour queue has these elements:\n";
        for (int i=0;i<=que->front;i++){
            cout<<que->arr[i]<<" ";
        }
    }
}


int main(){
    int n;
    Queue *r=createQueue();
    while(n!=-1){
        displayMenu();
        cin>>n;
        if(n==1){
            int x;
            cout<<"\nEnter the number which you want to add to the Queue\n";
            cin>>x;
            enQueue(r,x);
        }else if (n==2){
            cout<<"\nYou have removed the element in the Queue. ";
            deQueue(r);
        }else if (n==3){
            printQueue(r);
        }
    }
    cout<<"\n\nYou have exited the programme";
}
