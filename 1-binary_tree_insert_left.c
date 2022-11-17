#include "binary_trees.h"
/**
 * binary_tree_insert_left - function that inserts a node as the left-child of another node
 * @param pointer to parent node
 * @param value inside each node
 * @return node address
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (!parent)
		return NULL;

	node = malloc(sizeof(binary_tree_t));
	if (!node)
		return NULL;

	node->n = value;
	node->parent = parent;
	node->left = parent->left;
	parent->left = node;

	if (node->left)
		node->left->parent = node;

	return(node);
}
