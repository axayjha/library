/*
array.h header file
Array functions implementations

Akshay
CSE, 3rd sem

*/


#ifndef ARRAY_H_
#define ARRAY_H_

#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define TRUE 1
#define FALSE 0
#define lengthOf(array) (sizeof((array))/sizeof((array)[0]))
typedef int BOOLEAN;

void print_array(int *arr, int n)
{
	
	for(int i=0; i<n; i++)
		printf("%d ", arr[i]);
	printf("\n");
}




#endif