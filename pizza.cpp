#include<iostream>
#include<string>
#include<string.h>

#define max 5

using namespace std;

string a[max];
int rear = -1,front=-1;

void enqueue(string ele){
    if (rear==max-1)
    {
        cout<<"Hotel is Full\n";
    }else{
        rear++;
        a[rear] = ele;
        cout<<a[rear]<<" Order Placed Successfully\n";
    }
    
}

string Dequeue(){
    string removed_ele;
    if (rear==-1 || front==rear)
    {
        cout<<"No orders taken\n";
    }
    else{
        front++;
        removed_ele = a[front];

    }
        return removed_ele;
}

void display(){
    cout<<"Displaying the Orders: \n";
    if (rear==-1 || front==rear)
    {
        cout<<"No Orders taken\n";
    }
    else{
        for (int i = front+1; i <=rear; i++)
        {
            cout<<a[i]<<endl;
        }
        
    }
    cout<<endl;
}

int main(){
    int ch,ele;
    string de;

    cout<<"-----Welcome to City Pizza-----\n";

    do
    {
        cout<<"1-Place Order 2-Deliver Oder 3-Show Orders 4-Exit\n";
        cout<<"Enter your choice: ";
        cin>>ch;

        switch (ch)
        {
        case 1:
            cout<<"Tell is what you want: ";
            cin>>de;
            enqueue(de);
            break;
        case 2:
            de = Dequeue();
            cout<<de<<" Order Completed\n";
            break;
        case 3:
            display();
        default:
            break;
        }
    } while (ch);
    
}