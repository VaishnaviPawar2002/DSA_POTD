//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
	
	bool isPrime(int num)
	{
	    for(int i=2;i<=sqrt(num);i++)
	    {
	        if(num % i==0)
	        {
	            return false;
	        }
	    }
	        return true;
	    
	}
		int NthTerm(int N){
		    // Code here
		    if(N==1)
		    {
		        return 1;
		    }
		    if(isPrime(N)==true)
		    {
		        return 0;
		    }
		     int i=N-1;
		     int j=N+1;
		     while(true){
		         if(isPrime(i)){
		             break;
		             
		         }
		      if(isPrime(j)){
		          break;
		          
		  }
		  i--;
		  j++;
		  }
            return min(N-i,j-N);
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int N;
		cin >> N;
		Solution obj;
		int ans = obj.NthTerm(N);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends
