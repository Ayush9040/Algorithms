#include<iostream>
using namespace std;

void selectionSort(int a[], int n);
void printArr(int b[], int s);

int main()
{
    int c[] = {23, 22, 54, 1, 4, 31};
    int f = 6;
    selectionSort(c, f);
    printArr(c, f);
    return 0;
}


void selectionSort(int a[], int n)
{
    int mini;

    for(int i=0; i<n-1; i++)
    {
        mini = i;
        for(int j=i+1; j<n; j++)
        {
            if(a[mini] > a[j])
            {
                mini = j;
            }
        }
        int temp = a[i];
        a[i] = a[mini];
        a[mini] = temp;
    }
}

void printArr(int b[], int s)
{
    for(int i=0; i<s; i++)
    {
        cout<<b[i]<<" ";
    }
}
