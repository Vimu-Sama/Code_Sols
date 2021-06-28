//Problem Code--> TRISQ  -(-codechef-)-

#include<bits/stdc++.h>
using namespace std;

int count_sq(int n)
{
    int count=0;
    if(n<=3)
        return 0;
    count=count_sq(n-2)+ ((n/2)-1);
    return count;
}

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int m;
        cin>>m;
        int temp= count_sq(m);
        cout<<temp<<endl;
    }
}