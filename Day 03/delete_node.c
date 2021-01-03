 
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <malloc.h>
 
struct node
{
      int data;
      struct node *next;
};
struct node *delete_beg(struct node *start)
        {
            struct node *ptr;
            ptr = start;
            start = start -> next;
            free(ptr);
            return start;
        }
 
        struct node *delete_end(struct node *start)
        {
            struct node *ptr, *preptr;
            ptr = start;
            while(ptr -> next != NULL)
            {
                preptr = ptr;
                ptr = ptr -> next;
            }
            preptr -> next = NULL;
            free(ptr);
            return start;
        }
 
        struct node *delete_node(struct node *start)
        {
        struct node *ptr, *preptr;
        int val;
        printf(“\n Enter the value of the node which has to be deleted : “);
        scanf(“%d”, &val);
        ptr = start;
        if(ptr -> data == val)
        {
            start = delete_beg(start);
            return start;
        }
        else
        {
            while(ptr -> data != val)
            {
                preptr = ptr;
                ptr = ptr -> next;
            }
            preptr -> next = ptr -> next;
            free(ptr);
            return start;
        }
        }
 
        struct node *delete_after(struct node *start)
        {
            struct node *ptr, *preptr;
            int val;
            printf(“\n Enter the value after which the node has to deleted : “);
            scanf(“%d”, &val);
            ptr = start;
            preptr = ptr;
            while(preptr -> data != val)
            {
                preptr = ptr;
                ptr = ptr -> next;
            }
            preptr -> next=ptr -> next;
            free(ptr);
            return start;
        }
 
        struct node *delete_list(struct node *start)
        {
            struct node *ptr; // Lines 252-254 were modified from original code to fix
            unresposiveness in output window
            if(start!=NULL)
            {
                ptr=start;
                while(ptr != NULL)
                {
                printf(“\n %d is to be deleted next”, ptr -> data);
                start = delete_beg(ptr);
                ptr = start;
                }
            }
            return start;
        }
