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
    bool isPalindrome(ListNode* head) {
        ListNode* fast = head;
        ListNode* slow = head;
        if(head==NULL){
            return true;
        }
        else if(head->next==NULL){
            return true;
        }
        else if(head->next->next==NULL){
            slow = slow->next;
        }
        
        while(fast!=NULL && fast->next!=NULL && fast->next->next!=NULL){
            fast = fast->next->next;
            slow = slow->next;
        }
        slow=reverse(slow);
        fast = head;
        
        while(slow!=NULL){
            if(fast!=NULL){
            if(slow->val != fast->val){
                return false;
            }
            fast = fast->next;}
            slow = slow->next;

        }
        
        return true;
    }
    
    ListNode* reverse(ListNode* head){
        ListNode* current = head;
        ListNode* previous = NULL;
        ListNode* next;
        
        while(current!=NULL){
            next = current->next;
            current->next = previous;
            previous = current;
            current = next;
        } 
        head = previous;
        return head;
    }
};
