
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *nxt;
};

void print_rev (struct node *);
void print (struct node *);
void create_new_node (struct node *, int );
void insert(struct node ** head_ref, int new_data);


int main ()
{
    struct node *head = NULL;
    
    printf("Enter elements:");
    int a[5],i;
    
    for(i=0;i<5;i++)
     { 
       scanf("%d",&a[i]);
       
          insert (&head,a[i]);
     }
     
     
    printf ("created list : ");
    
    print (head);
    
    printf ("\n reverse order : ");
    print_rev (head);
    printf ("\n");
    
    return 0;
}

void print_rev (struct node *head)
 {
    if (head == NULL)
    {
        return;
    }

    
    print_rev (head -> nxt);
  
    printf ("%d ", head -> data);
}


void print (struct node *head)
  {
    if (head == NULL)
     {
        return;
    }
    printf ("%d ", head -> data);
    print (head -> nxt);
    
  }


void insert(struct node ** head_ref, int new_data)
  {
    struct node * new_node = (struct node *) malloc (sizeof (struct node));
    
    
    new_node -> data = new_data;
    new_node -> nxt = (*head_ref);
    (*head_ref) = new_node;
}
