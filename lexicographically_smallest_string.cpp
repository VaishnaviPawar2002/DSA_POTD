//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
  int newk(int k,int n)
  {
      int t=log2(n);
      if(pow(2,t)==n)
        return k/2;
      else
        return k*2;
  }
    string lexicographicallySmallest(string S, int k) {
        // code here
        int n=S.length();
        stack<char> st;
        k=newk(k,n);
        string ans = "";
        if(k>=n)
        {
            ans="-1";
            return ans;
        }
        
        for(int i=0;i<n;i++){

            while(k>0 && !st.empty() && st.top()>S[i]){

                st.pop();k--;

            }

            st.push(S[i]);
            

        }

        while(k>0 && !st.empty()){

            st.pop();k--;

        }

        

        while(!st.empty()){

            ans += st.top();st.pop();

        }

        reverse(ans.begin(),ans.end());

        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        int k;
        cin >> S >> k;
        Solution ob;
        cout << ob.lexicographicallySmallest(S, k) << endl;
    }
    return 0;
}

// } Driver Code Ends
