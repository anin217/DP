#include <bits/stdc++.h>

using namespace std;

int arr[1000006];
int hsh[1000050];
vector <int> v;
int main()
{
    int i,j,k,m,n;
    cin>>n;
    cin>>m;
    int a,b;
    for(i=1;i<=m;i++)
    {
        cin>>a>>b;
        arr[a]+=1;
        arr[b+1]-=1;
    }

    for(i=2;i<=n;i++)
    {
        arr[i]=arr[i]+arr[i-1];
    }
//    for(i=1;i<=n;i++)
//    {
//        if(arr[i]>=0)
//        hsh[arr[i]]++;
//    }
    sort(arr+1,arr+n+1);
    for(i=1;i<=n;i++)
    {
        v.push_back(arr[i]);
    }
    int q,x;
    cin>>q;
    while(q--)
    {
        cin>>x;
        int k=lower_bound(v.begin(),v.end(),x)-v.begin();

         int res=n-k;
         if(res<0)
            res=0;

        cout<<res<<endl;
    }
    return 0;

}
