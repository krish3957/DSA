#include <iostream>
using namespace std;

int main() {
	// your code goes here
	cout<<"Enter the number of case"<<endl;
	int t;
	cin>>t;
	while(t--)
	{
	    
		int n,x;
		cout<<"Enter the length of the array"<<endl;
	    cin>>n;
	    int a[n];
		cout<<"Enter the elements of the array"<<endl;
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
		cout<<"Enter the number of elements you want to delete"<<endl;
	    cin>>x;
	    int b[x];
		cout<<"Enter the elements you want tot delete"<<endl;
	    for(int i=0;i<x;i++)
	    {
	        cin>>b[i];
	    }
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<x;j++)
	        {
	            if(a[i]==b[j])
	            {
	               n--;
	               for(int k=i;k<n;k++)
	               {
	                   a[k]=a[k+1];
	               }
	            }
	        }
	    }
		cout<<"Array after deletion of the elment"<<endl;
	    for(int i=0;i<n;i++)
	    {
	        cout<<a[i]<<" ";
	    }
	    cout<<endl;
	    
	}
	return 0;
}

