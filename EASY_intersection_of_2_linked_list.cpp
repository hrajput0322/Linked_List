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
int length (ListNode* head){
    int size = 0;
    ListNode* curr = head;
    while (curr!=NULL) {
        size++;
        curr = curr->next;
    }
    return size;
}
    ListNode *getIntersectionNode(ListNode *a, ListNode *b) {
        int l1 = length(a);
        int l2 = length(b);
        int d;
        ListNode* fast = NULL;
        ListNode* slow = NULL;
        if (l1>=l2){
            d = l1 - l2;
            fast = a;
            slow = b;
        }
        else {
            d = l2 - l1;
            fast = b;
            slow = a;
        }
        while (d){
            fast = fast->next;
            d--;
        }
        while (fast!=NULL && slow!=NULL){
            if (fast==slow){
                return fast;
            }
            fast = fast->next;
            slow = slow->next;
        }
        return NULL;
    }
};
