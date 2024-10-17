#include<iostream>
using namespace std;
int main()
{
    int n=7;
    int array[n];
    cout<<"Enter array elements "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    cout<<endl<<"Reverse order is "<<endl;
    for(int i=n-1;i>=0;i--)
    {
        cout<<array[i]<<" ";
    }
    return 0;

}