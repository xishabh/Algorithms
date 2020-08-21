# leetcode-practice

    void swapLists(ListNode* l1, ListNode* l2){
        if(l1->val > l2->val){
            ListNode temp = *l1;
            *l1 = *l2;
            *l2 = temp;
        }
