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
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    vector<double> v;
    double aux=0;
    while(aux<=n-1)
    {
        v.push_back(aux);
        aux+=0.5;
    }
    cout<<fixed<<setprecision(1);
    if((v.size()+1)%2==0)
        cout<<v[(v.size()/2.0)+m]<<"\n";
    else
        cout<<v[(v.size()/2.0)+m+1]<<"\n";
    return 0;
}
