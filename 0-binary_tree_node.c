#include "binary_trees.h"
/**
 * binary_tree_node - function that creates a binary tree node
 * @param pointer to parent node
 * @param value inside each node
 * @return node created
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node  = malloc(sizeof(binary_tree_t));
	if (!node)
		return NULL;

	node->parent = parent;
	node->n = value;
	node->right = NULL;
	node->left = NULL;

	return (node);
}

