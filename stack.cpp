#include<stdio.h>
#include<stdlib.h>
int top=-1
int a[7];
void push();
void pop();
void display();

int main()
{
    int id;
    while(1)
    {
        printf("\n Enter 1.insert\n 2.delete\n 3.display")
        scanf("%d",&id);
        if(id==1)
        {
            push();
        }
        else if(id==2)
        {
            pop();
        }
        else if(id==3)
        {
            display();
        }
        else
        {
            exit(0);
        }



    }
}


void push()
{
    int i;
    top++;
    if(top>=5-1)
    {
        
    }
}