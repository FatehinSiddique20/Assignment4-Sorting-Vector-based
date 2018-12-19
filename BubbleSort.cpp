#include "BubbleSort.h"
#include <iostream>
#include<vector>
using namespace std;
BubbleSort::BubbleSort()
{
}
BubbleSort::~BubbleSort()
{
}
void BubbleSort:: BubbleSorter(vector<int> arr, int n)
{
    cout <<endl<<"BubbleSort :"<<endl<<endl;
    bool swapped = true;
    int index = 0;
    int temp;
    while (swapped)
    {
        swapped = false;
        index++;
        for (int index2 = 0; index2 < n - index; ++index2)
        {
            if (arr[index2] > arr[index2 + 1])
            {
                temp = arr[index2];
                arr[index2] = arr[index2 + 1];
                arr[index2 + 1] = temp;
                swapped = true;
                for(int index3 = 0; index3 < n; ++index3)
                {
                    cout << arr[index3]<<" ";
                }
                cout <<endl;
            }

        }
    }
}
