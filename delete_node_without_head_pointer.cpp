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
    void deleteNode(ListNode* node) {
        ListNode* curr = node->next;
        ListNode* prev = node;
        while (curr->next!=NULL){
            prev->val = curr->val;
            prev = curr;
            curr = curr->next;
        }
        prev->val = curr->val;
        prev->next = NULL;
        delete (curr);
    }
};
