#include <bits/stdc++.h>
using namespace std;

int first(int arr[], int x, int n)
{
  int low = 0, high = n - 1, res = -1;
  while (low <= high)
  {
    
  
    int mid = (low + high) / 2;
    
    if (arr[mid] > x)
      high = mid - 1;
    else if (arr[mid] < x)
      low = mid + 1;

   
    else
    {
      res = mid;
      high = mid - 1;
    }
  }
  return res;
}

int last(int arr[], int x, int n)
{
  int low = 0, high = n - 1, res = -1;
  while (low <= high)
  {
    int mid = (low + high) / 2;
    
    if (arr[mid] > x)
      high = mid - 1;
    else if (arr[mid] < x)
      low = mid + 1;

  
    else
    {
      res = mid;
      low = mid + 1;
    }
  }
  return res;
}

int main()
{
  int n ;
    cout<<"Enter the size of the array "<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the array elements "<<endl;
    for(int i=0;i<n;i++)
    cin>>a[i];

  int x;
  cout<<"Enter the number to find the occurance "<<endl;
  cin>>x;
  
  cout <<"First Occurrence = " << first(a, x, n);
  cout <<"\nLast Occurrence = "<< last(a, x, n)<<endl;
  
  return 0;
}
