#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	int n,m,k;
	int c=0;
	while(t--){
	    cin>>n>>m>>k;
	    c=0;
	    int a[n];
	    for(int i=0;i<n;i++ ){
	        cin>>a[i];
	    }
	    for(int i=0;i<n;i++){
	        if(a[i]==1){
	        c=100;}
	        else{
	        c=0;
	        break;}
	    }
	    if(c!=100){
	     for(int i=0;i<m;i++)
	     {
	         if(a[i]==1){
	         c=k;}
	         else{
	         c=0;
	         break;}
	     }
	    
	}
	    cout<<c<<endl;
	}
	return 0;
}
