/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        auto dummy=ListNode{0};
        while(head)
        {
            auto temp=head->next;
            head->next=dummy.next;
            dummy.next=head;
            head=temp;
        }
        return dummy.next;
        
    }
};
/*
Assume that we have linked list 1 → 2 → 3 → Ø, we would like to change it to Ø ← 1 ← 2 ← 3.

While you are traversing the list, change the current node's next pointer to point to its previous element. 
Since a node does not have reference to its previous node, you must store its previous element beforehand. 
You also need another pointer to store the next node before changing the reference. 
Do not forget to return the new head reference at the end!

*/
