/*
Taylor Ropiequet
2349522
ropiequet@chapman.edu
CPSC 350-02
Assignment 6

This is my implementation file for my sorting algorithms
*/

#include "Sort.h"
#include <iostream>

using namespace std;


int Sort::Partition(double nums[], int lowIndex, int highIndex){
  int midpoint = lowIndex + (highIndex - lowIndex) / 2;
  int pivot = nums[midpoint];

  bool done = false;
  while (!done){
    while (nums[lowIndex] < pivot){
      lowIndex += 1;
    }

    while (pivot < nums[highIndex]){
      highIndex -= 1;
    }

    if (lowIndex >= highIndex){
      done = true;
    }else{
      int temp = nums[lowIndex];
      nums[lowIndex] = nums[highIndex];
      nums[highIndex] = temp;

      lowIndex += 1;
      highIndex -= 1;
    }
  }
  return highIndex;
}


void Sort::QuickSort(double nums[], int lowIndex, int highIndex){
  if (!(lowIndex >= highIndex)){
    int lowEndIndex = Partition(nums, lowIndex, highIndex);

    QuickSort(nums, lowIndex, lowEndIndex);
    QuickSort(nums, lowEndIndex + 1, highIndex);
  }
}





void Sort::Merge(double nums[], int i, int j, int k){
  int mergedSize = k - i + 1;
  int mergePos = 0;
  int leftPos = 0;
  int rightPos = 0;
  int *mergedNumbers;
  mergedNumbers = new int[mergedSize];

  leftPos = i;
  rightPos = j + 1;

  while (leftPos <= j && rightPos <= k){
    if (nums[leftPos] <= nums[rightPos]) {
        mergedNumbers[mergePos] = nums[leftPos];
        ++leftPos;
    }else{
      mergedNumbers[mergePos] = nums[rightPos];
      ++rightPos;
    }
    ++mergePos;
  }

  while (leftPos <= j){
    mergedNumbers[mergePos] = nums[leftPos];
    ++leftPos;
    ++mergePos;
  }

  while (rightPos <= k){
    mergedNumbers[mergePos] = nums[rightPos];
    ++rightPos;
    ++mergePos;
  }

  for (mergePos = 0; mergePos < mergedSize; ++mergePos){
   nums[i + mergePos] = mergedNumbers[mergePos];
 }
}


void Sort::MergeSort(double nums[], int i, int k){
  int j = 0;

  if (i < k){
    j = (i + k) / 2;
    MergeSort(nums, i, j);
    MergeSort(nums, j+1, k);

    Merge(nums, i, j, k);
  }
}



void Sort::SelectionSort(double nums[], int numsSize){
  int i = 0;
  int j = 0;
  int indexSmallest = 0;
  int temp = 0;

  for (i = 0; i < numsSize - 1; ++i){
    indexSmallest = i;
    for (j = 1; j < numsSize; ++j){
      if (nums[j] < nums[indexSmallest]){
        indexSmallest = j;
      }
    }
    temp = nums[i];
    nums[i] = nums[indexSmallest];
    nums[indexSmallest] = temp;
  }
}


void Sort::InsertionSort(double nums[], int numsSize){
  int i = 0;
  int j = 0;
  int temp = 0;

  for (i = 0; i < numsSize; ++i){
    j = 1;
    while (j > 0 && nums[j] < nums[j-1]){
      temp = nums[j];
      nums[j] = nums[j-1];
      nums[j-1] = temp;
      --j;
    }
  }
}


void Sort::BubbleSort(double nums[], int numsSize){
  int i = 0;
  int j = 0;
  int temp = 0;
  for (i = 0; i < numsSize - 1; i++){
    for (j = 0; j < numsSize - i - 1; j++){
      if (nums[j] > nums[j+1]){
        temp = nums[j];
        nums[j] = nums[j + 1];
        nums[j + 1] = temp;
      }
    }
  }
}
