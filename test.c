#include "test.h"


t_pile new_list(void)
{
    return NULL;
}
/*-------------------------------------------------------------------------------------------*/

Bool is_empty_tlist(t_pile li)
{
    if (li == NULL)
        return true;
    return false;
}
/*-------------------------------------------------------------------------------------------*/
int tlist_length(t_pile li)
{
    if (is_empty_tlist(li))
        return 0;
    return li->lenght;
}
/*-------------------------------------------------------------------------------------------*/
int tlist_first(t_pile li)
{
    if (is_empty_tlist(li))
        exit(1);
    return li->p_start->data;
}

int tlist_last(t_pile li)
{
    if (is_empty_tlist(li))
        exit(1);
    return li->p_last->data;
}
/*-------------------------------------------------------------------------------------------*/
t_pile push_back_tlist(t_pile li, int x)
{
    t_list  *element;

    element = malloc (sizeof(t_list));
    if (!element)
        exit(EXIT_FAILURE);
    element->data = x;
    element->p_last = NULL;
    element->p_next = NULL;

    if (is_empty_tlist(li))
    {
        li = malloc(sizeof(*li));

        if(li == NULL)
            exit(EXIT_FAILURE);
        li->lenght = 0;
        li->p_start = element;
        li->p_last = element;   
    }
    else 
    {
         li->p_last->p_next = element;
         element->p_last = li->p_last;
         li->p_last = element;

    }
    li->lenght++;
    return li;
}
/*-------------------------------------------------------------------------------------------*/
t_pile push_front_tlist(t_pile li, int x)
{
    t_list  *element;

    element = malloc (sizeof(t_list));
    if (!element)
        exit(EXIT_FAILURE);
    element->data = x;
    element->p_last = NULL;
    element->p_next = NULL;

    if (is_empty_tlist(li))
    {
        li = malloc(sizeof(*li));

        if(li == NULL)
        {
            exit(EXIT_FAILURE);
        }
        li->lenght = 0;
        li->p_start = element;
        li->p_last = element;
    }
    else 
    {
        li->p_start->p_last = element;
        element->p_next = li->p_start;
        li->p_start = element;

    }
    li->lenght++;
    return li;
}
/*-------------------------------------------------------------------------------------------*/
t_pile pop_back_tlist(t_pile li)
{
    if(is_empty_tlist(li))
    {
        printf("Rien a supprimer, la t_list est deja vide. \n");
        return new_list();
    }
    if(li->p_start == li->p_last)
    {
        free(li);
        li = NULL;

        return new_list();
    }
    t_list *temp = li->p_last;

    li->p_last = li->p_last->p_last;
    li->p_last->p_next = NULL;
    temp->p_next = NULL;
    temp->p_last = NULL;

    free(temp);
    temp = NULL;

    li->lenght--;

    return li;
}
t_pile pop_front_tlist(t_pile li)
{
    if(is_empty_tlist(li))
    {
        printf("Rien a supprimer, la t_list est deja vide. \n");
        return new_list();
    }

    if(li->p_start == li->p_last)
    {
        free(li);
        li = NULL;

        return new_list();
    }
    t_list *temp = li->p_start;

    li->p_start = li->p_start->p_next;
    li->p_start->p_last = NULL;
    temp->p_next = NULL;
    temp->p_last = NULL;
    
    free(temp);
    temp = NULL;

    li->lenght--;

    return li;
}
/*-------------------------------------------------------------------------------------------*/
void print_tlist(t_pile li)
{
    if(is_empty_tlist(li))
    {
        printf("Rien a afficher, la Tlist est vide\n");
        return ;
    }
    t_list *temp = li->p_start;

    while(temp->p_next != NULL)
    {
        printf("[%d] ", temp->data);
        temp = temp->p_next;
    }
    printf("[%d] ", temp->data);
    printf("\n");
}
/*-------------------------------------------------------------------------------------------*/




/*-------------------------------------------------------------------------------------------*/