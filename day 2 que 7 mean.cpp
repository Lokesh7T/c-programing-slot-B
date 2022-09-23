#include <stdio.h>

int mean(int arr[], int n)  {
    int i, _mean, sum=0;
    for(i=0; i<n; i++){
        int sum = sum + arr[i];
        _mean = sum/n;
    }
    return _mean;
}

int median(int arr[], int n)    {
    int _median;

    if(n%2 == 0)    {
        int median = (arr[n/2] + arr[(n/2) + 1])/2;
    } else {
        _median = arr[((n+1)/2)-1];
    }
    return _median;
}

int mode(int arr[], int n) {
   int maxValue = 0, maxCount = 0, i, j;

   for (i = 0; i < n; ++i) {
      int count = 0;
      
      for (j = 0; j < n; ++j) {
         if (arr[j] == arr[i])
         ++count;
      }
      
      if (count > maxCount) {
         maxCount = count;
         maxValue = arr[i];
      }
   }

   return maxValue;
}

int main()  { 
    int arr[] = {16, 18, 27, 16, 23, 21, 19};
    int n = sizeof(arr)/sizeof(arr[0]);

    printf("Mean: %d \n", mean(arr, n));
    printf("Median: %d \n", median(arr, n));
    printf("Mode: %d", mode(arr, n));
    
}
