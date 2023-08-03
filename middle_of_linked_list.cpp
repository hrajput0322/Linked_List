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
    int length(ListNode* head){
        ListNode* curr = head;
        int size = 0;
        while(curr!=NULL){
            size++;
            curr = curr->next;
        }
        return size;
    }
    ListNode* middleNode(ListNode* head) {
        int n = length(head);
        n = n/2;
        ListNode* curr = head;
        while (n){
            curr = curr->next;
            n--;
        }
        return curr;
    }
};
