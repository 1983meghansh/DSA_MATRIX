#include<bits/stdc++.h>
using namespace std;
vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        // code here 
        int t,b,l,rt;
    t=0;
    b=r-1;
    l=0;
    rt=c-1;
    int dir=0;
    vector<int>ans;
    while(t<=b && l<=rt)
    {
        if(dir==0)
        {
            for(int i=l;i<=rt;i++)
                ans.push_back(matrix[t][i]);
                t++;
        }
       else if(dir==1)
        {
            for(int i=t;i<=b;i++)
            ans.push_back(matrix[i][rt]);
            rt--;
        }
        else if(dir==2)
        {
            for(int i=rt;i>=l;i--)
            ans.push_back(matrix[b][i]);
            b--;
        }
        else if(dir==3)
        {
            for(int i=b;i>=t;i--)
            ans.push_back(matrix[i][l]);
            l++;
        }
        dir=(dir+1)%4;
    }
    return ans;
    }