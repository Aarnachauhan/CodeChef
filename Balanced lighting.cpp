problem: https://www.codechef.com/problems/RBLT?tab=statement
very tricky

  
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int c1=0;
	    int c2=0;
	    
	    for(int i=0;i<n;i++){
	        int color;
	        cin>>color;
	        if(color==1){
	            c1++;
	        }else if(color==2){
	            c2++;
	        }
	    }
	    if(n%2!=0){
	        cout<<"No"<<endl;
	    }else{
	        if(c1 >n/2 || c2>n/2){
	            cout<<"No"<<endl;
	        }else{
	            cout<<"Yes"<<endl;
	        }
	    }
	}

}
