Deleting a Node from a Linked List :-


Case 1: The first node is deleted.
Case 2: The last node is deleted.
Case 3: The node after a given node is deleted.

4.1.) Deleting the first node of a linked list :-

	
**Algorithm to delete the first node**
            Step 1: IF START = NULL
                Write UNDERFLOW
                Go to Step 5
                [END OF IF]
            Step 2: SET PTR = START
            Step 3: SET START = START -> NEXT
            Step 4: FREE PTR
            Step 5: EXIT

4.2.) Deleting the Last Node from a Linked List :-
	
**Algorithm to delete the last node**
            Step 1: IF START = NULL
                Write UNDERFLOW
                Go to Step 8
                [END OF IF]
            Step 2: SET PTR = START
            Step 3: Repeat Steps 4 and 5 while PTR -> NEXT != NULL
            Step 4: SET PREPTR = PTR
            Step 5: SET PTR = PTR -> NEXT
                [END OF LOOP]
            Step 6: SET PREPTR -> NEXT = NULL
            Step 7: FREE PTR
            Step 8: EXIT

4.3.) Deleting the Node After a Given Node in a Linked List :-

	
**Algorithm to delete the node after a given node**
            Step 1: IF START = NULL
                Write UNDERFLOW
                Go to Step 1
                [END OF IF]
            Step 2: SET PTR = START
            Step 3: SET PREPTR = PTR
            Step 4: Repeat Steps 5 and 6 while PREPTR->DATA != NUM
            Step 5: SET PREPTR = PTR
            Step 6: SET PTR = PTR->NEXT
                [END OF LOOP]
            Step 7: SET TEMP = PTR
            Step 8: SET PREPTR->NEXT = PTR->NEXT
            Step 9: FREE TEMP
            Step 10: EXIT
