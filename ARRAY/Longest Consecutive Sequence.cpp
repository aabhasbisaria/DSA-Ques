#include <bits/stdc++.h> 
int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    // Write your code here.
    int count = 1 , maxCount = 1;
    if(n == 0)
    {
        return 0;
    }
    
    sort(arr.begin() , arr.end());
    
    int curr = arr[0];
    
    for(int i = 1 ; i < n ; i++)
    {
        if(arr[i] == curr + 1) //sequence exist 
        {
            count++;
        }
        else if(curr != arr[i]) //for new sequence to start reinitialise count to 1
        {
            count = 1;
        }
        curr = arr[i];  //if curr and arr[i] both equal then only update the curr
        maxCount = max(maxCount , count);
    }
    return maxCount;
}

