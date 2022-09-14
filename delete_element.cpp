#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,x;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    cin>>x;
	    int b[x];
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
	    for(int i=0;i<n;i++)
	    {
	        cout<<a[i]<<" ";
	    }
	    cout<<endl;
	    
	}
	return 0;
}
