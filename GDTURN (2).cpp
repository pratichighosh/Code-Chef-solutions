#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    int x,y;
	    cin >> x >> y;
	    if(x+y > 6) cout<<"yes";
	    else cout<< "no";
	    cout<< endl;
   	}
	return 0;
}
