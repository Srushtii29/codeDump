#include <iostream>
using namespace std;

int main()
{
    int n,beg,end;
    cout<<"How many elements to enter in array:"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter alements of array:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"You entered the following array:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"Enter the element to be added at the beginning of array:";
    cin>>beg;
    n=n+1;
    for(int i=n;i>0;i--)
    {
        a[i-1]=a[i-2];
    }
    a[0]=beg;
    cout<<"After insertion of element at the beginnig, array is:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"Enter the element to be added at the end of array:";
    cin>>end;
    a[n]=end;
    n=n+1;
    cout<<"After insertion of element at the end, array is:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
