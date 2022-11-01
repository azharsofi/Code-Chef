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
	    cout<<"SECOND"<<endl;
	      else if(x<y)
	    cout<<"FIRST"<<endl;
	    else
	    cout<<"ANY"<<endl;
	}
	return 0;
}
