#include <bits/stdc++.h>

using namespace std;
#define ll long long int
ll rad[1000];
ll ht[1000];

ll dp[1005];
ll solve(int i,int n)
{

    if(dp[i]!=-1) return dp[i];
    else
    {
        ll ret=0;
        for(int j=1;j<=n;j++)
        {
            if(i!=j)
            {if((rad[i]>rad[j])&&(ht[i]>ht[j]))
              ret=max(ret,solve(j,n)+ht[j]);
            }
        }
        dp[i]=ret;
        return ret;
    }


}
int main()
{
    int n,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        memset(dp,-1,sizeof(dp));
        for(int i=1;i<=n;i++)
        {
            cin>>rad[i]>>ht[i];
        }
        ll ret=0;
         for(int i=1;i<=n;i++)
        {
          ret=max(ret,solve(i,n)+ht[i]);
        }

        cout<<ret<<endl;
     }
}
