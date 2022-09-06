#include<stdio.h>
#include <stdlib.h>
int front=-1,rear=-1;
int a[50];
void enque(int x)
{
    if(rear==-1 && front==-1)
    {
        rear=front=0;
        a[rear]=x;
    }
    else if((rear +1)%50==front)
    {
        printf("Que is full");
    }
    else
    {
        rear=(rear +1)%50;
        a[rear]=x;
    }
}
void deque()
{
    if(front==-1 && rear==-1)
    {
        printf("que is Empty");
    }
    else if(front==rear)
    {
        front =rear=-1;
    }
    else
    {
        front=(front+1)%50;
    }
}
void display()
{
    int i=front;
    if(front==-1)
    {
        printf("Que is empty");
    }
    else
    {
        printf("Que is:");
        while(i!=rear)
        {
            printf("%d\n",a[i]);
            i=(i+1)%50;
        }
    }
}
int main()
{
    int x,c;
    while(1)
    {
        printf("\nEnter Your choice: \n 1.Enque \n 2.Deque \n 3,Display \n 4.Exit \n");
        scanf("%d",&c);
        switch(c)
        {
            case 1:
                printf("Enter the element you want to add in the que");
                scanf("%d",&x);
                enque(x);
                break;
            case 2:
                deque();
                break;
            case 3:
                display();
                break;                
            case 4:
                exit(1);
                break;
            default:
                printf("Enter a valid Choice:");
        }
    }
    return 0;
}