#include<stdio.h>
#include<stdlib.h>
int top=-1;
int a[50];
void push(int x)
{
    if(top>=49)
    {
        printf("Overflow");
    }
    else
    {
        top++;
        a[top]=x;
    }
}
void pop()
{
    if(top==-1)
    {
        printf("Stack Underflow");
    }
    else{
        top--;
    }
}
int peek(int x)
{
    for(int i=0;i<top;i++)
    {
        if(a[i]==x)
        {
            return i;
        }
    }
    return -1;
}
void display()
{
    for(int i=top;i>=0;i--)
    {
        printf("%d \n",a[i]);
    }
}
int main()
{
    int a,b,loc;
    while(1)
    {
        int ch;
        printf("Enter Any Choice \n 1.Push \n 2. Pop \n 3. Peek \n 4. Display \n 5.Exit \n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                printf("Enter Element:");
                scanf("%d",&a);
                push(a);
                break;
            case 2:
                pop();
                break;
            case 3:
                    printf("Enter the value You want to find: ");
                    scanf("%d",&b);
                    loc=peek(b);
                    if(loc==-1)
                    {
                        printf("Element not found");
                    }
                    else{
                        printf("Element found at location %d",loc);
                    }
                    break;
            case 4:
                display();
                break;
            case 5:
                exit(1);
                break;
            default:
                printf("Bhai 1 se 5 me likh");
                break;
        }
    }
return 0;
}