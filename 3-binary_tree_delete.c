#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_delete - This function deletes an entire binary tree
 * @tree - The binary tree to be deleted
 *
 */
void binary_tree_delete(binary_tree_t *tree)
{
    if (tree == NULL)
        return;
    binary_tree_delete(tree->left);
    binary_tree_delete(tree->right);

    free(tree);
}