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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

//         ListNode *res = new ListNode();
//         ListNode *orgl1 = l1;
//         ListNode *orgl2 = l2;
//         ListNode *orgres = res;
//         int carry = 0;
//         int index = 1;
//         // loop each linked list if not null
//         while(l1 != nullptr && l2 !=nullptr){
//             // cout << l1->val;
//             // cout << l2->val;
//             // cout << "\n";
//             ListNode *add_sum = new ListNode();
//             // sum val + carry
//             add_sum->val = l1->val +l2->val + carry;
//             carry = 0;

//             // set carry if sum > 10
//             if (add_sum->val >= 10){
//                 add_sum->val = add_sum->val - 10;
//                 carry = 1;
//             }

//             // pointer to next node
//             if (index == 1){
//                 res = add_sum;
//                 res = res->next;
//                 index = 0;
//             }
//             else{
//                 res = add_sum;
//                 res = res->next;
//             }
//             cout << add_sum->val;
//             cout << "\n";
//             l1 = l1->next;
//             l2 = l2->next;

//         }
//         // length of l1 > length of l2
//         if(l2 == nullptr){
//             res = l1;
//         }
//         // length of l2 > length of l1
//         if(l1 == nullptr){
//             res = l2;
//         }
//         ListNode *cur = orgres;
//         string result = "";
//         while(cur != nullptr){
//             cout << cur->val;
//             result = to_string(cur->val) + result;
//             cur = cur->next;
//         }
//         cout << result;
//         return orgres;

//     }
        ListNode *res = new ListNode();
        ListNode *ptr = res;
        int carry = 0;

        while(l1 != nullptr || l2 != nullptr || carry){
            int sum = 0;
            // add l1->val
            if(l1 != nullptr){
                sum += l1->val;
                l1 = l1->next;
            }
            // add l2->val
            if(l2 !=nullptr){
                sum += l2->val;
                l2 = l2->next;
            }
            
            sum += carry;
            carry = sum / 10;
            ListNode *tmp = new ListNode(sum%10);
            res->next = tmp;
            res = res->next;
        }
        return ptr->next;
    }
};
