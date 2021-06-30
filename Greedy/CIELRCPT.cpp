//Problem -> CIELRCPT -(-Codechef-)-

#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    ll n;
    cin>>n;
    ll p[]= {1,2,4,8,16,32,64,128,256,512,1024,2048 };
    for(int i=0;i<n;i++)
    {
        ll temp;
        cin>>temp;
        ll count=0;
        while(temp!=0)
        {
            ll t;
            for(int j=0;j<12;j++)
            {
                if(p[j]==temp)
                {
                    t=p[j];
                    break;
                }
                if(p[j]>temp)
                {
                    t=p[j-1];
                    break;
                }
                if(p[j]==2048)
                {
                    t=2048;
                    break;
                }
            }
            count+= (temp/t);
            temp= temp%t;
            //cout<<t<<"\t"<<temp<<endl;
        }
        cout<<count<<endl;
    }
    return 0;
}