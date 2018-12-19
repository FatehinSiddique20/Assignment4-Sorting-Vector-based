#ifndef MERGESORT_H_INCLUDED
#define MERGESORT_H_INCLUDED
#include<vector>
using namespace std;

class MergeSort
{
public:
    MergeSort();
    ~MergeSort();
    void merge_sort(vector<int> &value,int startIndex, int endIndex);
};
#endif // MERGESORT_H_INCLUDED


