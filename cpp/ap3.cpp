/*
    Given an Array, find peak element in it.
    A Peak elements is the element that is greater than its neighbours.
*/

#include <iostream>
#include <stdio.h>

using namespace std;

int countPeak(int array[], int size);
void findPeak(int array[], int size);
int main()
{
    int size;
    cout<<"Enter array size : ";
    cin>>size;

    int array[size];
    cout<<"Enter Array : ";
    for (int i = 0; i < size; i++)
        cin>>array[i];
    
    findPeak(array, size);
    return 0;
}

int countPeak(int array[], int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if( i != 0 || i != size-1 )
        {
            if(i > 0 && i < size-1)
            {
                if( ( array[i] > array[i-1] ) && ( array[i] > array[i+1] ))
                    count++;
            }
        }
    }
    return count;
}

void findPeak(int array[], int size)
{
    int count = countPeak(array, size);
    if(count == 0)
        cout<<"No Peak Found";
    if(count > 0)
    {
        for (int i = 0; i < size; i++)
        {
           if( i != 0 || i != size-1 )
            {
                if(i > 0 && i < size-1)
                {
                    if( ( array[i] > array[i-1] ) && ( array[i] > array[i+1] ))
                        cout<<"\nPeak Element :"<< array[i];
                }
            }
        }
    }
}