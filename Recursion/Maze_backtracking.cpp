#include<bits/stdc++.h>
using namespace std;
//finding if maze is solvable
bool solveMaze(char ch[][3], int temp[][3],int x,int y)
{
    static stack<string> s;
    static bool pika=false;
    if(x>=3 || y>=3 || x<0 || y<0)
        return false;
    if(ch[x][y]=='*' || temp[x][y]== 1)
    {
        return false;
    }
    if(ch[x][y]==' ')
    {
        if(temp[x][y]==1)
        {
            return false;
        }
        if(temp[x][y]==0)
        {
            temp[x][y]=1;
        }
    }
    if(ch[x][y]=='G')
    {
        return true;
    }
    if(solveMaze(ch, temp, x, y-1))
    {
        s.push("Move Up");
        //cout<<"Move Up"<<endl;
        return true;
    }
    if(solveMaze(ch, temp, x, y+1))
    {
        s.push("Move Down");
        //cout<<"Move Down"<<endl;
        return true;
    }
    if(solveMaze(ch, temp, x-1, y))
    {
        s.push("Move Left");
        //cout<<"Move Left"<<endl;
        return true;
    }
    if(solveMaze(ch, temp, x+1, y))
    {
        s.push("Move Right");
        //cout<<"Move Right"<<endl;
        return true;
    }
    return false;
}

bool isPossible(char ch[][3])
{
    int n=3;
    int stX=-1, stY=-1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(ch[i][j]=='S')
            {
                stX=i;
                stY=j;
            }
        }
    }
    if(stX==-1)
    {
        return false;
    }
    static int temp[3][3]= { 0 };
    return(solveMaze(ch, temp, stX, stY));
}


int main()
{
    char p[3][3]= {{'S', '*' , '*'},
            {' '  , ' '  ,  ' ' }, 
            {'*' , '*' , 'G'}};
    
    bool clerk= isPossible(p); 
    if(clerk==false)
    {
        cout<<"The maze cannot be solved...";
        return 0;
    }
    cout<<"It is solvable";
    return 0;
}

