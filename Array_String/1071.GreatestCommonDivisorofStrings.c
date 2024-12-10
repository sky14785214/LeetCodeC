/*
1071. Greatest Common Divisor of Strings

For two strings s and t, we say "t divides s" if and only if s = t + t + t + ... + t + t (i.e., t is concatenated with itself one or more times).

Given two strings str1 and str2, return the largest string x such that x divides both str1 and str2.

 

Example 1:

Input: str1 = "ABCABC", str2 = "ABC"
Output: "ABC"
Example 2:

Input: str1 = "ABABAB", str2 = "ABAB"
Output: "AB"
Example 3:

Input: str1 = "LEET", str2 = "CODE"
Output: ""
 

Constraints:

1 <= str1.length, str2.length <= 1000
str1 and str2 consist of English uppercase letters.
*/

char* gcdOfStrings(char* str1, char* str2) {
    int index = 0;
    while(str1[index] != '\0' && str2[index] != '\0'){
        if (str1[index] == str2[index]){
            index++;
        }else{
            return "";
        }
    }
    /*
    字串長度不同
    */
   if (str1[index] == '\0' && str2[index] == '\0'){
        return str1;
   }else{
        if (str1[index] == '\0'){
            return gcdOfStrings(str1, str2+index); // str2 遞迴接續找
        }else{
            return gcdOfStrings(str1 + index, str2); // str1 遞迴接續找
        }
   }
}