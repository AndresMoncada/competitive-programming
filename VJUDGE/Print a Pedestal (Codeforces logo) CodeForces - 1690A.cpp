#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ar[3],n;
    double limit,en;
    cin>>n;
    while(n--){
    	cin>>en; 
    	limit=ceil(en/3);
    	ar[0]=limit+1;
    	if(ar[0]+ar[0]<=en){
    		ar[1]=ar[0]-1;
    	}else{
    		ar[1]=ar[0]-2;
    	}
    	ar[2]=en-(ar[1]+ar[0]);
    	cout<<ar[1]<<" "<<ar[0]<<" "<<ar[2]<<endl;
    }
    
    return 0;
    }