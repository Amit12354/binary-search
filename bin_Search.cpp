#include<iostream>
using namespace std;
int main()
{
    int n,Search,last,first,middle,arr[10];
    cout<<"Enter the size of array"<<"\n";
    cin>>n;
    cout<<"Enter the sorted array element"<<"\n";
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    first = 0;
    last = n -1;
    cout<<"Search the element"<<"\n";
    cin>>Search;
    while(first <= last)
    {
        middle = (first + last)/2;
        if(arr[middle] == Search)
        {
            cout<<Search<<"Found at location "<<middle;
            break;
        }
        else if(arr[middle] < Search)
        first = middle + 1;
        else
        last  = middle -1;
    }
    if(first > last)
    {
        cout<<"Element is not found";
    }
return 0;
}
