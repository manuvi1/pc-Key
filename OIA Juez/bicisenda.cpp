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
void pintar(int k,int z,char c,vector<char> &v)
{
    forisn(i,k-1,z)
    {
        if(v[i]=='.'){v[i]=c;continue;}
        if((v[i]=='P' && c=='A') || (v[i]=='N' && c=='Z') || (v[i]=='V' && c=='R'))v[i]='M';
        else if((v[i]=='R' && c=='Z') || (v[i]=='Z' && c=='R'))v[i]='P';
        else if((v[i]=='R' && c=='A') || (v[i]=='A' && c=='R'))v[i]='N';
        else if((v[i]=='A' && c=='Z') || (v[i]=='Z' && c=='A'))v[i]='V';

    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    //ifstream cin("bicisenda.in");
    //ofstream cout("bicisenda.out");
    int b,t;
    cin>>b>>t;
    vector<char> v(b,'.');
    int k,z;char c;
    while(t--)
    {
        cin>>k>>z>>c;
        pintar(k,z,c,v);
    }
    forin(i,b)cout<<v[i];
	return 0;
}

