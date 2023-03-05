int findCeil(Node* root, int input) {
    if (root == NULL) return -1;
    int res=-1;
    while(root)
    {
        if(root->data==input)
        {
            res=root->data;
            return res;
        }    
        else if(root->data>input)
        {
            res=root->data;
            root=root->left;
        }
        else
            root=root->right;
    }
    return res;
}
