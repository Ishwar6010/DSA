int floor(Node* root, int x) {
    // Code here
    if (root == NULL) return -1;
    int res=-1;
    while(root)
    {
        if(root->data==x)
        {
            res=root->data;
            return res;
        }    
        else if(root->data<x)
        {
            res=root->data;
            root=root->right;
        }
        else
            root=root->left;
    }
    return res;
}
