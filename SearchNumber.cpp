#include<iostream>
using namespace std;
int main()
{
    int n,k;
    cout<<"Enter size of array : ";
    cin>>n;
    int array[n];
    cout<<"Enter array elements "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    cout<<"Enter element to find : ";
    cin>>k;
    int flag=0;
    int index = 0;
    for(int i=0;i<n;i++)
    {
        if(array[i]==k)
        {
            flag = 1;
            index = i;
            break;
        }
    }
    if(flag == 1)
    {
      cout<<"Element is present at index : "<<index;
    }
    else 
    {
        cout<<"-1";
    }
   return 0;

}
