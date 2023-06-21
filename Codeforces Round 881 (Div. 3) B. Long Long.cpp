void solve()
{
 ll n,s=0,op=0;
 cin >> n;
 
 vector<ll>v(n,0),v1;
for(int i=0;i<n;i++){
    cin>>v[i];
    s+=abs(v[i]);  
}

for(auto x:v){
    if(x)
    v1.push_back(x);
}

if(v1.size()==0){
cout<<0<<" "<<0;
return ;}

// sort(v.begin(),v.end());
int n1=v1.size();

int pos=0,neg=0;
for(int i=1;i<n1;i++){
if(v1[i-1]<0 && v1[i]>0)
    neg++;
else if(v1[i-1]>0 && v1[i]<0)
    pos++;
}


if((v1[n1-2]<0 && v1[n1-1]>0) || (v1[n1-2]>0 && v1[n1-1]>0))
    pos++;
else if((v1[n1-2]>0 && v1[n1-1]<0) || (v1[n1-2]<0 && v1[n1-1]<0))
    neg++;

cout<<s<<" "<<min(pos+1,neg);
}
