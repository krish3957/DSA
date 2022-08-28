#include <iostream>
using namespace std;
void linearseacrch(int a[],int n, int data)
{
    for(int i=0;i<n;i++)
    {
        if(data==a[i])
        {
            cout<<data<<"Found at index no"<<i;
        }
    }
}
int main()
{
    int n,data;
    cout<<"Enter the length of the array";
    cin>>n;
    int a[n];
    cout<<"Enter the elements of the array";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the number you want to search from the array";
    cin>>data;
    linearseacrch(a,n,data);
}