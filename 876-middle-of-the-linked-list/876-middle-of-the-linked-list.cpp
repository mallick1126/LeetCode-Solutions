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
    ListNode* middleNode(ListNode* head) {
//         int l = 0;
//         ListNode* p = head ;
//         for(int i = 0 ; p!= NULL ; i++){
//             p = p->next ;
//             l++;
//         }
//         if(l%2==0){
//             l=l+1;
//         }
        
//         ListNode* q = head;
//         for(int i = 0 ; i<l/2 ; i++){
//             q = q-> next;
//         }
        
//         return q;
        
        ListNode* p = head;
        ListNode* q = head;
        while(p!=NULL && p->next!=NULL){
            p = p->next->next;
            q = q->next ;
        }
        return q;
     }
};