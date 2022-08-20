#include<bits/stdc++.h>
using namespace std;

#define M 100000005
int main()
{
    long int i,j,d,m,n,a[100000],cs;
    cin>>cs;
    while(cs--)
    {
    	cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        
        int suma=0,sumb=0;
        int ca=0,cb=0,mov=0;
        i=0;
        j=n-1;
        while(i<=j)
        {
            if(mov%2==0){
            	int asuma=0;
            	while(i<=j && asuma<=sumb){
            		asuma+=a[i];
            		i++;
            	}
            	ca+=asuma;
            	suma=asuma;
            	
            }else{
            	int asumb=0;
            	while(i<=j && asumb<=suma){
            		asumb+=a[j];
            		j--;
            	}
            	cb+=asumb;
            	sumb=asumb;
            }
            mov++;
        }
        cout<<mov<<" "<<ca<<" "<<cb<<endl;

    }
    return 0;
    }