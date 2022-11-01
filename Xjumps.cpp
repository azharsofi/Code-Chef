#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	int x;
	int y;
	
	while(t--){
	    
	    cin>>x>>y;
	    if(x<y)
	        cout<<x<<endl;
	    else if(x%y==0)
	        cout<<x/y<<endl;
	    
	    else if(x%y!=0){
	  
	        cout<<(x/y)+(x%y)<<endl;
	    }
	    
	}
	return 0;
}
