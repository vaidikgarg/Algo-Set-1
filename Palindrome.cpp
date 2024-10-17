#include<iostream>
using namespace std;
int main()
{
    int n=5;
    int array[n];
    cout<<"Enter array elements "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    int flag=0;
    for(int i=0;i<=(n/2)+1;i++)
    {   
        if(array[i] == array[n-i-1])
        flag = 1;
        else 
        flag = 0;
    }
    if(flag == 1)
    {
        cout<<"Array is palindrome";
    }
    else
    {
        cout<<"Array is not palindrome";
    }
    return 0;

}
