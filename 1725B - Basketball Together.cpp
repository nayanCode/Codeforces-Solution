#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long res=0,n,l=-1,r,d;
    
    cin>>n>>d;
    vector<int>v(n);
 
    r=n-1;
    for(int i=0;i<n;i++)
       cin>>v[i];
       sort(v.begin(),v.end());
       long long i=1;
    while(l<r){
    
        int m=v[r];
        if(m*(i) > d){
            r--;
            i=1;
            res++;

        }
         else{
            l++,i++; 
         }
        
    }
       
    cout<<res;

    return 0;
}
