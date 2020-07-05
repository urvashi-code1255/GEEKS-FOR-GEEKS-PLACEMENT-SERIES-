int MinElementIndex(vector<int> vec)
{
    int n = vec.size() ;
    long int start = 0 , end = n - 1 , mid ;
    
    while(start <= end)
    {
        if(vec[start] <= vec[end])  // if sorted 
            return start ;
            
        mid = start + (end - start)/2 ;
        long int prev = (mid + n - 1) % n ; // to avoid going out of bound.
	long int next = (mid + 1) % n ;
	    
        if(vec[mid] <= vec[prev] && vec[mid] <= vec[next])
            return mid ;
        else if (vec[mid] >= vec[start])
            start = mid + 1 ;
        else if (vec[mid] <= vec[end])
            end = mid - 1 ;
    }
}

int BinSearch(vector<int> vec, int start , int end , int K)
{
    while(start <= end)
    {
        long int mid = start + (end - start)/2 ;
        if(vec[mid] == K)
            return mid ;
        else if (vec[mid] > K)
            end = mid - 1 ;
        else
            start = mid + 1 ;
    }
    return -1;
}

int Search(vector<int> vec, int K) {
    int index = MinElementIndex(vec) ;
    long int ans1 = BinSearch(vec, 0 , index - 1 , K);
    long int ans2 = BinSearch(vec, index , vec.size() - 1 , K);
    return (ans1 > -1)? ans1 : ans2 ;
}


