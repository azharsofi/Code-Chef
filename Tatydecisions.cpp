#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    if((2*x)>(5*y))
	    cout<<"chocolate"<<endl;
	    else if((2*x)==(5*y))
	    cout<<"either"<<endl;
	    else
	    cout<<"candy"<<endl;
	}
	return 0;
}