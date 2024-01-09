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
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> arr, brr;
        helper(root1, arr);
        helper(root2, brr);
        return (arr == brr);
    }
    void helper(TreeNode* node, vector<int>& vec)
    {
        if(node == NULL)
            return;
        if(node -> left == NULL && node -> right == NULL)
            vec.push_back(node -> val);
        helper(node -> left, vec);
        helper(node -> right, vec);
    }
};