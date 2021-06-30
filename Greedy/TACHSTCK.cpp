// Problem code--> TACHSTCK -(-Codechef-)-

#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    ll n,d;
    cin>>n>>d;
    vector <ll> v1, v2;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        v1.push_back(temp);
        v2.push_back(0);
    }
    sort(v1.begin(), v1.end());
    ll count=0;
    for(int i=0;i<n;i++)
    {
        if(v1[i+1]-v1[i]<=2)
        {
            count++;
            i+=2;
        }
    }
    cout<<count;
    return 0; 
}
