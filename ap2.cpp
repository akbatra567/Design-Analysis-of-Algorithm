/*
    Given a sorted array, find a given element in O (Log n) time.
*/

#include <iostream>
#include <stdio.h>

using namespace std;
int search(int array[], int element, int beg, int last)
{
    if( last >= beg )
    {
        int mid = beg + (last - 1) /2;
        if(array[mid] == element)
            return mid;
        if(array[mid] < element)
            return search(array, element, mid+1, last);
        else
            return search(array, element, beg, mid-1);

    }

    return -1;

}
int main()
{
    int size;
    cout<<"Enter Size of Sorted Array: ";
    cin>>size;
    int array[size];

    cout<<"Enter Array: ";
    for(int i = 0; i < size; i++)
        cin >> array[i];

    int element;
    cout<<"\nEnter Element to search: ";
    cin>>element;

    int pos = search(array, element, 0, size-1);
    if(pos == -1)
        cout<<"\nElement Not Found.";
    else
        cout<<"\nElement Found at "<<pos+1<<".";
    return 0;
}