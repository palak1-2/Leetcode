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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode dummy(0);
        dummy.next = head;

        ListNode *L = &dummy;
        ListNode *R = &dummy;

        for (int i = 0; i <= n; i++) {
            R = R->next;
        }

        while (R != nullptr) {
            L = L->next;
            R = R->next;
        }

        L->next = L->next->next;

        return dummy.next;
    }
};
