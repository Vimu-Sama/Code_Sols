//Problem MAXDIFF -(-Codechef-)-

#include<bits/stdc++.h>

using namespace std;

#define ll long long

ll max(ll m, ll n)
{
    if(m>n)
        return m;
    else
        return n;
}

int main()
{
    ll t;
    cin>>t;;
    for(ll i=0;i<t;i++)
    {
        ll n,k;
        vector<ll> ar;
        cin>>n>>k;
        for(ll j=0;j<n;j++)
        {
            ll temp;
            cin>>temp;
            ar.push_back(temp);
        }
        sort(ar.begin(), ar.end());
        ll sum1=0, sum2=0, sum3=0, sum4=0;
        for(ll j=0,o=n-1;j<n,o>=0;j++,o--)
        {
            if(j<k)
            {
                sum1+=ar[j];
                sum3+=ar[o];
            }
            else
            {
                sum2+=ar[j];
                sum4+=ar[o];
            }
        }
        cout<<max(abs(sum3-sum4), abs(sum2-sum1))<<endl;
    }
    return 0;
}
