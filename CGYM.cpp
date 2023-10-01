#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y,z;
	    cin>>x>>y>>z;
	    if(z>=x+y)
	    cout<<"2"<<endl;
	    else if(x>z)
	    cout<<"0"<<endl;
	    else{
	       cout<<"1"<<endl; 
	    }
	    }
	return 0;
}
