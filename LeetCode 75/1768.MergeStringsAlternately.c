/*
1768. Merge Strings Alternately
You are given two strings word1 and word2. Merge the strings by adding letters in alternating order, starting with word1. 
If a string is longer than the other, append the additional letters onto the end of the merged string.
Return the merged string.

Example 1:
Input: word1 = "abc", word2 = "pqr"
Output: "apbqcr"
Example 2:
Input: word1 = "ab", word2 = "pqrs"
Output: "apbqrs"
Example 3:
Input: word1 = "abcd", word2 = "pq"
Output: "apbqcd"

*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char * mergeAlternately(char * word1, char * word2){
    int len1 = strlen(word1);
    int len2 = strlen(word2);
    int size = len1 + len2;
    char *result = malloc(size + 1 * sizeof(char));

    int tmpIndex = 0;
    int resultIndex = 0;
    while (tmpIndex < len1 || tmpIndex < len2){
        if(tmpIndex < len1){
            result[resultIndex] = word1[tmpIndex];
            resultIndex++;
        }

        if(tmpIndex < len2){
            result[resultIndex] = word2[tmpIndex];
            resultIndex++;
        }
        tmpIndex++;
    }
    result[resultIndex] = '\0';
    
    return result;
}

int main() {
    char word1[] = "abc";
    char word2[] = "pqr";
    char *merged = mergeAlternately(word1, word2);
    printf("Merged string: %s\n", merged);
    free(merged); // Don't forget to free the allocated memory
    return 0;
}