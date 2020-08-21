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
    int getDecimalValue(ListNode* head){
        ListNode* head_temp = head;
        int value = 0;
        int size = 0;
        while(head_temp){
            size++;
            head_temp = head_temp->next;
        }
        
        while(head){
            value = value + (head->val)*pow(2,size-1);
            size--;
            head = head->next;
        }
        return value;
    }
};
