class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {

        // Empty list or only one node
        if (head == nullptr || head->next == nullptr) {
            return head;
        }

        // Find length and tail
        int n = 1;
        ListNode* tail = head;

        while (tail->next != nullptr) {
            tail = tail->next;
            n++;
        }

        // Remove unnecessary rotations
        k = k % n;

        if (k == 0) {
            return head;
        }

        // Make the list circular
        tail->next = head;

        // Find new tail
        int steps = n - k - 1;

        ListNode* newTail = head;

        for (int i = 0; i < steps; i++) {
            newTail = newTail->next;
        }

        // New head is after new tail
        ListNode* newHead = newTail->next;

        // Break the circle
        newTail->next = nullptr;

        return newHead;
    }
};