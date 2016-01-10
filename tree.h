#include <stdio.h>
#include <stdlib.h>

struct tree_node {
	int val;
	struct tree_node* left;
	struct tree_node* right;
	int height;
	int left_height;
	int right_height;
};

#define LEFT_LEFT	0x1
#define LEFT_RIGHT	0x2
#define RIGHT_RIGHT	0x3
#define RIGHT_LEFT	0x4

void rotate(struct tree_node **cur, struct tree_node **parent_ptr);
int height(struct tree_node **cur, struct tree_node **parent_ptr);
void pretty_print(struct tree_node *root);
