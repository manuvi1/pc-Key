#include<bits/stdc++.h>
#define forin(i,n) for(int i=0;i<n;i++)
#define forisn(i,s,n) for(int i=s;i<int(n);i++)
#define foritv(i,n) for(vector<int>::iterator i=n.begin();i!=n.end();i++)
#define foritset(i,n) for(set<int>::iterator i=n.begin();i!=n.end();i++)
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef vector<pii> vii;
typedef set<int> si;
typedef map<string, int> msi;
ll fact(ll n)
{
    if(n==1)return 1;
    else
    return n * fact(n-1);
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n,a;
    cin>>n;
    while(n--)
    {
        cin>>a;
        ll f=fact(a);
        cout<<f%10<<"\n";
    }
    return 0;
}
