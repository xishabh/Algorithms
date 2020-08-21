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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        
        if(l1 == NULL){
            if(l2==NULL){
                return NULL;
            }
            return l2;
        }
        
        else if(l2==NULL){
            if(l1==NULL){
                return NULL;
            }
            return l1;
        }
        ListNode merged_lists = NULL;
        ListNode* merged = &merged_lists;
        
        while(l1 && l2){
        
            if(l1->val < l2->val){
                merged->next = l1;
                l1 = l1->next;
            }
            else{
                merged->next = l2;
                l2 = l2->next;
            }
            
            merged = merged->next;
            
        }
         merged->next = l1 ? l1 : l2;
        
        return merged_lists.next;
    }
};
