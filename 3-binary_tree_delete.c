#include "binary_trees.h"

/**
 * binary_tree_delete - Function that deletes a binary tree.
 * @tree: pointer to the root node of the tree
 * Description: If tree is NULL do nothing
 * Return: nothing to return
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
