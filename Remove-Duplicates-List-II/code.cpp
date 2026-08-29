class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode dummy(0);
        dummy.next = head;

        ListNode* prev = &dummy;
        ListNode* curr = head;

        while (curr != nullptr) {
            bool duplicate = false;

            // Check if current value is repeated
            while (curr->next != nullptr && curr->val == curr->next->val) {
                duplicate = true;
                curr = curr->next;
            }

            if (duplicate) {
                // Skip all nodes with the duplicate value
                prev->next = curr->next;
            } else {
                // Current node is unique
                prev = prev->next;
            }

            curr = curr->next;
        }

        return dummy.next;
    }
};
