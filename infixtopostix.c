#include<stdio.h>
#define max 100

int sta[max],top=-1;

int push(char ele){
    if (top==max-1)
    {
       printf("overflow!");
    }else{
    top++;
    sta[top]=ele;
    }
}

int pop(){
    if (top==-1)
    {
       printf("underflow!");
    }
    else{
    int x=sta[top];
    top--;
    return x;
    }


}

int ispair(char c1,char c2){
    if (c1=='(' && c2==')')
    {
        return 1;
    }
    else if(c1=='[' && c2==']')
    {
        return 1;
    }
    else if (c1=='{' && c2=='}')
    {
        return 1;
    }
    else {
        return 0;
    } 
}
int isbalanced(char *text)
{
    for (int i = 0;text[i]!='\0'; i++)
    {
        if (text[i]=='(' || text[i]=='[' || text[i]=='{')
        {
            /* code */
        }
        else if (text[i]==')' || text[i]==']' || text[i]=='}')
        {
            if (top==-1)
            {
                return 0;
            }else if (!ispair(pop(),text[i]))
            {
                return 0;
            }
            
            
        }
        
        
    }

if (top==-1)
{
    return 1;
}
else{
    return 0;
}

    
}
int main(){
    char text[max];
    printf("Enter the expression: ");
    scanf("%s",sta);


    if (isbalanced(text))
    {
        printf("balanced");
    }
    else{
        printf("Unbalanced");
    }
    
}