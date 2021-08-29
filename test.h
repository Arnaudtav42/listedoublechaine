#ifndef TEST_H
# define TEST_H
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>


typedef enum 
{
    false,
    true
}Bool;


typedef struct     s_list
{
    int data;
    int metadata;
    struct s_list *p_next;
    struct s_list *p_last;
}                   t_list;

typedef struct     s_pile
{
    size_t lenght;
    int min;
    int max;
    struct s_list   *p_start;
    struct s_list   *p_last;
}                  *t_pile;


t_pile new_list(void);
Bool is_empty_tlist(t_pile li);
int tlist_length(t_pile li);
int tlist_first(t_pile li);
int tlist_last(t_pile li);
t_pile push_back_tlist(t_pile li, int x);
t_pile push_front_tlist(t_pile li, int x);
t_pile pop_back_tlist(t_pile li);
t_pile pop_front_tlist(t_pile li);
void print_tlist(t_pile li);


#endif