#include <bits/stdc++.h>
using namespace std;
const long long md = 1000000007;
int main() {
	int n;
	long long result=1;
	cin>>n;
	while(n--){
		result = (result*2)%md;
	}
	cout<<result<<endl;
}