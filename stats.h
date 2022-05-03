/**
 * @file stats.h 
 * @brief The header file for the stats.c file
 *
 * This file contains the functions declarations for the stats.c file
 *
 * @author Jesutofunmi Kupoluyi
 * @date 3 May, 2022
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/**
 * @brief A function that prints the statistics of an array including minimum, maximum, mean, and median.
 *
 * The function takes an unsigned character array of data, its size and
 * finds the minimum, maximum, mean and median of that array.
 *
 * @param array the array of data to find its statistical results
 * @param size the size of the array
 * @return ** void
 */
void print_statistics(unsigned char array[], int size);

/**
 * @brief Given an array of data and a length, prints the array to the screen
 * 
 * @param array the array of data to find its statistical results
 * @param size the size of the array
 * @return ** void 
 */
void print_array(unsigned char array[], int size);

/**
 * @brief Given an array of data and a length, returns the median value
 * 
 * @param array 
 * @param size 
 * @return ** int 
 */
int find_median(unsigned char array[], int size);

/**
 * @brief Given an array of data and a length, returns the mean 
 * 
 * @param array 
 * @param size 
 * @return ** int 
 */
int find_mean(unsigned char array[], int size);

/**
 * @brief Given an array of data and a length, returns the maximum
 * 
 * @param array 
 * @param size 
 * @return ** int 
 */
int find_maximum(unsigned char array[], int size);

/**
 * @brief Given an array of data and a length, returns the minimum
 * 
 * @param array 
 * @param size 
 * @return ** int 
 */
int find_minimum(unsigned char array[], int size);

/**
 * @brief Given an array of data and a length, sorts the array from largest to smallest.
 * 
 * @param array 
 * @param size 
 * @return ** void 
 */
void sort_array(unsigned char array[], int size);

#endif /* __STATS_H__ */
