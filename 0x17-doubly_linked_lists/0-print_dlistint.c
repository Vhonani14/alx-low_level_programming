#include "lists.h"
#include <stdio.h>

/**
 *  * print_dlistint - function that prints all the elements of a dlistint_t list.
 *   * @h: Pointer to head node of the linked list
 *    * Return: Number of nodes in the linked list
 *     */
size_t print_dlistint(const dlistint_t *h)
{
	    size_t count = 0;
	        const dlistint_t *current = h;

		    while (current != NULL)
			        {
					        count++;
						        printf("%d\n", current->n);
							        current = current->next;
								    }

		        return count;
}

