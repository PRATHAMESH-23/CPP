//Bubble Sort
//Time Complexity:      best case:O(n)    worst case:O(n*n)


#include<iostream>
using namespace std;

void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

void bubbleSort(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<(n-1-i);j++)
        {
            if(a[j]>a[j+1])
            {
                swap(&a[j],&a[j+1]);
            }
        }
    }
}

void display(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<"\n";
    }
}

int main()
{
    int a[10],n;
    cout<<"Enter the size of array:";
    cin>>n;

    cout<<"Enter the elements in array:";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    bubbleSort(a,n);

    cout<<"Display array after sorting:\n";
    display(a,n);
}