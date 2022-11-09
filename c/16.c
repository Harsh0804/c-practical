#include<stdlib.h>
#include<stdio.h>
struct node
{
    struct node* prev;
    int data;
    struct node* next;
};
 
struct node* head = NULL;


void list_sort();
void delete_from_position();

struct node* create_node(int);
int getPosition();

void empty_list_message();
void memory_error_message();
void invalid_position_message();
int main()
{
    char user_active = 'Y';
    int user_choice;
    int data, position;
 
    while (user_active == 'Y' || user_active == 'y')
    {
        {
    int n;
    printf("Enter the number of elements you want to enter: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int x;
        printf("Enter the element: ");
        scanf("%d",&x);
        struct node* temp = (struct node*)malloc(sizeof(struct node));
        temp->data = x;
        temp->next = NULL;
        temp->prev = NULL;
        if(head == NULL){
            head = temp;
        }
        else{
            struct node* temp1 = head;
            while(temp1->next != NULL){
                temp1 = temp1->next;
            }
            temp1->next = temp;
            temp->prev = temp1;
        }
    }
    struct node* temp = head;
    while(temp != NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }
}
        printf("\n1. Sort the list");
        printf("\n2. Delete a node from the given position");
        printf("\nEnter your choice: ");
        scanf("%d", &user_choice);
        switch(user_choice)
        {
            case 1:
                printf("\nSorting the list\n");
                list_sort();
                break;
 
            case 2:
                printf("\nDelete a node from given position\n");
                position = getPosition();
                delete_from_position(position);
                break;
            }
 
        printf("\n...............................\n");
        printf("\nDo you want to continue? (Y/N) : ");
        fflush(stdin);
        scanf(" %c", &user_active);
    }
 
    return 0;    
}

void list_sort()
{
    if (head == NULL)
    {
       empty_list_message();
       return;
    }
    struct node* temp1 = head;
    struct node* temp2 = head;
    int key = 0;
 
    while (temp1 != NULL)
    {
        key = temp1->data;
        temp2 = temp1;
 
        while (temp2->prev != NULL && temp2->prev->data > key)
        {
            temp2->data = temp2->prev->data;
            temp2 = temp2->prev;
        }
        temp2->data = key;
        temp1 = temp1->next;
    }
    struct node* temp = head;
    while(temp != NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("\nList was sorted!\n");
}

void delete_from_position(int pos)
{
 
    if (head == NULL)
    {
        empty_list_message();
        return;
    }
    int size = size_of_list();
    struct node* temp = head;
    int data = 0;
 
    if (pos < 1 || pos > size)
    {
        invalid_position_message();
        return;
    }
    else if (pos == 1)
    {
        head = head->next;
        data = head->data;
        free(temp);
        printf("\n* Node with data %d was deleted \n", data);
    }
    else
    {
        int count = 0;
 
        while (++count < pos)
        {
            temp = temp->next;
        }
 

        temp->prev->next = temp->next;
 
       
        if (pos != size)
        {
          
            temp->next->prev = temp->prev;
        }
        data = temp->data;
 
    
        free(temp);

        struct node* temp = head;
        while(temp != NULL){
        printf("%d ",temp->data);
        temp = temp->next;
        }
        printf("\n* Node with data %d was deleted \n", data);
    }
    
}
int getPosition()
{
    int position;
    printf("\nEnter Position: ");
    scanf("%d", &position);
 
    return position;
}
int size_of_list()
{
    struct node* temp = head;
    int count = 0;
 
    while (temp != NULL)
    {
        count += 1;
        temp = temp->next;    
    }
 
    return count;
}
void invalid_position_message()
{
    printf("\nInvalid position!\n");
}
void empty_list_message()
{
    printf("\nList is Empty!\n");
}