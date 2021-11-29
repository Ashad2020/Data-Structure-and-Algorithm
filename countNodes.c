#include<stdio.h>

struct Node
{
    int data;
    struct Node *next;
}* first = NULL;

void create(int A[], int n)
{
   int i;
   struct Node *t, *last;
   first =(struct Node *)malloc(sizeof(struct Node));
   first-> data = A[0];
   first-> next = NULL;
   last = first;

   for(i = 1; i< n; i++)
   {
       t =(struct Node *)malloc(sizeof(struct Node));
       t -> data = A[i];
       t -> next = NULL;
       last -> next = t;
       last = t;
   }
}

int countNodes (struct Node *p)
{
   if(p == NULL)
   {
       return 0;
   }
   else
   {
       return countNodes(p -> next) + 1;
   }
}
int main()
{
    int A[] = {0,01,1,2,3,4,6};
    create(A, 7);
    int result = countNodes(first);
    printf("%d",result);
    return 0;
}
