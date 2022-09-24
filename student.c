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
    //make a counter variable
    int counter = 0; 
    //make a length finder
    int length = strlen(str);
    //forloop to run through string
    for(int x = 0; x < length ; x++)
    {
        //if the character in string is equal to the key
        if(str[x] == key)
        {
            //increment the counter
            counter++;
        }
    }
    //return number of instances
    return counter;
}

void sort(int array[],int length){
	
    //make a swap function
  void swap(int* init,int* fin)
  {
      int temp = *init;
      *init = *fin;
      *fin = temp;
  }

    //going to use the selection sort ideology
    //start declaring variables
    int min,x,y;
    //forloop to loop through array starting with first element
    for(int x = 0; x < length - 1; x++)
    {
        //find minimum element first
        //loop for inner run
        for(int y = x + 1; y < length; y ++)
        {
            //set min to first index of loop
            int min = x;

            //if the min is greater than the y element
            if(array[min] > array[y])
            {
                //flip the min index with y index
                min = y;
            }
            //swap address of min element with address at x
            swap(&array[min],&array[x]);
        }
    }
}

int* twoSum(int *nums, int numsSize, int target)
{
    //make a new array of the two
    int* final = (int*)malloc(length*sizeof(int));
    int* sum;
    int *tar = &target;

    //forloop for the first runthough number variable
    for(int x = 0; x < numsSize; x++)
    {
        //second forloop for other sum variable
        for(int y = x+1; y < numsSize; y++)
        {
          //sum up the two loops
            int sum = *nums[x] + *nums[y];
            //if the sum is equal to target put them each in the new array using the poiting adddress
            if(sum == tar)
            {
              final[0] = &nums[x];
              final[1] = &nums[y];
            }
        }
        
    }
    return *final;
}


int* decryptPointer(int array[], int length, int *key[]){
    //create a pointer array holder
    int* final = (int*)malloc(sizeof(int)*length);
    //create forloop to add each element at x
    for(int x = 0; x<length; x++)
    {
        //add the array and key at index x
        final[x] = array[x] + *key[x];
    }
    return *final;
}




