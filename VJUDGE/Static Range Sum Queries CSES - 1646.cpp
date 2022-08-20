#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n, q,na,e,a,b;
	cin>>n>>q;
	long long vi[n];

	for(int i=0; i<n;i++){
		cin>>e;
		vi[i]=e;
	}
	long long par[n];
	partial_sum(vi, vi+n,par);
	while(q--){
		cin>>a>>b;a--;b--;
		
		if(a==0)
			cout<<par[b]<<endl;
		else
			cout<<par[b]-par[a-1]<<endl;
	}
	
}