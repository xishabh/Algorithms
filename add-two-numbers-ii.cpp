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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* rl1 = reverse(l1);
        ListNode* rl2 = reverse(l2);
        ListNode* p = NULL;
        ListNode* head = NULL;
        
        int value = 0;
        int carry = 0;
        
        while(rl1 || rl2){
            
            int rl1_val = rl1!=NULL ? rl1->val : 0;
            int rl2_val = rl2!=NULL ? rl2->val : 0;
                
            value = rl1_val + rl2_val + carry;
            carry = value/10;
            value  = value%10;
            
            p = new ListNode(value); //add values in list
            p->next = head; // ...[1]->[0]->NULL
            head = p;
            
            if(rl1)rl1 = rl1->next;
            if(rl2)rl2 = rl2->next;
            
        }
        
        if(carry>0){
            p = new ListNode(carry);
            p->next = head;
            head = p;
        }
        return head;
        
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
