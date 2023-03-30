#ifndef RECCHECK
//if you want to add any #includes like <iostream> you must do them here (before the next endif)
#include <algorithm>
#endif

#include "equal-paths.h"
using namespace std;


// You may add any prototypes of helper functions here
int height(Node* node) {
    if (node == nullptr) {
        return 0;
    } else {
        return 1 + max(height(node->left), height(node->right));
    }
}

bool equalPaths(Node * root)
{
    // Add your code below
  if(root==nullptr){
    return true;
  }else if(root->left == nullptr && root->right == nullptr){
    return true;
  }else{
    int lHeight = height(root->left);
    int rHeight = height(root->right);
    return (equalPaths(root->left)&&equalPaths(root->right) && (lHeight==rHeight));
  }
}

