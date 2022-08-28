#include<stdio.h>
int bsearch(int a[],int n,int data)
{
    int l=0;
    int r=n-1;
    int mid;
    while(l<=r)
    {
        mid=(l+r)/2;
        if(a[mid]==data)
        {
            return mid;
        }
        else if(data<a[mid])
        {
            r=mid-1;
        }
        else if(data>a[mid])
        {
            l=mid+1;
        }
    }
    return -1;
}


int main()
{
    int n,data;
    printf("Enter the length of the array");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of the array");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element you want to search");
    scanf("%d",&data);
    int res=bsearch(a,n,data);
    if(res==-1)
    {
        printf("data not found");
    }
    else
    {
        printf("Data found at index no: %d",res);
    }
    return 0;
}