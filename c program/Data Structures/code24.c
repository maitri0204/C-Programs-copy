#include<stdio.h>
#include<stdlib.h>
struct node
{
   int data;
   struct node* left;
   struct node* right;
};
 
struct node* createnode(int x){
   struct node* root = (struct node*)malloc(sizeof(struct node));
   root->data=x;
   root->left=NULL;
   root->right=NULL;
   return root;
}
void postorder(struct node* root)
{
 if(root==NULL)
   return;
 
 postorder(root->left);
 postorder(root->right);
 printf("%d",root->data);
}
void main()
{
   struct node* root=createnode(1);
   root->left=createnode(2);
   root->right=createnode(3);
   (root->right)->left=createnode(4);
   (root->right)->right=createnode(5);
   postorder(root);
}