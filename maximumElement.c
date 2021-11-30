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
    int max_number = -32768;
    while(p)
    {
        if(p -> data > max_number)
        {
            max_number = p -> data;
        }
        p = p -> next;
    }
    return max_number;
}
int main()
{
    int A[] = {9,01,1,2,3,4};
    create(A, 6);
    int result = max(first);
    printf("%d", result);
    return 0;
}
