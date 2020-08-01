/**
 * Definition for singly-linked list.

 * class ListNode {

 * int val;

 * ListNode next;

 * ListNode(int x) {

 * val = x;

 * next = null;

 * }

 * }
 */
public class Solution {
    public boolean hasCycle(ListNode head) {
        if (head == null || head.next == null) {
            return false;
        }
        // Define two pointers, M is slow pointer, n is fast pointer.
        ListNode m = head;
        ListNode n = head.next;
        while (n != null && n.next != null) {
            if (m == n) {
                return true;
            } else {
                ;
            }
            // The slow pointer advances one step at a time, and the fast pointer takes two steps.
            // If there is a closed loop, the fast pointer and the slow pointer are finally equal.
            m = m.next;
            n = n.next.next;
        }
        return false;
    }
}
 
 