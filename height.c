#include "tree.h"

extern struct tree_node *rootptr;

int height(struct tree_node **cur, struct tree_node **parent)
{
	int left_height, right_height;

	if (*cur == NULL)
		return 0;

	left_height = height(&(*cur)->left, cur) + 1;
	right_height = height(&(*cur)->right, cur) + 1;

	if (abs(left_height - right_height) > 1) {
		rotate(cur, parent);
		left_height = height(&(*cur)->left, cur) + 1;
		right_height = height(&(*cur)->right, cur) + 1;
	}

	(*cur)->left_height = left_height;
	(*cur)->right_height = right_height;
	(*cur)->height = left_height > right_height ? left_height : right_height;

	printf("val %d height %d\n", (*cur)->val, (*cur)->height);
	return (*cur)->height;
}
