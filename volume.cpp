#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	int x,y;
	while(t--){
	    cin>>x;
	    cin>>y;
	    if(x>y)
	    cout<<x-y<<endl;
	    else
	    cout<<y-x<<endl;
	}
	return 0;
}
