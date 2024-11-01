#ifndef SORT_FILE
#define SORT_FILE

#include <stdio.h>
#include <stdlib.h>

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void swap(int *x, int *y);
int lomuto_partition(int *array, size_t size, int low, int high);
void lomuto_sort(int *array, size_t size, int low, int high);
void shell_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
listint_t *swap_node(listint_t *node, listint_t **list);
int get_max(int *array, int size);
void counting_sort(int *array, size_t size);
void merge_subarr(int *subarr, int *buff, size_t front, size_t mid, size_t back);
void merge_sort_recursive(int *subarr, int *buff, size_t front, size_t back);
void merge_sort(int *array, size_t size);

#endif
