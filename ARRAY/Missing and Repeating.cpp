vector<int> findMissingRepeatingNumbers(vector < int > a) {
    // Write your code here
    vector<int> ans;
    int n = a.size();
    int xr = 0;
    for(int i = 0 ; i < n ; i++)
    {
        xr = xr ^ a[i];
        xr = xr ^ (i+1);
    }

    int bitNo = 0;
    
    while(1)
    {
        if((xr & (1<<bitNo)) != 0)
        {
            break;
        }
        bitNo++;
    }
    
    int zeroth = 0;
    int oneth = 0;

    for(int i = 0 ; i < n ; i++)
    {
        if((a[i] & (1<<bitNo))!=0)
        {
            oneth ^= a[i];
        }
        else
        {
            zeroth ^= a[i];
        }
    }
    for(int i = 1 ; i <= n ; i++)
    {
        if((i & (1<<bitNo))!=0)
        {
            oneth ^= i;
        }
        else
        {
            zeroth ^= i;
        }
    }

    int cnt = 0;
    for(int i = 0 ; i < n ; i++)
    {
        if(oneth == a[i])
        {
            cnt++;
        }
    }
    
    if(cnt == 2)
    {
        return {oneth,zeroth};
    }else{
        return {zeroth,oneth};
    }
}
