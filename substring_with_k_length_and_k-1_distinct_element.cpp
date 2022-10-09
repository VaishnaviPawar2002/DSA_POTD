//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int countOfSubstrings(string S, int K) {
        // code here
        int res=0;
        int j=0;
        unordered_map<char,int>mp;
        for(int i=0;i<S.size();i++)
        {
            mp[S[i]]++;
            if(i+1>=K)
            {
                if(mp.size()==K-1) res++;
                mp[S[j]]--;
                if(mp[S[j]]==0)
                {
                    mp.erase(S[j]);
                }
                j++;
            }
        }
        return res;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        int K;
        cin>>S;
        cin>>K;

        Solution ob;
        cout << ob.countOfSubstrings(S,K) << endl;
    }
    return 0;
}
// } Driver Code Ends
