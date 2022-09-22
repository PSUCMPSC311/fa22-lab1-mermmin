#include "student.h"

int squareOfSmallest(int array[], int length) {
  int square = 0;
  int array[] = {4,2,5};
  //automatically set the min to first element
  int min = array[0];
  int length = 3;
  //first find the min of the array 
  for(int x = 0; x < length; x++)
  {
    if(min>array[x])
    {
      min = array[x];
    }
  }
  //square the min
  square = min * min;
  return square;
}

int findMin(int *nums, int numsSize){
	return -1;
}

bool isPalindrome(char str[]){
	return false; 
}

int freqOfChar(char str[], char key){
	return -1;
}

void sort(int array[],int length){
}

int* twoSum(int* nums, int numsSize, int target){
	return NULL;
}

int* decryptPointer(int array[], int length, int *key[]){
	return NULL;
}




