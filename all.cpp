#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>> t;
	while(t--)
	{
	    int a,x,y;
	    cin>> x >> y >>a;
	    if (a>=x && a<y) cout<<"yes";
	    else cout<<"no";
	    cout<<endl;
	}
	return 0;
}
