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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        queue<pair<TreeNode*,pair<int,int>>>q;
        map<int, map < int, multiset < int >>>mpp;
        q.push({root,{0,0}});
        while(q.size()>0)
        {
            auto p=q.front();
            q.pop();
            int x=p.second.first;
            int y=p.second.second;
            mpp[x][y].insert(p.first->val);
            if(p.first->left)
            {
                q.push({p.first->left,{x-1,y+1}});
            }
            if(p.first->right)
            {
                q.push({p.first->right,{x+1,y+1}});
            }
        }
        vector<vector<int>>res;
        for(auto it:mpp)
        {
            vector<int>c;
            for(auto i:it.second)
            {
                c.insert(c.end(),i.second.begin(),i.second.end());
            }
            res.push_back(c);
        }      
        return res;
    }
};
