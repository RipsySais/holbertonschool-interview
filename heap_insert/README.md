# Heap insert

## Description
This project implements binary tree node creation and Max Binary
Heap insertion as part of the "Binary trees" technical interview
exercises.

## Files

### binary_trees.h
Header file containing the `binary_tree_s` structure, related
typedefs (`binary_tree_t`, `heap_t`), and function prototypes.

### 0-binary_tree_node.c
Contains the function `binary_tree_node(binary_tree_t *parent, int value)`
which creates a new binary tree node and returns its address, or
NULL on failure.

### 1-heap_insert.c
Contains the function `heap_insert(heap_t **root, int value)` which
inserts a value into a Max Binary Heap, respecting both the complete
tree shape and the Max Heap ordering property. Returns a pointer to
the inserted node, or NULL on failure.

## Requirements
- Compiled on Ubuntu 14.04 LTS with gcc 4.8.4
- Flags: -Wall -Werror -Wextra -pedantic
- Betty style
- No global variables, max 5 functions per file (6 allowed for heap_insert)
