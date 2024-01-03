#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
    int data;
    struct Node*left;
    struct Node*right;
}node;
node* create(){
    node* root=(node*)(malloc(sizeof(node)));
    int x;
    scanf("%d",&x);
    if(x==-1){
        return 0;
    }
    printf("enter left child");
    root->left=create();
     printf("enter right child");
    root->right=create();
    
}
void inOrder(node *root){
    if(root==0){
        return;
    }
    else{
       inOrder(root->left); 
        printf("%d->",root->data);
        inOrder(root->right);
    }
}

void preOrder(node *root){
    if(root==0){
        return;
    }
    else{ 
        printf("%d->",root->data);
        preOrder(root->left);
        preOrder(root->right);
       
        
    }
}

void postOrder(node *root){
    if(root==0){
        return;
    }
    else{
        postOrder(root->left);
        postOrder(root->right);
        printf("%d->",root->data);
        
    }
}


int main(){
    node* root=create();
    inOrder(root);
}