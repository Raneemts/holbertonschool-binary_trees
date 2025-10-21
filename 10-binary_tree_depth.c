#include"binary_trees.h"
/**
 * binary_tree_depth - a function that measures the depth of a node in a binary tree
 * @tree:  A pointer to the root node of the tree to measure the height.
 *
 * return: if tree is NULL, otherwise return 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
if (tree == NULL || tree->parent == NULL)
return (0);
return (1 + binary_tree_depth(tree->parent));
}
