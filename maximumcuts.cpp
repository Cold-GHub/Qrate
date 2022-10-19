#include<bits/stdc++.h>
using namespace std;

int cuttingRod(int arr[], int N) 
{ 
    int dp[N + 1]; 
    dp[0] = 0; 
    for (int i = 1; i <= N; i++) { 
        dp[i] = INT_MIN; 
        for (int j = 0; j < 3; j++) { 
            if ((i - arr[j]) >= 0 
                && dp[i - arr[j]] != INT_MIN) { 
                dp[i] = max(dp[i - arr[j]] + 1, 
                            dp[i]); 
            } 
        } 
    } 
    return dp[N]; 
} 
int main() 
{ 
    int n = 15; 
    int arr[] = { 10, 11, 4}; 
    cout << cuttingRod(arr, n); 
    return 0; 
} 