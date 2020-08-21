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
        
        while(node){
            if(node->next->next == NULL){
                
                node->val = node->next->val;            
                node->next = node->next->next;
                return;
            }
            node->val = node->next->val;
            node = node->next;
            
            
        }
         
    }
};
