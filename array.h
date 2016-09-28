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

void print_array(int *arr, int n);
void input_array(int *arr, int n);
void sort(int *arr, int n);
void quicksort(int *A, int p, int r);
int partition(int *A, int p, int r);
void swap(int *a, int *b);

void print_array(int *arr, int n)
{

	for(int i=0; i<n; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

void input_array(int *arr, int n)
{
	printf("Enter the elements: \n");
	int i;
	for (i=0; i<n; i++)
		scanf("%d", &arr[i]);
}


void sort(int *arr, int n)
{
	quicksort(arr, 0, n-1);
}


void quicksort(int *A, int p, int r)
{
   if( p < r )
   {
      int q = partition(A, p, r);
      quicksort(A, p, q-1);
      quicksort(A, q+1, r);
   }
}

int partition(int *A, int p, int r)
{
   int x = A[r];
   int i = p-1;
   for(int j=p; j <= r-1; j++)
   {
      if( A[j] <= x )
      {
         i++;
         swap(&A[i], &A[j]);
      }
   }
   swap(&A[i+1], &A[r]);
   return (i+1);
}

void swap(int *a, int *b)
{
   int t = *a;
   *a = *b;
   *b = t;
}

#endif
