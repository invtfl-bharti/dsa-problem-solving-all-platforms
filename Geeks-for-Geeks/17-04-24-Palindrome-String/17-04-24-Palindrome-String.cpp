//{ Driver Code Starts
 
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	
	int isPalindrome(string S)
	{
	    // Your code goes here
	   // Create 2 variables i and j
	    int i=0;
	    int j=S.length()-1;
	   // Loop through the string if it is a palindrome then return 1, if no then return 0
	    while(i<=j) {
        // if the elements are equal then it is a palindrome
	        if(S[i]==S[j]) {
	            i++;
	            j--;
	        }
	        else{
	            return 0;
	        }
	    }
	    return 1;
	    
	}

};

//{ Driver Code Starts.

int main() 
{
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   	    Solution ob;

   		cout << ob.isPalindrome(s) << "\n";
   	}

    return 0;
}
// } Driver Code Ends