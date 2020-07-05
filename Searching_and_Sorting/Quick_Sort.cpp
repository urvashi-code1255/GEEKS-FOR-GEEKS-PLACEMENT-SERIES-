int partition (int arr[], int low, int high)
{
   int pivot = arr[high] ;
   int pIndex = low ;
   
   for(int i = low ; i < high ; i++)
   {
       if(arr[i] < pivot)
        {    
            swap(arr[i] ,arr[pIndex] );
            pIndex++ ;
        }
   }
   swap(arr[pIndex] , arr[high]);
   return pIndex;
}
