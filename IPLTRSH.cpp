#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int n, m;
	    cin >> n >> m;
	    if (n <= m) 
	    {
	        cout << 0 << "\n";
	    }
	    else {
	        cout << n-m << endl;
	    }
	}
	return 0;
}
