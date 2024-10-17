#include<iostream>
using namespace std;
int main()
{
    int n;
    int count = 0;
    cout<<"Enter size of array : ";
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    for(int i=0;i<n;i++)
    {
        if(array[i]<0)
        count++;
    }
    cout<<"Total no. of negative elements = "<<count;
    return 0;
}

