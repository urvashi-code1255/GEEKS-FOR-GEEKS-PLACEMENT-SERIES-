void merge(int arr[], int l, int m, int r)
{
    int i , j , k , n1 = m - l + 1 , n2 = r - m ;
    
    int L[n1] , R[n2] ;
    
    for(int i = 0 ; i < n1 ; i++ )
        L[i] = arr[l + i];
    
    for(int j = 0 ; j < n2 ; j++)
        R[j] = arr[m + 1 + j] ;
    
    i = 0 , j = 0 , k = l ;
    while(i < n1 && j < n2)
    {
        if(L[i] <= R[j])
        {
            arr[k] = L[i] ;
            i++ ;
        }
        else
        {
            arr[k] = R[j] ;
            j++ ;
        }
        k++ ;
    }
    
    while(i < n1)
    {
        arr[k] = L[i] ;
        i++ ;
        k++ ;
    }
    
    while(j < n2)
    {
        arr[k] = R[j] ;
        j++ ;
        k++ ;
    }
    
}
