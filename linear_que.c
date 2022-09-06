#include<stdio.h>
#include<stdlib.h>
int f=0;
int rear=-1;
int a[50];
void enque(int x)
{
    if(rear>=49)
    {
        printf("Que is full");
    }
    else
    {
        rear++;
        a[rear]=x;
    }
}
void deque()
{
    if(rear==-1)
    {
        printf("Que is empty");
    }
    else
    {
        f++;
    }
}
void display()
{
    for(int i=f;i<=rear;i++)
    {
        printf("%d \n",a[i]);
    }
}
int main()
{
    int x,c;
    while(1)
    {
        printf("Enter Your Choice: \n 1.Enque \n 2.Deque \n 3.Display \n 4.Exit \n ");
        scanf("%d",&c);
    switch(c)
    {
        case 1:
            printf("Enter the number you want to add in the que:");
            scanf("%d",&x);
            enque(x);
            break;
        case 2:
            deque();
            break;
        case 4:
            exit(1);
            break;
        case 3:
            display();
            break;
        default:
            printf("Enter a valid choice");  
            break; 
    }
    }
    return 0;
}