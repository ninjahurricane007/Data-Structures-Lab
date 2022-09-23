#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *lchild;
struct node *rchild;
};
struct node *NewNode,*temp,*ptr,*root=NULL,*parent;
void InsertTree();
void Preorder(struct node *r);
void Inorder(struct node *r);
void Postrder(struct node *r);
int main()
{
int ch=0;
while (ch!=5)
{
printf("\n\n1.Insertion\n2.PreorderTraversal\n3.InorderTraversal\n4.Postorder Traversal\n5.Exit\n");
printf("Enter a choice : ");
scanf("%d",&ch);
switch (ch)
{

case 1:
{
InsertTree();
break;
}
case 2:
{
if (root==NULL)
{
printf("\nTree Empty\n");
}else
{
printf("Preorder Traversal : ");
Preorder(root);
}
break;
}
case 3:
{
if (root==NULL)
{
printf("\nTree Empty\n");
}else
{
printf("Inorder Traversal : ");
Inorder(root);
}
break;
}

case 4:
{
if (root==NULL)
{
printf("\nTree Empty\n");
}else
{
printf("Postorder Traversal : ");
Postrder(root);
}
break;
}
case 5:
{
break;
}
default :
{
printf("Invalid choice");
break;
}
}
}
}
void InsertTree()
{
int n,ele;
printf("Enter the Data to the Node : ");
scanf("%d",&ele);

NewNode = (struct node *)malloc(sizeof(struct node));
NewNode->data = ele;
NewNode->lchild=NULL;
NewNode->rchild=NULL;
if (root==NULL)
{
root = NewNode;
}
else
{
ptr = root;
while (ptr!=NULL)
{
if (ptr->data<ele)
{
parent = ptr;
ptr = ptr->rchild;
}
else if (ptr->data>ele)
{
parent = ptr;
ptr=ptr->lchild;
}
else
{
printf("Element %d already Exist in the tree",ele);
}
}
if (parent->data<ele)

{
parent->rchild=NewNode;
}
else
{
parent->lchild=NewNode;
}

}
}
void Preorder(struct node *r)
{
if (r!=NULL)
{
printf("%d ",r->data);
Preorder(r->lchild);
Preorder(r->rchild);
}
else return;

}
void Inorder(struct node *r)
{
if (r!=NULL)
{
Inorder(r->lchild);
printf("%d ",r->data);
Inorder(r->rchild);
}

else return;
}
void Postrder(struct node *r)
{
if (r!=NULL)
{
Postrder(r->lchild);
Postrder(r->rchild);
printf("%d ",r->data);
}
else return;
}