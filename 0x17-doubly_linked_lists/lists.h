#ifndef DDL
#define DDL

/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: pointer to the previous node
 * @next: pointer to the next node
 *
 * Description: doubly linked list node structure
 * for Holberton project
 */
typedef struct dlistint_s
{
	    int n;
	        struct dlistint_s *prev;
		    struct dlistint_s *next;
} dlistint_t;

#include <stdio.h>
#include <stdlib.h>

size_t print_dlistint(const dlistint_t *h);
size_t dlistint_len(const dlistint_t *h);
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
void free_dlistint(dlistint_t *head);
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
int sum_dlistint(dlistint_t *head);

/**
 * insert_dnodeint_at_index - inserts a new node at given index in the list
 * @head: pointer to the head of the list
 * @idx: index to add at, starting from 0
 * @n: value of the new node
 * Return: pointer to the new node or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **head, unsigned int idx, int n);
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);

#endif

