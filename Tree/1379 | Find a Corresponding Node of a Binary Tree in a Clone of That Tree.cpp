class Solution 
{
    public:
        TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) 
        {
            if(cloned == NULL)
            {
                return NULL;
            }
            if(cloned->val == target->val)
            {
                return cloned;
            }
          
            TreeNode * l = getTargetCopy(original, cloned->left, target);
            if(l != NULL)
            {
                return l;
            }

            TreeNode * r = getTargetCopy(original, cloned->right, target);
            if(r != NULL)
            {
                return r;
            }
            return NULL;
        }
};
