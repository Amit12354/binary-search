#include<iostream>
using namespace std;
void insertion(int arr[], int length)
{
    int index = 2;
    for(int i = length; i >= index + 1; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[index] = 999;
    for(int i = 0; i <= length; i++)
    {
        cout<<"\n"<<arr[i];
    }
}
int main()
{
    int arr[] = {10,20,30,40,50};
    int length = sizeof(arr)/sizeof(arr[0]);
    insertion(arr,length);
    return 0;
}
// Generalize code 
#include<iostream>
using namespace std;
int main()
{
    int arr[10],n,x,index;
    cout<<"Enter the sizeof array"<<"\n";
    cin>>n;
    cout<<"Enter the element of array"<<"\n";
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for(int i = n; i > 2; i--)
    {
        arr[i] = arr[i-1];
    }
    cout<<"Enter the index element"<<"\n";
    cin>>x;
    cout<<"Enter the index num"<<"\n";
    cin>>index;
    arr[index] = x;
    for(int i = 0; i <= n; i++)
    {
        cout<<"\n"<<arr[i];
    }
    return 0;
}