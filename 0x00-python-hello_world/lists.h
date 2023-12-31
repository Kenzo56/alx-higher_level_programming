#ifndef LISTS_H
#define LISTS_H
#include <stdlib.h>
/**
* struct listint_s - singly linked list
* @k: integer
* @next: points to the next node
* Description: singly linked list node structure
*/
typedef struct listint_s
{
int k;
struct listint_s *next;
}
listint_t;
size_t print_listint(const listint_t *k);
listint_t *add_nodeint(listint_t **head, const int k);
void free_listint(listint_t *head);
int check_cycle(listint_t *list);
#endif /* LISTS_H */
