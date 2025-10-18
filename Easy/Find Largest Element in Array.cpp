#include <iostream>
using namespace std;

int findLargestElement(int arr[], int n)
{
    int largest = arr[0];
    for (i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
}