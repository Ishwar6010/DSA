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
    vector<string>res;
    void f(TreeNode* root,string s)
    {
        if(!root)
        {
            return ;
        }
        s.append(to_string(root->val));
        if(!root->left&&!root->right)
        {
            res.push_back(s);
            s.clear();
            return;
        }
        f(root->left,s+"->");
        f(root->right,s+"->");
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        string s="";
        f(root,s);
        return res;
    }
};
