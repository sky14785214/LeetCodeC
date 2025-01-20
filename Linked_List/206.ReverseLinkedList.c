/*
206. Reverse Linked List
Given the head of a singly linked list, reverse the list, and return the reversed list.
Example 1:
1 -> 2 -> 3 -> 4 -> 5
          |
          v
5 -> 4 -> 3 -> 2 -> 1

Input: head = [1,2,3,4,5]
Output: [5,4,3,2,1]

Example 2:
Input: head = [1,2]
Output: [2,1]
Example 3:
    1 -> 2
     |
     v
    2 -> 1  
Input: head = []
Output: []
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
struct ListNode{
    int i ;
    struct ListNode *next;
};
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode *prev = NULL; // previous node
    struct ListNode *current = head; // current node
    struct ListNode *next = NULL; // next node

    while ((current != NULL)){
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    
}