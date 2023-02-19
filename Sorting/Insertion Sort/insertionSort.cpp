#include<iostream>
using namespace std;

void insertionSort(int a[], int n);
void printArr(int b[], int s);

int main()
{
    int c[] = {23, 43, 12, 51, 10, 60, 10};
    int e= 7;
    insertionSort(c, e);
    printArr(c, e);
    return 0;
}

void insertionSort(int a[], int n)
{
    for(int i=1; i<n; i++)
    {
        int pivot = a[i];
        int j = i -1;
        while(j>=0 && a[j]>pivot)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = pivot;
    }
}

void printArr(int b[], int s)
{
    for(int i=0; i<s; i++)
    {
        cout<<b[i]<<" ";
    }
}

