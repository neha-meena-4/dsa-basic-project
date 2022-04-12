#include<iostream>
using namespace std;

int sort(int arr[],int n)
{
   for(int i=1;i<n;i++)
   {
      int key=arr[i];
      int j=i-1;
       while(j>=0 && arr[j]>key)
           {
               arr[j+1]=arr[j];
               j--;
           }
        arr[j+1]=key;  
        for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";  
        cout<<endl;   
   }
   
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    
    cout<<"NEHA MEENA 20124068 \n ";

    sort(arr,n);
    cout<<"After sorting:";
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}