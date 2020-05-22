/**
*   Given a sorted array of integers, find index of first and last occurance of a given
*   number.If the element is not found in an array, report that as well.
*/

#include <stdio.h>
#include <iostream>

using namespace std;

void findFirstAndLast(int arr[], int n, int x) 
{ 
    int first = -1, last = -1; 
    for (int i=0; i<n; i++) 
    { 
        if (x != arr[i]) 
            continue; 
        if (first == -1) 
            first = i; 
        last = i; 
    } 
    if (first != -1) 
        cout << "First Occurrence = " << first 
             << "nLast Occurrence = " << last; 
    else
        cout << "Not Found"; 
} 

int main()
{
    int size;
    cout<<"Enter Size of Sorted Array: ";
    cin>>size;
    int arr[size];

    cout<<"Enter Array: ";
    for(int i = 0; i < size; i++)
        cin >> arr[i];

    int element;
    cout<<"Enter Element to search: ";
    cin>>element;

    findFirstAndLast(arr, size, element);

    return 0;
}