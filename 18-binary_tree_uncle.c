#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_uncle - This function finds the uncle of a node
 * @node: Pointer to the node to find the uncle
 * Return: Pointer to the uncle node or NULL if node has no uncle or node is NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
    if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
        return (NULL);

    if (node->parent->parent->left == node->parent)
        return (node->parent->parent->right);

    if (node->parent->parent->right == node->parent)
        return (node->parent->parent->left);

    return (NULL);
}