#include<iostream>
#include<string.h>
#include<cstring>
#define max 20

using namespace std;
char a[100];
int top=-1;

void push(char ele){
    if (top==max-1)
    {
        cout<<"Stack Overflow!\n";
    }else{
        top++;
        a[top]=ele;
    }

}

int pop(){
    if (top==-1)
    {
        cout<<"Stack Underflow!\n";
    }else{
        char d = a[top];
        top--;
        return d;
    }
    
}

void display(){
    cout<<"Stack's Display: ";
    for (int i = top; i >=0; i--)
    {
        cout<<a[i];
    }
    cout<<endl;
}

int ispalindrome(){
    int flag = 0;

    for (int i = 0; i <strlen(a); i++)
    {
        if (pop()==a[i])
        {
            flag=1;
        }else{
            return 0;
        }
        
    }

    if (flag==1)
    {
       return 1;
    }
    return 0;
}

int main(){
    int ch=1;
    string ele;

    cout<<"Enter the String: ";
    cin>>ele;

    for (int i = 0; i < ele.length(); i++)
    {
        push(ele[i]);
    }
    display();

    if (ispalindrome())
    {
        cout<<ele<<" is a Palindrome!"<<endl;
    }
    else{
        cout<<ele<<" is a not a Palindrome!"<<endl;

    }
}