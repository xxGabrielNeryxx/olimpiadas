#include <bits/stdc++.h>
using namespace std;
int v[(int)1e6];
int n;

bool busca(int x){
	int i=0,j=n-1,mid;
	while(i<=j){
		mid=(i+j)/2;
		if(v[mid]<x) i=mid+1;
		else if(v[mid]>x) j=mid-1;
		else return true;
	}
	return false;
}


int main(){
	cin>>n;
	
	for(int i =0;i<n; i++){
		cin>>v[i];
	}
	sort(v,v+n);
	int x;
	cin>>x;
	cout << busca(x);
}