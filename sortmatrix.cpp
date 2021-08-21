#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<vector<int>> sortedMatrix(int N, vector<vector<int>> Mat) {
        // code here
        vector<int>temp;
        for(auto i:Mat)
        temp.insert(temp.end(),i.begin(),i.end());
        sort(temp.begin(),temp.end());
        int k=0;
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<N;j++)
            {
                Mat[i][j]=temp[k++];
            }
        }
        return Mat;
    }
};