/*
Taylor Ropiequet
2349522
ropiequet@chapman.edu
CPSC 350-02
Assignment 6

This is my main method the implements and times my sorting algorithms the outputs the data

*/

#include <iostream>
#include <ctime>
#include <fstream>
#include "Sort.h"
using namespace std;

int main(int argc, char const *argv[]) {

  Sort s;

  string fileName = argv[1];

  ifstream infile(fileName);

  int count;
  infile >> count;


  double quickSort[count];
  double mergeSort[count];
  double selectionSort[count];
  double insertionSort[count];
  double bubbleSort[count];

  double num;

  for (int i = 0; i < count; ++i){
    infile >> num;
    quickSort[i] = num;
    mergeSort[i] = num;
    selectionSort[i] = num;
    insertionSort[i] = num;
    bubbleSort[i] = num;
  }

  clock_t start;
  clock_t end;

  double totalTime;


  //QuickSort
  start = clock();
  s.QuickSort(quickSort, 0, count - 1);
  end = clock();
  totalTime = double(end - start) * 1000.0 / CLOCKS_PER_SEC;

  cout << "QUICK SORT" << endl;
  cout << "-----------" << endl;
  cout << "Start time: " << start << endl;
  cout << "End time: " << end << endl;
  cout << "Total time: " << totalTime << endl;

  cout << endl;


  //MergeSort
  start = clock();
  s.MergeSort(mergeSort, 0, count - 1);
  end = clock();
  totalTime = double(end - start) * 1000.0 / CLOCKS_PER_SEC;

  cout << "MERGE SORT" << endl;
  cout << "-----------" << endl;
  cout << "Start time: " << start << endl;
  cout << "End time: " << end << endl;
  cout << "Total time: " << totalTime << endl;

  cout << endl;


  //SelectionSort
  start = clock();
  s.SelectionSort(selectionSort, count);
  end = clock();
  totalTime = double(end - start) * 1000.0 / CLOCKS_PER_SEC;

  cout << "SELECTION SORT" << endl;
  cout << "-----------" << endl;
  cout << "Start time: " << start << endl;
  cout << "End time: " << end << endl;
  cout << "Total time: " << totalTime << endl;

  cout << endl;

  //InsertionSort
  start = clock();
  s.InsertionSort(insertionSort, count);
  end = clock();
  totalTime = double(end - start) * 1000.0 / CLOCKS_PER_SEC;

  cout << "INSERTION SORT" << endl;
  cout << "-----------" << endl;
  cout << "Start time: " << start << endl;
  cout << "End time: " << end << endl;
  cout << "Total time: " << totalTime << endl;


  cout << endl;

  //BubbleSort
  start = clock();
  s.BubbleSort(bubbleSort, count);
  end = clock();
  totalTime = double(end - start) * 1000.0 / CLOCKS_PER_SEC;

  cout << "BUBBLE SORT" << endl;
  cout << "-----------" << endl;
  cout << "Start time: " << start << endl;
  cout << "End time: " << end << endl;
  cout << "Total time: " << totalTime << endl;














  return 0;
}
