*This project has been created as part of the 42 curriculum by fal-edlb.*

# Libft

## Description

Libft is a custom C static library (libft.a) created as part of the 42 school curriculum. The goal of this project is to recreate standard C library functions, build utility functions for memory and string manipulation, and implement functions to handle linked lists.

This library serves as a foundational tool that will be reused in future C projects throughout the 42 curriculum.

## Instructions

### Compilation

The project is compiled using the provided Makefile. It compiles all source files with cc using the required flags -Wall -Wextra -Werror.

To build the static library libft.a, run:

make

### Makefile Rules

* make or make all: Compiles the source files and creates libft.a.

* make clean: Deletes all generated object files (.o).

* make fclean: Deletes all object files and the libft.a library file.

* make re: Recompiles the entire library from scratch (fclean followed by all).

### Usage

To use libft.a in your C programs:

1. Include the header in your C source files:

#include "libft.h"

2. Compile your code linking the compiled library:

cc -Wall -Wextra -Werror main.c -L. -lft -o program

## Detailed Description of Functions

### Part 1 - Libc Functions

Re-implementations of standard C library functions (prefixed with ft_):

* ft_isalpha - Checks if character is alphabetic.

* ft_isdigit - Checks if character is a digit.

* ft_isalnum - Checks if character is alphanumeric.

* ft_isascii - Checks if character belongs to the ASCII set.

* ft_isprint - Checks if character is printable.

* ft_strlen - Calculates the length of a string.

* ft_memset - Fills memory with a constant byte.

* ft_bzero - Writes zeros to a byte string.

* ft_memcpy - Copies memory area.

* ft_memmove - Copies memory area with handling for overlap.

* ft_strlcpy - Size-bounded string copying.

* ft_strlcat - Size-bounded string concatenation.

* ft_toupper - Converts character to uppercase.

* ft_tolower - Converts character to lowercase.

* ft_strchr - Locates first occurrence of character in string.

* ft_strrchr - Locates last occurrence of character in string.

* ft_strncmp - Compares two strings up to n characters.

* ft_memchr - Scans memory for a character.

* ft_memcmp - Compares memory areas.

* ft_strnstr - Locates a substring in a string with limited length.

* ft_atoi - Converts a string to an integer.

* ft_calloc - Allocates memory and initializes bytes to zero.

* ft_strdup - Duplicates a string using dynamic memory.

### Part 2 - Additional Functions

Utility functions for string manipulation, memory creation, and output:

* ft_substr - Extracts a substring from a string.

* ft_strjoin - Concatenates two strings into a new string.

* ft_strtrim - Trims specified characters from start and end of a string.

* ft_split - Splits a string into an array of strings using a delimiter.

* ft_itoa - Converts an integer into a string representation.

* ft_strmapi - Applies a function to each character of a string to build a new string.

* ft_striteri - Applies a function to each character of a string in place.

* ft_putchar_fd - Outputs a character to a given file descriptor.

* ft_putstr_fd - Outputs a string to a given file descriptor.

* ft_putendl_fd - Outputs a string followed by a newline to a given file descriptor.

* ft_putnbr_fd - Outputs an integer to a given file descriptor.

### Part 3 - Linked List Functions

Functions for manipulating singly linked lists using the t_list structure defined in libft.h:

typedef struct s_list
{
void            *content;
struct s_list   *next;
}   t_list;

* ft_lstnew - Creates a new list node.

* ft_lstadd_front - Adds a node at the beginning of the list.

* ft_lstsize - Counts the number of nodes in the list.

* ft_lstlast - Returns the last node of the list.

* ft_lstadd_back - Adds a node at the end of the list.

* ft_lstdelone - Frees the content and node using a delete function.

* ft_lstclear - Deletes and frees a node and all its successors.

* ft_lstiter - Iterates through a list and applies a function to each node's content.

* ft_lstmap - Creates a new list by applying a function to each node's content.

## Resources

### References

* Linux Programmer's Manual (man 3 pages) for exact specifications of standard C library functions.

* Apple/BSD Library Manual Pages (man strlcpy, man strlcat) for BSD-specific function prototypes and behavior.

* ISO/IEC 9899:1999 (C99 Language Specification) for standard definitions of data types, memory alignment, and system behavior.

* GNU C Library (glibc) Documentation for comparative analysis of function behavior between Linux glibc and BSD libc.

* Valgrind Documentation (Memcheck Tool) for memory leak detection, heap management analysis, and tracking invalid reads/writes.

* 42 Norminette Rules & Coding Standard for compliance with 42 code style guidelines.

### AI Usage Statement

In strict accordance with the 42 curriculum AI guidelines, artificial intelligence was used strictly as an educational learning assistant and formatting aid. Below is a detailed breakdown of how AI was used across the project:

* Concept Clarification & Theoretical Guidance: AI was consulted to clarify low-level C behaviors, such as memory overlap handling in ft_memmove, pointer arithmetic mechanics, and understanding standard libc return values for edge cases (e.g., calloc allocation of size 0).

* Edge Case Analysis & Test Scenario Planning: AI helped brainstorm edge-case scenarios to test functions against potential memory leaks, NULL pointer inputs, and integer overflow/underflow situations (such as handling INT_MIN in ft_itoa and ft_atoi).

* Debugging Assistance: When encountering unexpected behavior or memory leaks during testing (e.g., properly freeing allocated substrings in ft_split when an allocation fails mid-process), AI was used to guide troubleshooting and explain theoretical causes without providing direct solution code.

* Documentation Generation: AI was used to structure and format this README.md file in accordance with 42 README evaluation requirements.

All core logic, algorithms, and function code were implemented and tested independently to ensure a complete understanding during peer evaluation defenses.