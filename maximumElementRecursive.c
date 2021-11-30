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

int max(struct Node *p)
{
    int MIN_INT = -32768, x = 0;
    if (p == NULL)
    {
        return MIN_INT;
    }
    else
    {
        x = max(p -> next);
        if (p -> data < x)
        {
            return x;
        }
        else
        {
            return p -> data;
        }
    }
    return x;
}
int main()
{
    int A[] = {0,01,1,2,3,4};
    create(A, 6);
    int result = max(first);
    printf("%d", result);
    return 0;
}
