
#include <bits/stdc++.h>

using namespace std;

int main()
{
 long long ans=0,n,k=0;
  cin>>n;
while(n){
    long long v = 9 - n%10;
   if(v >=0 && v < n%10 && (n/10!=0 || n%10!=9)){
    
       ans+=(pow(10,k))*v;
    
   }
   else{
      ans+=(pow(10,k))*(n%10);
       
   }
   k++;

n/=10;
}

cout<<ans;
//ans == 91230320  out == //1230320
    return 0;
}
