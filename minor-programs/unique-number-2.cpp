#include<bits/stdc++.h>

using namespace std;

#define int long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back

int32_t main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r" , stdin);
    freopen("output.txt", "w" , stdout);
    #endif

    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    // int t;cin>>t;while(t--)
    {
        int i, j, k, n, m, ans = 0, cnt = 0, sum = 0;
        cin>>n;
        int a[n];
        int res=0;
        for (int i = 0; i < n; ++i)
        {
            cin>>a[i];
            res=res^a[i];
        }
        j=res;
        while(m!=1){
            m=res&1;
            res=res>>1;
            cnt++;
        }
        int mask=1<<0;
        for (int i = 0; i < n; ++i)
        {
            if((a[i]&mask)>0){
                ans=ans^a[i];
            }
        }
        k=ans^j;
        // cout<<ans<<k;
        cout<<min(ans,k)<<" "<<max(ans,k);
    }
}