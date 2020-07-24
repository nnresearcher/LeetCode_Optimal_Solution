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
    bool hasCycle(ListNode *head) {
        // judge null pointer input parameter
        if (head == NULL || head->next == NULL) {
            return false;
        }
        // use fast and slow pointers
        ListNode *fast = head->next;
        ListNode *slow = head;
        // If the fast pointer catches up with the slow pointer, then there is a loop
        while (fast != slow) {
            // If the fast pointer is null, there is no ring
            if (fast->next == NULL || fast->next->next == NULL) {
                return false;
            }
            // The 'fast pointer' takes two steps and the 'slow pointer' takes one step
            fast = fast->next->next;
            slow = slow->next;
        }
        return true;
    }
};