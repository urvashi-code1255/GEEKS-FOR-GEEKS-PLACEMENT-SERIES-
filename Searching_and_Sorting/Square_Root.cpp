#include<bits/stdc++.h>
using namespace std;

long long int floor( long long int a )
{
    int start = 0 , end = int(a) , mid , res = 0 ;
    while(start <= end)
    {
        mid = start + (end - start)/2 ;
        if(mid == a)
            return mid ;
        else if(mid < a)
        {
            res = mid ;
            start = mid + 1 ;
        }
        else
            end = mid - 1 ;
    }
    return res ;
}

long long int PerfectSquare(long long int x)
{
    int sq = sqrt(x);
    return (sq - floor(x) == 0);
}

long long int floorSqrt(long long int x) 
{
    if(PerfectSquare)
        return sqrt(x);
    else
        return floor(sqrt(x));
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		cout << floorSqrt(n) << endl;
	}
    return 0;   
}
