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
    ListNode* removeElements(ListNode* head, int val) {
        
        ListNode* head_temp = head;
        
        if(head==NULL){
            return NULL;
        }        
            while(head->next!=NULL){                
                if(head->next->val==val){
                    head->next = head->next->next;
            }
                else{
                head = head->next;}
    }
        if(head_temp->val == val){
            head_temp = head_temp->next;
        } 
        
        return head_temp;
    }
};
