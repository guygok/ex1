/******************
Name: Guy Kejzman
ID:
Assignment: EX1  2026 - Counting Bases and bitwise operations
*******************/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// REMIDER : YOU CANT USE ANY CONTROL FLOW OPERATIONS OR FUNCTIONS, ONLY BITWISE. not even "==, &&, ||, !="

int main()
{

    // Ascii
    printf("Ascii:\n");
    /*. Scan one character from the user.
        Then, refer to it as an integer.
        a. Print its value.
        b:
        Print “0”, if its integer representation is even.
        print “1” if its integer representation is odd. */
    char ch;
    printf("Please enter a character\n");
    scanf(" %c", &ch);
	printf("Its numerical value is: %d\n", ch);
    printf("0 for even, 1 for odd: %d\n", ch & 1);

        // 2's complement and other representations
    printf("\n2's complement to other representations:\n");
    /*. Scan a negative integer. [2’s complement].
        Print its value in 1’s complement.
        Print its value as unsigned. */
    int n;
    printf("Please enter a negative integer\n");
	scanf(" %d", &n);
    printf("1's complement: %d\n", n + 1);
	printf("Unsigned: %u\n", (unsigned)n);

        // Shifting right and left
    printf("\nShifting right and left:\n");
    /*. Scan 3 integers.
        The first one - the value you will play with.
        The second and the third - how much to shift right and left, respectively.
        Print the value after shifting right and then shifting left. */
	int value, shiftRight, shiftLeft;
	printf("Please enter 3 integers\n");
	scanf(" %d %d %d", &value, &shiftRight, &shiftLeft);

	printf("After shifting right and left: %d\n", value >> shiftRight << shiftLeft);

    // Even - Odd
    printf("\nEven - Odd:\n");
    /* Scan 3 Integers.
    If at least two of them are even - print 0.
    If at least two of them are odd - print 1. */
	int k, m, j;
	printf("Please enter three integers\n");
	scanf(" %d %d %d", &k, &m, &j);
	int even1 = (k & 1) ^ 1;
	int even2 = (m & 1) ^ 1;
	int even3 = (j & 1) ^ 1;
	int evenCount = even1 + even2 + even3;
	printf("0 - most of them are even, 1 - most of them are odd: %d\n", (evenCount >= 2) ? 0 : 1);

    // Different Bases
    printf("\nDifferent Bases:\n");
    /*  Scan two numbers:
        One in octal base, one in Hexadecimal base.
        Print their LSB’s.
        Print their MSB’s. */
	unsigned int octalNum, hexNum;
	printf("Please enter two numbers in octal and hexadecimal bases:\n");
	scanf(" %o %x", &octalNum, &hexNum);
	printf("LSBs: %u, %u\n", octalNum & 1, hexNum & 1);
	printf("MSBs: %u, %u\n", (octalNum >> 31) & 1, (hexNum >> 31) & 1);

    printf("Bye!");

    return 0;
}
