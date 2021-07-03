//Problem  CHEFST -(-CodeChef-)-


#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        ll n1,n2,m;
        cin>>n1>>n2>>m;
        for(int j=m;j>=0;j--)
        {
            if(n1<=0 || n2<=0)
            {
                break;
            }
            ll temp1= n1;
            ll temp2=n2;
            temp1=n1-j;                             
            temp2=n2-j;
            if(temp1< 0 || temp2<0)
            {
                continue;
            }
            else
            {
                n1=temp1;
                n2= temp2;
            }
        }
        cout<<(n1+n2)<<endl;
    }
    return 0;
}