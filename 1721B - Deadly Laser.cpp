#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long t;
    cin>>t;
    while(t--){
     long long n,m,x,y,d;
    cin>>n>>m>>x>>y>>d;
    
    if( (x+d>=n && y+d>=m) ||(x-d <= 1 && y-d <= 1) || (x-d <=1 && x+d>=n) || (y-d<=1 && y+d>=m))
    cout<<-1;
    else
    cout<<(n+m-2);
    }
    
    return 0;
}
