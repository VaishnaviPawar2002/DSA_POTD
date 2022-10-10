//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
  void dfs(vector<vector<int>>& matrix,int i,int j,int row,int col)
  {
      if(i<0 || i>(row-1) || j<0 ||j>(col-1) ||matrix[i][j]!=1)
      
          return;
      
     if(matrix[i][j]=1)
     {
         
       matrix[i][j]=0;
      dfs(matrix,i+1,j,row,col);
      dfs(matrix,i,j+1,row,col);
      dfs(matrix,i-1,j,row,col);
      dfs(matrix,i,j-1,row,col);
     }
  }
  int countIslands(vector<vector<int>> matrix)
  {
      int row=matrix.size();
      int col=matrix[0].size();
      int count=0;
      
       for(int i=0;i<row;i++)
             {
                 for(int j=0;j<col;j++)
                 {
                     if(matrix[i][j]==1)
                     {
                         count++;
                         dfs(matrix,i,j,row,col);
                         
                     }
                 }
             }
            return count;
  }
    vector<int> numOfIslands(int n, int m, vector<vector<int>> &q) {
        // code here
        vector<vector<int>> island(n,vector<int>(m,0));
        vector<int>ans;
        for(int k=0;k<q.size();k++)
        {
             //vector<vector<int>> vis(n,vector<int>(m,0));
             int count=0;
             int x=q[k][0];
             int y=q[k][1];
             if(island[x][y]!=1)
             {
                 island[x][y]=1;
                 ans.push_back(countIslands(island));
             }
             else
             {
                 int xx=ans[ans.size()-1];
                 ans.push_back(xx);
             }
             
        }
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,m,k; cin>>n>>m>>k;
        vector<vector<int>> a;
        
        for(int i=0; i<k; i++){
            vector<int> temp;
            for(int j=0; j<2; j++){
                int x; cin>>x;
                temp.push_back(x);
            }
            a.push_back(temp);
        }
    
        Solution obj;
        vector<int> res = obj.numOfIslands(n,m,a);
        
        for(auto x : res)cout<<x<<" ";
        cout<<"\n";
    }
}

// } Driver Code Ends
