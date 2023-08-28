#include <stdio.h>
#include <stdlib.h>
 

struct Node
{
    int data;
    struct Node* next;
};
 

void printList(struct Node* head)
{
    struct Node* ptr = head;
    while (ptr)
    {
        printf("%d —> ", ptr->data);
        ptr = ptr->next;
    }
 
    printf("NULL\n");
}
 
void push(struct Node** head, int data)
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = *head;
    *head = newNode;
}
 

void moveNode(struct Node** destRef,sruct Node** sourceRef)
{
    
    if (*sourceRef == NULL) {
        return;
    }
 
    struct Node* newNode = *sourceRef;  
    *sourceRef = (*sourceRef)->next;    
    newNode->next = *destRef;           
    *destRef = newNode;                 
}

struct Node* sortedMerge(struct Node* a, struct Node* b)
{
   
    struct Node dummy;
    dummy.next = NULL;
 
    
    struct Node* tail = &dummy;
 
    while (1)
    {
    
        if (a == NULL)
        {
            tail->next = b;
            break;
        }
        else if (b == NULL)
        {
            tail->next = a;
            break;
        }
 
        if (a->data <= b->data) {
            moveNode(&(tail->next), &a);
        }
        else {
            moveNode(&(tail->next), &b);
        }
 
        tail = tail->next;
    }
 
    return dummy.next;
}
 

  
