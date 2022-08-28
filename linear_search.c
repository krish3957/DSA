#include<stdio.h>
void linearsearch(int a[],int n,int data)
{
    int found=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==data)
        {
            printf("Data found at Index %d",i);
            found=1;
            break;
        }
    }
    if(found==0)
    {
        printf("Data not found");
    }
}



int main()
{
    int n,data;
    int a[n];
    printf("Enter the lenght of the array");
    scanf("%d",&n);
    printf("Enter the elements of the array");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    printf("Enter the number you want to search in the array");
    scanf("%d",&data);
    linearsearch(a,n,data);
}