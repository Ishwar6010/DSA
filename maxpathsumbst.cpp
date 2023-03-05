/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int solve(TreeNode* root,int maxi)
    {
        if(!root)
            return 0;
        int l=solve(root->left,maxi);
        int r=solve(root->right,maxi);
        int val=root->val;
        maxi=max(maxi,l+r+val);
        return max(l,r)+val;
    }
    int maxPathSum(TreeNode* root) {
        int maxi=0;
        solve(root,maxi);
        return maxi;
    }
};
