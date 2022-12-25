#include <iostream>
using namespace std;

int main() {
	// your code goes 
	int t;
	cin>>t;
	int a,b,c;
	while(t--){
	    cin>>a>>b>>c;
	    if(a<=(b-c))
	    cout<<"YES"<<endl;
	    else
	    cout<<"No"<<endl;
	}
	return 0;
}
