bool searchMatrix(vector<vector<int>>& mat, int target) {
    
    for(int i = 0 ; i < mat.size() ; i ++)
    {
        int lo = 0;
        int hi = mat[0].size()-1;

        while(lo <= hi)
        {
            int mid = (lo + (hi - lo)/2);

            if(mat[i][mid] == target)
            {
                return true;
            }
            if(mat[i][mid] < target)
            {
                lo = mid + 1;
            }
            else{
                hi = mid - 1;
            }
            
        }
    }
    return false;
    
}
