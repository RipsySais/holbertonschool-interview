# Insert in sorted linked list

## Description
This project solves the "Insert in sorted linked list" technical
interview problem: given a sorted singly linked list, insert a new
number at the correct position to keep the list sorted.

## Files

### 0-insert_number.c
Contains the function `insert_node(listint_t **head, int number)`
which inserts `number` into a sorted singly linked list and returns
the address of the new node, or NULL if it failed.

### lists.h
Header file containing the `listint_t` structure and function
prototypes.

## Requirements
- Compiled on Ubuntu 14.04 LTS with gcc 4.8.4
- Flags: -Wall -Werror -Wextra -pedantic
- Betty style
- No global variables, max 5 functions per file
