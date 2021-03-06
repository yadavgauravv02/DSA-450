int FindMaxSum(int ar[], int n)
    {
        int dp[n+1][2];
        memset(dp,0,sizeof(dp)) ;
        for(int i=1 ; i<=n ; i++) {
            dp[i][0]=max(dp[i-1][1],dp[i-1][0]);
            dp[i][1]=dp[i-1][0]+ar[i-1];
        }
        return max(dp[n][0],dp[n][1]) ;
    }