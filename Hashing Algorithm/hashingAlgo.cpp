#include<iostream>
using namespace std;


//Count frequency using hash map technique



int main()
{
    int a[] = {34, 65, 1, 90, 45, 34, 55, 1, 75, 34};
    int n = 10;
    int hashMap[100] = {0};


    for(int i=0; i<n; i++)
    {
        hashMap[a[i]]++;
    }

    for(int k=0; k<100; k++)
    {
        if(hashMap[k]>0)
        {
            cout<<k<<" : "<<hashMap[k]<<endl;
        }
    }

    return 0;
}
