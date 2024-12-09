/*
345. Reverse Vowels of a String

Given a string s, reverse only all the vowels in the string and return it.
The vowels are 'a', 'e', 'i', 'o', and 'u', and they can appear in both lower and upper cases, more than once. 

Example 1:
Input: s = "IceCreAm"
Output: "AceCreIm"

Explanation:
The vowels in s are ['I', 'e', 'e', 'A']. On reversing the vowels, s becomes "AceCreIm".

Example 2:
Input: s = "leetcode"
Output: "leotcede"

Constraints:
1 <= s.length <= 3 * 105
s consist of printable ASCII characters.
*/

#include <string.h>

char* reverseVowels(char* s) {
    int len = strlen(s);
    int left = 0;
    int right = len - 1;
    char temp;
    while(left < right){        
        while(left < right && strchr("aeiouAEIOU", s[left]) == NULL){
            left++;
        }
        while(left < right && strchr("aeiouAEIOU", s[right]) == NULL){
            right--;
        }
        temp = s[left];
        s[left] = s[right];
        s[right] = temp;
        left++;
        right--;
    }
    return s;
}