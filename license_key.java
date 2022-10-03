//{ Driver Code Starts
// Initial Template for Java

import java.io.*;
import java.util.*;

class GFG{
    public static void main(String args[])throws IOException
    {
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(in.readLine());
        while(t-- > 0){
            String s = in.readLine();
            int k = Integer.parseInt(in.readLine());
            
            Solution ob = new Solution();
            System.out.println(ob.ReFormatString(s, k));
        }
    }
}
// } Driver Code Ends


// User function Template for Java

class Solution{
    static String ReFormatString(String S, int K){
        // code here
        int cnt=0;
        StringBuilder sb=new StringBuilder();
        for(int i=S.length()-1;i>=0;i--)
        {
            char c=S.charAt(i);
            if(c=='-')
                continue;
            if(Character.isLowerCase(c))
            {
                sb.append(Character.toUpperCase(c));
            }
            else
            {
                sb.append(c);
            }
            cnt++;
            if(cnt==K)
            {
                sb.append('-');
                cnt=0;
            }
        }
        sb.reverse();
        if(sb.length()>0 && sb.charAt(0)=='-')
            sb.deleteCharAt(0);
        return sb.toString();
    }
}
