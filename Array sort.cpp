# include <iostream>
using namespace std;

int main()
{
  int i, j, temp, size;
  int arr[10];
  cout<<"Enter the size of array";
  cin>>size;
  
  cout<<"Enter array elements";
  
  for(i = 0; i < len; i++)
  {
    cin>>arr[i];
  }
  
  for(i = 0; i < size-1; i++)
  {
    for(j = i+1; j < size; j++)
    {
      if(arr[j] < a[i])
      {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
  
  cout<<"Sorted array";
  for(i = 0; i < size/2; i++)
  {
    cout<<arr[i]<<endl;
  }
  
  for(i = size-1; i > size/2; size--)
  {
    cout<<arr[i]<<endl;
  }
  
  return 0;
}
