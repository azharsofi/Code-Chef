#include <iostream>
using namespace std;

int main() {
	int t;
	int n;
	cin>>t;
	int m=0;
	
	while(t--){
	    int n;
	    m=0;
	    int g=0;
	    int c=0;
	    int e;
	    int x;
	    int d=0;
	    cin>>n;
	    int a[n];
	    int b[n];
	    for(int i=0;i<n;i++)
	   cin>>a[i];
	     for(int i=0;i<n;i++)
	     cin>>b[i];
	       for(int i=0;i<n;i++){
	       x=a[i]*b[i];
	           
	           if(x>m){
	               m=x;
	               d=b[i];
	               e=i;}
	               else if(x==m){
	           
	                   if(b[i]>d){
	                   d=b[i];
	                   c=1;
	                    g=i;   
	                       
	                   }
	               }
	       }
	               if(c==1){
	                   cout<<g+1<<endl;
	               }
	               else
	               cout<<e+1<<endl;
	}      
	return 0;
}
