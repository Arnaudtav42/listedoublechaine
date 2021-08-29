#include "test.h"

int main (void)
{
    t_pile mylist = new_list();
    print_tlist(mylist);
    printf("Taille de la Tlist : %d\n", tlist_length(mylist));

    mylist = push_back_tlist(mylist, 14);
    print_tlist(mylist);
    printf("Taille de la Tlist : %d\n", tlist_length(mylist));


    mylist = push_back_tlist(mylist, 20);
    print_tlist(mylist);
    printf("Taille de la Tlist : %d\n", tlist_length(mylist));

    mylist = push_back_tlist(mylist, 6);
    print_tlist(mylist);
    printf("Taille de la Tlist : %d\n", tlist_length(mylist));
    
    mylist = pop_front_tlist(mylist);
    mylist = pop_front_tlist(mylist);
    print_tlist(mylist);
    printf("Taille de la Tlist : %d\n", tlist_length(mylist));

    mylist = pop_front_tlist(mylist);
    print_tlist(mylist);
    printf("Taille de la Tlist : %d\n", tlist_length(mylist));
    
    return 0;
}