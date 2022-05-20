#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

ll f(ll x){
    return x*x;
}

ll busca(ll y){
    ll l=0, r=(ll)1e9, resp=-1, mid;
    while(l<=r){
        mid = (l+r)/2;
        if(f(mid)<=y){
            resp=mid;
            l = mid+1;
        }
        else{
            r = mid-1;
        }
        //cout<<mid<<"\n";
    }
    return resp;
}

int main(){
    ll y;
    cin>>y;
    cout<<busca(y)<<"\n";
}