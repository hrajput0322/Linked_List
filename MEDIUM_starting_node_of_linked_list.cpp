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
    bool isCycle(ListNode* head){
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast!=NULL && fast->next!=NULL) {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast){
                return true;
            }
        }
        return false;
    }
    ListNode *detectCycle(ListNode *head) {
        if (isCycle(head)){
            ListNode* slow = head;
            ListNode* fast = head;
            do {
                slow = slow->next;
                fast = fast->next->next;
            } while(slow!=fast);
            if (slow==head){
                return head;
            }
            fast = head;
            while (slow->next!=fast->next){
                slow = slow->next;
                fast = fast->next;
            }
            return fast->next;
        }
        else {
            return NULL;
        }
        
    }
};
