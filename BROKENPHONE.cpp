#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while (t--){
        int x,y;
        cin >> x >> y;
        if (x<y)
        cout << "repair" << endl;
        else if (x==y) 
        cout << "any" << endl;
        
        else 
       {
           cout << "new phone" << endl;
       }
        
    }
	return 0;
}
