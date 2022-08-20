#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,x;
    deque<int> dq;
    cin>>n;
        for(int i=1; i<=n; ++i)
        {
            cin>>x;
            dq.push_back(x);
        }
        int sum1=0, sum2 = 0;
        
        for(int i=1; i<=n; ++i)
        {
            int iz = dq.front();
            int de = dq.back();
            if(i%2==1)
            {
                if(iz>de)
                {
                    sum1 += iz;
                    dq.pop_front();
                }
                else
                {
                    sum1 += de;
                    dq.pop_back();
                }
            }
            else
            {
                if(iz>de)
                {
                    sum2 += iz;
                    dq.pop_front();
                }
                else
                {
                    sum2 += de;
                    dq.pop_back();
                }
            }
        }
        printf("%d %d\n",sum1,sum2);
    return 0;
}