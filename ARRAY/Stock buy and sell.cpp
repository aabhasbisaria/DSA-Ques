int bestTimeToBuyAndSellStock(vector<int>&arr) {
    // Write your code here.
    int n=arr.size();

        if (n<=1) return 0;

        int buy=arr[0];

        int sell=0;

        for(int i=0;i<n;i++)

        {

            buy=min(buy,arr[i]);

            sell=max(sell,arr[i]-buy);

        }

        

        return sell;
}

