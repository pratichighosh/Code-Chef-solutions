#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int a;
	    cin >> a;
	    if (a%2==0 && a%7==0)
	    cout<<"alice"<<endl;
	    else if (a%2!=0 && a%9==0)
	    cout<<"bob"<<endl;
	    else
	    cout<<"charlie"<<endl;
	}
	return 0;
}
