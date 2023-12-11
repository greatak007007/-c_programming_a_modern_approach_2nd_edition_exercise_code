/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* repdigit.c (Chapter 8, page 166) */
/* Checks numbers for repeated digits */

#include <stdbool.h>   /* C99 only */
#include <stdio.h>

int main(void)
{
    bool digit_seen[10] = {false};
    int digit;
    long n;

    while (true) {
        printf("Enter a number: ");
        fflush(stdout);
        scanf("%ld", &n);
        if (n <= 0){
            printf("error input\n");
            fflush(stdout);
            break;
        }
        while (n > 0) {
            digit = n % 10;
            if (digit_seen[digit])
                break;
            digit_seen[digit] = true;
            n /= 10;
        }
        if (n > 0){
            printf("Repeated digit\n");
            fflush(stdout);
        }
        else {
            printf("No repeated digit\n");
            fflush(stdout);
        }
        printf("\n");
        fflush(stdout);

    }

    return 0;
}
