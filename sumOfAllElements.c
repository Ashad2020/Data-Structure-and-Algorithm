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

int sum(struct Node *p)
{
   if(p == NULL)
   {
       return 0;
   }
   else
   {
       return sum(p -> next) + p -> data;
   }
}
int main()
{
    int A[] = {3,01,1,1,1,1,1};
    create(A, 7);
    int result = sum(first);
    printf("%d",result);
    return 0;
}

