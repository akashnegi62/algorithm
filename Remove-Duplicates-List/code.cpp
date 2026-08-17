// Input: head = [1,2,3,3,4,4,5]
// Output: [1,2,5]

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {

        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        ListNode* prev = dummy;
        ListNode* current = head;

        while (current != nullptr) {

            // Found a duplicate
            if (current->next != nullptr &&
                current->val == current->next->val) {

                int duplicateValue = current->val;

                // Skip all nodes with this value
                while (current != nullptr &&
                       current->val == duplicateValue) {

                    current = current->next;
                }

                // Connect previous unique node
                // directly to the next different value
                prev->next = current;
            }

            else {
                // Current value is unique
                prev = current;
                current = current->next;
            }
        }

        return dummy->next;
    }
};