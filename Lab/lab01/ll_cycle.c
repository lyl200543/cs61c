#include <stddef.h>
#include "ll_cycle.h"

int ll_has_cycle(node *head) {
    node* tortoise=head,*hare=head; 
    while(hare && hare!=tortoise){
	hare=hare->next;
	if(!hare){
	    break;
	}
	hare=hare->next;
	tortoise=tortoise->next;
    }
    if(!hare){
	return 0;
    }
    return 1;
}

/*int ll_has_cycle(node *head) {
        if (head == NULL) {
            return 0;
        }

        node *slow = head;
        node *fast = head;

        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast) {
                return 1;
            }
        }

        return 0;
}*/
