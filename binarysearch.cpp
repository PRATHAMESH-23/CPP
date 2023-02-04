// Binary search                            Linear search
// Time Complexity:O(logn)                  Time Complexity:O(n)

#include<iostream>
using namespace std;

int binarysearch(int a[],int n,int key)
{
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;

    while(s<=e)
    {
        if(a[mid]==key)
        {
            return mid;
        }
        if(key>a[mid])
        {
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return 0;
}

int main()
{
    int a[20],n,key;
    cout<<"Enter the size of array:";
    cin>>n;
    cout<<"Enter the elements in array:";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the key u want to search:";
    cin>>key;

   int r=binarysearch(a,n,key);
   if(r)
   {
    cout<<"FOUND at index"<<r;
   }
   else{
    cout<<"NOT FOUND";
   }

}