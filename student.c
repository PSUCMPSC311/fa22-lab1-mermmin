#include "student.h"

int squareOfSmallest(int array[], int length) {
  int square = 0;
  //automatically set the min to first element
  int min = array[0];
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
  //automatically set the min to first element
  int min = nums[0];
  //Find the min of the nums array 
  for(int x = 0; x < numsSize; x++)
  {
    if(min>nums[x])
    {
      min = nums[x];
    }
  }
  //return the min
  return min;
}

bool isPalindrome(char str[]){
    //take the original length of the string
    int length = strlen(str);
    //find num of last letter
    int back = length-1;
    int front = 0;

    //while the loop is still looking at right and left letters
    while (back > front)
    {
        //if the right letter is not equal to the left letter
        if(str[back--] != str[front++])
        {
            //it is not a palindrome and return false
            return false;
        }
    }
    //return true if not already returning false
    return true;
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




