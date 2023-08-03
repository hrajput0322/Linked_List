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
    ListNode* addTwoNumbers(ListNode* a, ListNode* b) {
        ListNode* dummy_node = new ListNode();
        ListNode* temp = dummy_node;
        int carry = 0;
        while (a!=NULL || b!=NULL || carry){
            int sum = 0;
            if (a!=NULL){
                sum+=a->val;
                a = a->next;
            }
            if (b!=NULL){
                sum+=b->val;
                b = b->next;
            }
            sum+=carry;
            carry = sum/10;
            ListNode* newNode = new ListNode(sum%10);
            temp->next = newNode;
            temp = temp->next;
        }
        return dummy_node->next;
    }
};
