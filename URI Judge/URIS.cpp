#include<bits/stdc++.h>
#define forin(i,n) for(int i=0;i<n;i++)
#define forisn(i,s,n) for(int i=s;i<int(n);i++)
#define foritv(i,n) for(vector<int>::iterator i=n.begin();i!=n.end();i++)
#define foritset(i,n) for(set<int>::iterator i=n.begin();i!=n.end();i++)

using namespace std;
const double pi=3.14159;
int may(int a,int b){
    return (a+b+abs(a-b))/2;}
double dist(double x1,double y1,double x2,double y2){
    return pow(pow((x2-x1),2)+pow((y2-y1),2),1/2.0);}
bool triangulo(double a,double b,double c)
{
    if((a < b+c) && (b<a+c) && (c<a+b))return true;
    return false;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string a1,a;
    int w,w1,x,y,z,x1,y1,z1;
    cin>>a;
    cin>>w;
    scanf("%d : %d : %d",&x,&y,&z);
    cin>>a1;
    cin>>w1;
    scanf("%d : %d : %d",&x1,&y1,&z1);
    //cout<<x<< " " <<y<<" "<<z;
    if(x1<x){
        w=w1-w-1;
        x1=x1+24-x;
    }
    else {x1-=x;
        w=w1-w;
    }
        if(y1<y){
            y1=y1+60-y;
            x1--;
        }else y1=y1-y;
        if(z1<z){
            z1=z1+60-z;
            y1--;
        }else z1=z1-z;
    cout<<w<<" dia(s)\n"<<x1<<" hora(s)\n"<<y1<<" minuto(s)\n"<<z1<< " segundo(s)\n";
    return 0;
}
