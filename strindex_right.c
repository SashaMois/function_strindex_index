#include <stdio.h>
#include <string.h>

/*
 * strindex_right(): return index of the rightest entry of string 't' in
 * 's' or -1 if so string hasn't entryed in 's'.
 */

int strindex_right(char main_string[], char pattern[]);

int strindex_right(char s[], char t[])
{
    int i; /* count for 's' */
    int j; /* second count for 's' */
    int k; /* count for 't' */

    for (i = strlen(s) - 1; i != -1; --i) {
        for (j = i, k = 0; s[j] == t[k] && t[k] != '\0'; ++k, ++j)
            ;
        if (t[k] == '\0')
            return i;
    }

    return -1;
}