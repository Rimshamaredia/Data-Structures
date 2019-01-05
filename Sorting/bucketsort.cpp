// C++ program to sort an array using bucket sort
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// Function to sort arr[] of size n using bucket sort
void bucketSort(float arr[], int n)
{
   
    int i,j;

    
    for ( i=0; i<n; i++)
    {
       
       for(j=0;j<n-1;j++){
           if(arr[j]>arr[j+1]){
               swap(&arr[j],&arr[j+1]);
           }
       }
}
}


int main()
{
    float arr[] = {0.897, 0.565, 0.656, 0.1234, 0.665, 0.3434};
    int n = sizeof(arr)/sizeof(arr[0]);
    bucketSort(arr, n);

    cout << "Sorted array is \n";
    for (int i=0; i<n; i++)
       cout << arr[i] << " ";
    return 0;
}

