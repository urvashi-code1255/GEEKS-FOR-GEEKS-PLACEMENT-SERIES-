void Merge(int a[] , int l , int m , int r)
{
    int i , j, k , n1 = m - l + 1  , n2 = r - m ;
    
    int L[n1] , R[n2] ;
    
    for(int i = 0 ; i< n1 ; i++ )
        L[i] = a[l + i] ;
        
    for(int j = 0 ; j < n2 ; j++ )
        R[j] = a[m + 1 + j] ;
    
    i = 0 , j = 0 , k = l ;
    while(i < n1 && j < n2)
    {
        if(L[i] <= R[j])
        {
            a[k] = L[i];
            i++;
        }
        else
        {
           a[k] = R[j];
           j++;
        }
        k++ ;
    }
    
    while(i < n1)
    {
        a[k] = L[i];
        i++;
        k++;
    }
    
    while(j < n2)
    {
        a[k] = R[j];
        j++;
        k++;
    }
}

void MergeSort(int a[] , int l , int r)
{
    if(l < r)
    {
     int m = l + (r-l)/2 ;
     
     MergeSort(a, l , m);
     MergeSort(a, m + 1 , r);
     
     Merge(a , l , m , r);
    }
}

void sort012(int a[], int n)
{
     MergeSort( a , 0 , n - 1) ;
}
