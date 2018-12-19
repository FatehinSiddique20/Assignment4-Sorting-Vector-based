#ifndef SELECTIONSORT_H_INCLUDED
#define SELECTIONSORT_H_INCLUDED
#include <vector>
using namespace std;
class SelectionSort
{
public:
    SelectionSort();
    ~SelectionSort();
    void SelectionSorter(vector<int> arr, int arr_size);
};
#endif // SELECTIONSORT_H_INCLUDED
