#include<iostream>
using namespace std;

void bubbleSort(int a[], int n);
void printArr(int b[], int s);

//To make this code adaptable, here adaptable means that iterating array till it is required and not iterating it if it is already sorted and if array is already sorted it will take o(n) time complexity we will use flag variable for this.

int main()
{
    int c[] = {23, 26, 1, 3, 8};
    int n = 5;
    bubbleSort(c, n);
    printArr(c, n);
    return 0;
}

void bubbleSort(int a[], int n)
{
        int i,j,flag =0;
        for(i=n-1; i>=0; i--)
        {
            flag =0;
            for(j=0; j<i; j++)
            {
                if(a[j] > a[j+1])
                {
                    flag = 1;
                    int t = a[j];
                    a[j]=a[j+1];
                    a[j+1]=t;
                }
            }
            if(flag==0)
            {
                break;
            }
        }
}

void printArr(int b[], int s)
{
    for(int i=0; i<s; i++)
    {
        cout<<b[i]<<" ";
    }
}
