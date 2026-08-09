#include <stdlib.h>
#include "binary_trees.h"

static heap_t *node_at_index(heap_t *root, size_t index);
static heap_t *heapify_up(heap_t *node);

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure
 *
 * Return: size of the tree, 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}

/**
 * node_at_index - finds the node at a given 1-based level-order index
 * @root: pointer to the root node of the tree
 * @index: 1-based level-order index of the node to find
 *
 * Return: pointer to the node found at that index
 */
static heap_t *node_at_index(heap_t *root, size_t index)
{
	heap_t *parent;

	if (index == 1)
		return (root);

	parent = node_at_index(root, index / 2);

	if (index % 2 == 0)
		return (parent->left);
	return (parent->right);
}

/**
 * heapify_up - moves a node up the tree until Max Heap order is restored
 * @node: pointer to the newly inserted node
 *
 * Return: pointer to the node's final position after swapping
 */
static heap_t *heapify_up(heap_t *node)
{
	int tmp;

	while (node->parent != NULL && node->parent->n < node->n)
	{
		tmp = node->parent->n;
		node->parent->n = node->n;
		node->n = tmp;
		node = node->parent;
	}

	return (node);
}

/**
 * heap_insert - inserts a value into a Max Binary Heap
 * @root: double pointer to the root node of the Heap
 * @value: value to store in the node to be inserted
 *
 * Return: pointer to the inserted node, or NULL on failure
 */
heap_t *heap_insert(heap_t **root, int value)
{
	heap_t *parent, *new_node;
	size_t size, index;

	if (root == NULL)
		return (NULL);

	if (*root == NULL)
	{
		*root = binary_tree_node(NULL, value);
		return (*root);
	}

	size = binary_tree_size(*root);
	index = size + 1;
	parent = node_at_index(*root, index / 2);

	if (index % 2 == 0)
		new_node = parent->left = binary_tree_node(parent, value);
	else
		new_node = parent->right = binary_tree_node(parent, value);

	if (new_node == NULL)
		return (NULL);

	return (heapify_up(new_node));
}
