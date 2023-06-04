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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* head = nullptr;
        ListNode* loop1 = list1;
        ListNode* loop2 = list2;
        ListNode* loop = nullptr;
        if (loop1 != nullptr && loop2 != nullptr && loop1->val < loop2->val) {
                ListNode* nextNode = new ListNode(loop1->val);
                loop = nextNode;
                loop1 = loop1->next;
            } else if (loop1 != nullptr && loop2 != nullptr && loop2->val <= loop1->val){
                ListNode* nextNode = new ListNode(loop2->val);
                loop= nextNode;
                loop2 = loop2->next;
            } else if (loop1 == nullptr && loop2 != nullptr) {
                ListNode* nextNode = new ListNode(loop2->val);
                loop = nextNode;
                loop2 = loop2->next;
            } else if (loop2 == nullptr && loop1 != nullptr) {
                ListNode* nextNode = new ListNode(loop1->val);
                loop = nextNode;
                loop1 = loop1->next;
            } 
            head = loop;
            ListNode* loopz = loop;
        while (loop1 != nullptr || loop2 != nullptr) {
            if (loop1 != nullptr && loop2 != nullptr && loop1->val < loop2->val) {
                ListNode* nextNode = new ListNode(loop1->val);
                loopz->next = nextNode;
                loop1 = loop1->next;
            } else if (loop1 != nullptr && loop2 != nullptr && loop2->val <= loop1->val){
                ListNode* nextNode = new ListNode(loop2->val);
                loopz->next = nextNode;
                loop2 = loop2->next;
            } else if (loop1 == nullptr && loop2 != nullptr) {
                ListNode* nextNode = new ListNode(loop2->val);
                loopz->next = nextNode;
                loop2 = loop2->next;
            } else if (loop2 == nullptr && loop1 != nullptr) {
                ListNode* nextNode = new ListNode(loop1->val);
                loopz->next = nextNode;
                loop1 = loop1->next;
            }else break;
             loopz = loopz->next;
        }
        return head;
    }
};