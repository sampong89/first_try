#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;
// structure for double linked list
struct node
{
    int data;
    struct node *next, *previous;
};
typedef struct node node;
struct list
{
    int n;
    node *head, *tail;
};
typedef struct list list;
// function and procedure
list *createList()
{
    list *ls;
    ls = new list();
    ls->n = 0;
    ls->head = NULL;
    ls->tail = NULL;

    return ls;
}
void insert_begin(list *ls,int newData)
{
    node *e;
    e = new node();
    e->data = newData;
    e->next = ls->head;
    e->previous = NULL;
    if (ls ->n == 0)
    {
        ls->tail = e;
    }
    if (ls ->n != 0)
    {
        ls->head->previous = e;
    }
    ls->head = e;
    ls->n = ls->n + 1;
}
void insert_end(list *ls, int newData)
{
    node *e;
    e = new node();
    if (ls ->n == 0)
    {
        insert_begin(ls, newData);
    }
    else
    {
        e->data = newData;
        e->previous = ls->tail;
        e->next = NULL;
        ls->tail->next = e;
        ls->tail = e;
        ls->n = ls->n + 1;
    }
}
void insert_position(list *ls, int newData, int position)
{
    node *e, *tmp;
    tmp = ls->head;
    if (ls ->head == NULL)
    {
        /* code */
        insert_begin(ls, newData);
    }
    else if (position >= ls ->n)
    {
        /* code */
        insert_end(ls, newData);
    }
    else if(tmp != NULL)
    {
        int i = 1;
        /* code */
        e = new element();
        e->data = newData;
        e->next = tmp->next;
        e->previous = tmp;
        if (tmp->next != NULL)
        {
            tmp->next->previous = e;
        }
        tmp->next = e;
        else
        {
            \cout << "Invalid position"
        }
        
    }
    
}
void displaylist(list *ls)
{
    node *tmp;
    tmp = ls->head;
    while (tmp != NULL)
    {
        cout << tmp->data << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
int main()
{
    list *ls;
    ls = createList();
    insert_end(ls, 1);
    insert_begin(ls, 17);
    insert_end(ls, 34);
    displaylist(ls);
}