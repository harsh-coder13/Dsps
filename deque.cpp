#include<iostream>
#define MAX 10
using namespace std;

int a[MAX];
int front=-1,rear=-1;

void insertFront(int key){
    if (front == 0 && (rear == MAX-1 || front==rear+1)){
        cout<<"Overflow\n";
        return;
    }
    else if (front==1)
    {
        front=0;
        rear=0;
    }
    else if (front==0)
    {
        front=MAX-1;
    }
    else{
        front=front-1;
    }
    a[front]=key;
}

void insert_rear(int key){
    if ((front==0 && rear==MAX-1) || (front==rear+1))
    {
        cout<<"Overflow!\n";
        return;
    }
    else if (front==-1 && rear==-1)
    {
        rear=0;
    }
    else if (rear==MAX-1)
    {
       rear=0;
    }
    else{
        rear++;
    }

    a[rear] = key;
    
    
}

void display(){
    int i = front;

    cout<<"Elements in the deque are: ";

    while (i!=rear)
    {
        cout<<a[i]<<" ";
        i=(i+1)%MAX;
    }
    cout<<a[rear];
}

void get_front(){
    if(front==-1 && rear==-1)
        cout<<"Dequeue is Empty!";
    else
        cout<<"The value of front element is: "<<a[front];
}

void getrear(){
    if (front==-1 && rear==-1)
        cout<<"Deque is empty!";
    else 
        cout<<"The value of rear element is "<<a[rear];
    
}

void delete_front(){
    int ele;
    if (front==-1 && rear==-1){
        cout<<"Deque is Empty";
    }
    else if (front==rear){
        ele=a[front];
        front=-1;
        rear=-1;
    }
    else if(front==MAX-1){
        ele=a[front];
        front=0;
    }
    else{
        ele=a[front];
        front=front+1;
    }
    cout<<ele<<" is deleted";
}

void delete_rear(){
    int ele;
    if (front==-1 && rear==-1)
    {
        cout<<"Deque is empty";
    }else if(front==rear){
        ele=a[rear];
        front=-1;
        rear=-1;
    }
    else if(rear==0){
        ele=a[rear];
        rear=MAX-1;
    }
    else{
        ele=a[rear];
        rear=rear-1;
    }
    cout<<ele<<" is deleted\n";
}

int main(){
    int ch,ele;

    do
    {
        cout<<"1-Insert front 2-delete Front 3-Insert Rear 4-deleteRear 5-Display 0-Exit\n";
        cout<<"Enter your choice: ";
        cin>>ch;

        switch (ch)
        {
        case 1:
            cout<<"Enter the element: ";
            cin>>ele;
            insertFront(ele);
            break;
        case 2:
            delete_front();
            break;
        case 3:
            cout<<"Enter the element: ";
            cin>>ele;
            insert_rear(ele);
            break;
        case 4:
            delete_rear();
            break;
        case 5:
            display();
            break;

        default:
            break;
        }
    } while (ch!=0);
    
}