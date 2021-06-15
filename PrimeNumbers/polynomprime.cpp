#include<bits/stdc++.h>
using namespace std;

typedef long long ll;


bool isPrime(ll n)
{
    bool m=true;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            m=false;
            break;
        }
    }
    return m;
}

int main()
{
    cout<<"Enter A,B and C respectively-->";
    ll a, b,c;
    cin>>a>>b>>c;
    ll i=0;
    while(isPrime(a*(i*i)+ (b*i)+c ))
    {
        i++;
    }
    cout<<"\nThe required number is--> "<<i;
}
