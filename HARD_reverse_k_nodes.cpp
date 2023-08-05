/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
int length (ListNode* head){
    ListNode* curr = head;
    int size = 0;
    while (curr!=NULL){
        size++;
        curr = curr->next;
    }
    return size;
}
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* curr = head;
        ListNode* next;
        ListNode* prev = NULL;
        int pos = 0;
        int l = length(head);
        if (l<k){
            return head;
        }
        else{
            while (curr!=NULL && pos<k){
                next = curr->next;
                curr->next = prev;

                prev = curr;
                curr = next;
                pos++;
            }
            if (next!=NULL)
            head->next = reverseKGroup(next, k);
            return prev;
        }
        
    }
};
