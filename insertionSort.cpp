#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int v[n];
    for(int i =0;i<n;i++){
        cin>>v[i];
    }
    int i,j,aux;
    for(i=0;i<n;i++){
        aux=v[i];
        for(j=i; j>=0 && v[j-1]>aux;j--) v[j]=v[j-1];
        v[j]=aux;
    }
    
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}