//Selection Sort
//Time Complexity:O(n*n)

#include<iostream>
using namespace std;


void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

void selectionSort(int a[])
{
    for(int i=0;i<5;i++)
    {
        int min=i;
        for(int j=(i+1);j<5;j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            }
        }
    swap(&a[min],&a[i]);
    }    
}

void printArray(int a[])
{
    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<"\n";
    }
}

int main()
{
    int a[5];
    cout<<"Enter the elements in array:";
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }

    selectionSort(a);
    cout<<"After Sorting:\n";
    printArray(a);
}