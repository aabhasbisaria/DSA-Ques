int majorityElement(vector<int> v) {
	// Write your code here
	int n = v.size();
	int cnt=0,ele;
	for(int i = 0 ; i < n ; i++)
	{
		if(cnt == 0)
		{
			cnt = 1;
			ele = v[i];
		}
		else if(v[i] == ele)
		{
			cnt ++;
		}
		else{
			cnt--;
		}
	}

	int cnt1 = 0;
	for(int i = 0 ; i < n; i++)
	{
		if(v[i] == ele){
			cnt1++;
		}
	}

	if(cnt1 > (n/2))
	{
		return ele;
	}
		
	return -1;
}
