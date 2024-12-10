/*
1768. Merge Strings Alternately

You are given two strings word1 and word2. 
Merge the strings by adding letters in alternating order, starting with word1. 
If a string is longer than the other, append the additional letters onto the end of the merged string.
Return the merged string.

Example 1:

Input: word1 = "abc", word2 = "pqr"
Output: "apbqcr"
Explanation: The merged string will be merged as so:
word1:  a   b   c
word2:    p   q   r
merged: a p b q c r
Example 2:

Input: word1 = "ab", word2 = "pqrs"
Output: "apbqrs"
Explanation: Notice that as word2 is longer, "rs" is appended to the end.
word1:  a   b 
word2:    p   q   r   s
merged: a p b q   r   s
Example 3:

Input: word1 = "abcd", word2 = "pq"
Output: "apbqcd"
Explanation: Notice that as word1 is longer, "cd" is appended to the end.
word1:  a   b   c   d
word2:    p   q 
merged: a p b q c   d

*/

char * mergeAlternately(char * word1, char * word2){
    int len1 = strlen(word1);
    int len2 = strlen(word2);
    int size = len1 + len2;
    char *result = malloc(size + 1 * sizeof(char));
    int wordIndex = 0;
    int resultIndex = 0;

    while(wordIndex < len1 || wordIndex < len2){
        if(wordIndex < len1){
            result[resultIndex] = word1[wordIndex];
            resultIndex++;

        }
        if (wordIndex < len2){
            result[resultIndex] = word2[wordIndex];
            resultIndex++;
        }
        wordIndex++;
    }
    result[resultIndex] = '\0';
    return result;
}