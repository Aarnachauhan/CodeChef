https://www.codechef.com/problems/APPROVAL?tab=statement


#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
  int T;
  cin>>T;
  while(T--){
      vector<int>a(5);
      int sum=0;
      for(int i=0;i<5;i++){
          cin>>a[i];
          sum+=a[i];
      }
      if(sum>=35){
          cout<<0<<endl;
          continue;
      }
      sort(a.begin(),a.end());
      int coins=0;
      for(int i=0;i<5 && sum<35;i++){
          sum+=(10-a[i]);
          coins+=100;
      }
      cout<<coins<<endl;
  }
  return 0;
}
