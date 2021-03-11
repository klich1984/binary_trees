#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that insert a binary tree node
 * @parent: Pointer to the parent node
 * @value: Value
 * Return: - Pointer
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	if (parent->left != NULL)
	{
		parent->left->parent = new_node;
		new_node->left = parent->left;
		parent->left = new_node;
		new_node->parent = parent;
	}
	else
		parent->left = new_node;

	return (new_node);
}
