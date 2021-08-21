#include<bits/stdc++.h>
using namespace std;

int row_with_max_ones(vector<vector<bool> >mat,int n,int m){
    
    int j = m-1;
     int row = -1;
    for(int i=0;i<n;i++){
        while(j>=0 && mat[i][j]==1){
            j--;
            row = i;
        }
        
    }
     return row; 
}
int main(){
    int t;
    cin>>t;
     while(t--){
        int n,m;
        cin>>n>>m;
        vector<vector<bool> >mat(n,vector<bool>(m));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int d;  cin>>d;
                mat[i][j] = d;
            }
        }
        
        cout<<row_with_max_ones(mat,n,m)<<endl;
        
    }
    
    return 0;
}