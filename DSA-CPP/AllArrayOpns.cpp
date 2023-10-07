#include <iostream>

using namespace std;
void insert_beg(int arr[],int &n);
void insert_end(int arr[],int &n);
void delete_beg(int arr[],int &n);
void delete_end(int arr[],int &n);
void insert_pos(int arr[],int &n);
void delete_pos(int arr[],int &n);
int main()
{
    const int maxSize = 100;
    int n,arr[maxSize];
    cout<<"Enter no.of array elements:";
    cin>>n;
    cout<<"Enter array elements:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    insert_beg(arr,n);
    insert_end(arr,n);
    delete_beg(arr,n);
    delete_end(arr,n);
    insert_pos(arr,n);
    delete_pos(arr,n);
    return 0;
}
void insert_beg(int arr[],int &n)
{
    int e;
    cout<<"Enter element to be inserted at beginning:";
    cin>>e;
    n=n+1;
    for(int i=n-1;i>0;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[0]=e;
    cout<<"after insertion at start:";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
}
void insert_end(int arr[],int &n)
{
    int e;
    cout<<"\nEnter element to be inserted at the end:";
    cin>>e;
    arr[n]=e;
    n=n+1;
    cout<<"\nAfter insertion at end:";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
}
void delete_beg(int arr[],int &n)
{
    for (int i = 0; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    n = n - 1; // Decrement the size of the array after deletion
    cout<<"\nAfter deletion at start:";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
}
void delete_end(int arr[],int &n)
{
    n=n-1;
    cout<<"\nAfter deletion at end:";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
}   
void insert_pos(int arr[],int &n)
{
    int e,pos;
    cout<<"Enter the element to be inserted:";
    cin>>e;
    cout<<"Enter the position where the element should be placed:";
    cin>>pos;
    if (pos < 0 || pos > n)
    {
        cout << "Invalid position for insertion." << endl;
        return;
    }
    n = n + 1;
    // Shift elements to the right to make space for the new element
    for (int i = n - 1; i >= pos; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = e;
    cout<<"After placing element "<<e<<" at position "<<pos<<" the array is:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
}
void delete_pos(int arr[],int &n)
{
    int pos;
    cout<<"\nEnter the position from where the element should be deleted:";
    cin>>pos;
    if (pos < 0 || pos > n)
    {
        cout << "Invalid position for deletion." << endl;
        return;
    }
     // Shift elements to the left to remove the element at the specified position
    for (int i = pos - 1; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    n = n - 1;
    cout<<"After deleting element at position "<<pos<<" the array is:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
}