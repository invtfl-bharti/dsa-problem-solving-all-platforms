//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

//Position this line where user code will be pasted.
class Solution {
  public:
    int SumofMiddleElements(vector<int> &arr1, vector<int> &arr2) {
        // code here
        int median = 0;
        vector<int>arr;
        arr.insert(arr.end(), arr1.begin(), arr1.end());
        arr.insert(arr.end(), arr2.begin(), arr2.end());
        sort(arr.begin(),arr.end());
        int n = arr.size();
        int mid = n / 2;
        if(n % 2 == 0) {
            median += (arr[mid - 1] + arr[mid]);
        }
        else{
            median += arr[mid];
        }
        return median;
    }
};

//{ Driver Code Starts.
//Back-end complete function template in C++

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr, brr;
        string input1;
        getline(cin, input1);
        stringstream ss1(input1);
        int number1;
        while (ss1 >> number1) {
            arr.push_back(number1);
        }
        string input2;
        getline(cin, input2);
        stringstream ss2(input2);
        int number2;
        while (ss2 >> number2) {
            brr.push_back(number2);
        }
        Solution ob;
        int res = ob.SumofMiddleElements(arr, brr);
        cout << res << endl;
    }
}
// } Driver Code Ends
