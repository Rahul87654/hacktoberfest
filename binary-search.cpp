//program of binary search
#include <iostream>
using namespace std;
int main()
{
    int n,i,item,mid,arr[50];
    cout<<"Enter number of elements in array:";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"Enter "<<i+1<<" element:";
        cin>>arr[i];
    }
    cout<<"Elements are :"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
    cout<<"Enter the element you want to search:";
    cin>>item;
    int lb=0,ub=n-1;
    mid=(lb+ub)/2;
    while(lb<ub && arr[mid]!=item)
    {
     if(item<arr[mid])
      {
        ub=mid-1;
      }
     else
      {
        lb=mid+1;
      }
     mid=(lb+ub)/2;
    }
    if(arr[mid]==item)
    {
        cout<<"Element found at Index "<<mid<<endl;
    }
    else
    {
        cout<<"ELEMENT NOT FOUND!!!";
    }
}
