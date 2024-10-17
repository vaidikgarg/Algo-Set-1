#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"Enter size of first array : ";
    cin>>n;
    cout<<endl<<"Enter size of second array : ";
    cin>>m;
    int array1[n];
    int array2[m];
    cout<<endl<<"Enter first array : "<<endl;
    for(int i=0;i<n;i++)
    {
      cin>>array1[i];
    }
    cout<<endl<<"Enter second array : "<<endl;
    for(int i=0;i<m;i++)
    {
      cin>>array2[i];
    }
    int array[n+m];
    for(int i=0;i<n;i++)
    {
        array[i]=array1[i];
    }
    for(int i=0;i<m;i++)
    {
        array[i+n]=array2[i];
    }
    for(int i=0;i<n+m;i++)
    {
       for(int j=0;j<n+m;j++)
       {
        if(array[j]>array[j+1])
          swap(array[j],array[j+1]);
       }
    }

    for(int i=0;i<n+m;i++)
    {
        cout<<array[i]<<"  ";
    }

 return 0;       
}