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
    int numComponents(ListNode* head, vector<int>& G) {
        
        if(head==NULL || G.size()==0){
            return 0;
        }
        
        unordered_set<int> hash;
        
        for(int i : G)
            hash.insert(i);
        
        int count = 0;
        while(head){
            if (hash.count(head->val) &&
                (head->next == NULL || !hash.count(head->next->val))) count++;

            head = head->next;
        }
    
        return count;
        
    }
};
