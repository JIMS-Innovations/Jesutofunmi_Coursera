/**
 * @file stats.c
 * @brief This is the solution to the assignment given
 *
 * @author Jesutofunmi Kupoluyi
 * @date 3 May, 2022
 *
 */

#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

int main()
{

  unsigned char test[SIZE] = {34, 201, 190, 154, 8, 194, 2, 6,
                              114, 88, 45, 76, 123, 87, 25, 23,
                              200, 122, 150, 90, 92, 87, 177, 244,
                              201, 6, 12, 60, 8, 2, 5, 67,
                              7, 87, 250, 230, 99, 3, 100, 90};

  /* Other Variable Declarations Go Here */

  /* Statistics and Printing Functions Go Here */
  print_statistics(test, SIZE);
  print_array(test, SIZE);
}

/* Add other Implementation File Code Here */

// PRINT STATISTICS FUNCTION ************************
void print_statistics(unsigned char array[], int size)
{
  unsigned char min = array[0];
  unsigned char max = array[0];
  unsigned int mean;
  unsigned int sum;
  int buffer;

  for (int i = 0; i < size; i++)
  {

    // Minimum
    if (array[i] < min)
    {
      min = array[i];
    }
    // Maximum
    if (array[i] > max)
    {
      max = array[i];
    }
    // Mean
    sum += array[i];
    mean = sum / size;
  }

  // median
  unsigned char ordered_numbers[size];

  for (int i = 0; i < size; ++i)
  {
    for (int j = i + 1; j < size; ++j)
    {
      if (array[i] > array[j])
      {
        buffer = array[i];
        array[i] = array[j];
        array[j] = buffer;
      }
    }
  }
  int median;
  if (size % 2 != 0)
  {
    median = (array[size / 2] + array[(size / 2) + 1]) / 2;
  }
  else
  {
    median = array[size / 2];
  }

  unsigned int output[4] = {min, max, mean, median};

  printf("[");
  for (int i = 0; i < 3; i++)
  {
    printf(" %d, ", output[i]);
  }
  printf("%d] \n", output[3]);
}

// PRINT ARRAY FUNCTION*************************
void print_array(unsigned char array[], int size)
{

  printf("[");
  for (int i = 0; i < size - 1; i++)
  {
    printf(" %d, ", array[i]);
  }
  printf("%d] \n", array[size - 1]);
}

// FIND MEDIAN FUNCTION*************************
int find_median(unsigned char array[], int size)
{
  int buffer;
  for (int i = 0; i < size; ++i)
  {
    for (int j = i + 1; j < size; ++j)
    {
      if (array[i] > array[j])
      {
        buffer = array[i];
        array[i] = array[j];
        array[j] = buffer;
      }
    }
  }
  return buffer;
}

// FIND MEAN FUNCTION**************************
int find_mean(unsigned char array[], int size){
  int sum;
  int mean;
  for (int i = 0; i < size; i++)
  {
    // Mean
    sum += array[i];
    mean = sum / size;
  }
  return mean;
}
