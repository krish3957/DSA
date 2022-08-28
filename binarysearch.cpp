#include <iostream>
using namespace std;
int binarysearch(int a[],int n,int data)
{
    int l=0;
    int r=n-1;
    int mid;
    while(l<=r)
    {
        mid=(l+r)/2;
        if(data==a[mid])
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
    int n,data,res;
    cout<<"Enter the length of the array";
    cin>>n;
    int a[n];
    cout<<"Enter the elemtnts of array in asscending order";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the  number you want to search";
    cin>>data;
    res=binarysearch(a,n,data);
    if(res==-1)
    {
        cout<<"Data not found";
    }
    else
    cout<<"Entered number found at Index No:"<<res;
    }