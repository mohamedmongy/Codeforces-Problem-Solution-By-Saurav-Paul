#include<bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define loop(i,a,b)           for(int i=a;i<b;++i)
#define count_1(n)            __builtin_popcountll(n)
#define pb                    push_back
#define F                     first
#define S                     second
#define mp                    make_pair
#define clr(x)                x.clear()
#define MOD                   1000000007
#define itoc(c)               ((char)(((int)'0')+c))
#define vi                    vector<int>
#define pll                   pair<ll,ll>
#define pii                   pair<int,int>
#define all(p)                p.begin(),p.end()
#define max(x,y)              (x>y)?x:y
#define min(x,y)              (x<y)?x:y
#define mid(s,e)              (s+(e-s)/2)
#define tcase()                ll t,n; scanf("%lld",&t);n=t; while(t--)
#define iscn(num)             scanf("%d",&num);
using namespace std;
void FAST_IO();
int main()
{
    FAST_IO();
    int a,b,c;
    cin>>a>>b>>c;
    int ans=INT_MAX;
    int temp=abs(a-b)+abs(a-c);
    ans=min(temp,ans);

    temp=abs(a-b)+abs(b-c);
    ans=min(temp,ans);

    temp=abs(c-b)+abs(a-c);
    ans=min(temp,ans);
    cout<<ans<<endl;
    return 0;
}
void FAST_IO()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //cout.setf(ios::fixed);
    //cout.precision(20);
#ifndef _offline
    freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
#endif
}
