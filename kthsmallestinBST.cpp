class Solution {
public:
    void pre(TreeNode* root,int k,priority_queue<int>& pq)
    {
        if(!root)
            return;
        pq.push(root->val);
        if(pq.size()>k)
            pq.pop();
        pre(root->left,k,pq);
        pre(root->right,k,pq);
    }
    int kthSmallest(TreeNode* root, int k) {
        priority_queue<int>pq;
        pre(root,k,pq);
        return pq.top();
    }
};
