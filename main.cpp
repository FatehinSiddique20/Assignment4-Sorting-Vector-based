#include <iostream>
#include "SelectionSort.h"
#include "InsertionSort.h"
#include "MergeSort.h"
#include "BubbleSort.h"
#include <vector>

using namespace std;

int main()
{
    int arr[8] = {14,33,27,10,35,19,48,44};
    SelectionSort Sort;
    vector<int> a;
    a.insert(a.begin(),arr,arr+8);
    int n = a.size();
    Sort.SelectionSorter(a,n);

     int arr1[8] = {14,33,27,10,35,19,48,44};
    InsertionSort Sort1;
    vector<int> b;
    b.insert(b.begin(),arr1,arr1+8);
    int n1 = b.size();
    Sort1.InsertionSorter(b,n1);

    cout<<endl<<"Merge sort\n"<<endl<<endl;
    int arr2[8] = {14,33,27,10,35,19,48,44};
    MergeSort Sort2;
    vector<int> c;
    c.insert(c.begin(),arr2,arr2+8);
    int n3 = c.size();
    Sort2.merge_sort(c,0,n3-1);

    int arr3[8] = {14,33,27,10,35,19,48,44};
    BubbleSort Sort3;
    vector<int> d;
    d.insert(d.begin(),arr3,arr3+8);
    int n4 = d.size();
    Sort3.BubbleSorter(d,n4);

    return 0;
}
