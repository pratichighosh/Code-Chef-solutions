#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int A,B;
	    cin >> A >> B;
	    cout << min(A,B) << "\n";
	}
	return 0;
}
