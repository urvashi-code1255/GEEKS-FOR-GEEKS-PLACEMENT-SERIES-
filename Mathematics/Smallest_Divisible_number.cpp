long long getSmallestDivNum(long long n)
{
    long long count = 1 ;
    for(long long i = 1 ; i <= n ; i++)
    {
       count = (count*i)/(__gcd(count , i)) ;
    }
    return count ;
    
}
