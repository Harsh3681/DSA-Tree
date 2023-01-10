Given the root of a binary tree, return the inorder traversal of its nodes' values.

 

Example 1:


Input: root = [1,null,2,3]
Output: [1,3,2]
Example 2:

Input: root = []
Output: []
Example 3:

Input: root = [1]
Output: [1]
 

Constraints:

The number of nodes in the tree is in the range [0, 100].
-100 <= Node.val <= 100


code

void inorder(vector<int> *v,TreeNode* root)
{   if(root==NULL)
        return ;
    if(root->left!=NULL)
        inorder(v,root->left);
    v->push_back(root->val);
    if(root->right!=NULL)
        inorder(v,root->right);
    
    return;
}


class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
    
        vector<int> v;
        inorder(&v,root);
        return v;

        
    }
};
