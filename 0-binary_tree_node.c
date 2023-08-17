#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree node.
 * @parent: A pointer to the parent of the node to create.
 * @value: The value to put in the new node.
 *
 * Return: If an error occurs - NULL.
 *         Otherwise - a pointer to the new node.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{

	binary_tree_t *newt;

	(void) (*newt);
	(void) (value);

	newt = malloc(sizeof(binary_tree_t));
	if (newt == NULL)
		return (NULL);

	newt->n = value;
	newt->parent = parent;
	newt->left = NULL;
	newt->right = NULL;

return (newt);

}
