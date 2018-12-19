#ifndef INSERTIONSORT_H_INCLUDED
#define INSERTIONSORT_H_INCLUDED
#include<vector>
using namespace std;
class InsertionSort
{
public:
    InsertionSort();
    ~InsertionSort();
    void InsertionSorter(vector<int> arr, int arr_size);
};
#endif // INSERTIONSORT_H_INCLUDED
