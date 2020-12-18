/*
Taylor Ropiequet
2349522
ropiequet@chapman.edu
CPSC 350-02
Assignment 6

This is my header file for Sort.cpp

*/

#include <iostream>
using namespace std;

class Sort{

public:

  void QuickSort(double nums[], int lowIndex, int highIndex);
  int Partition(double nums[], int lowIndex, int highIndex);


  void MergeSort(double nums[], int i, int k);
  void Merge(double nums[], int i, int j, int k);

  void SelectionSort(double nums[], int numsSize);

  void InsertionSort(double nums[], int numsSize);

  void BubbleSort(double nums[], int numsSize);




};
