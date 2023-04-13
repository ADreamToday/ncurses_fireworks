#include "fireworks.h"
#include <stdlib.h>
#include <string.h>
#include <time.h>

/*struct action_list*/
action_list * action_list_init()
{
    action_list * new = malloc(sizeof(action_list));
    new->x = 0;
    new->y = 0;
    new->img = NULL;
    new->time = 0;
    new->pN = NULL;
    return new;
}

void add_actions(action_list * END , int X , int Y , char *IMG , int TIME)
{    
    action_list * new = malloc(sizeof(action_list));
    
    new->x = X;
    new->y = Y;
    new->img = IMG;
    new->time = TIME;
    new->pN = NULL;

    END->pN = new;
}


/*struct fireworks */
fireworks * fireworks_init(int X , int Y , int Height)
{
    fireworks * new = malloc(sizeof(fireworks));
    new->x = X;
    new->y = Y;
    new->height = Height;
    return new;
}

    /* draw a cycle*/
int * count_cycle(int R)
{
    int * res;
}

char * draw_boom(int R)
{
    char signs[] = {'#' , '$' , '%' , '.' , '+' , '*' , '.' , '.' , '\0'};
    int len = strlen(signs);

    char * img;
    for ()
    {}

    return img;
}


action_list * setoff_fireworks(fireworks * FIREWORKS)
{
    int height = FIREWORKS->height;
    int x = FIREWORKS->x;
    int y = FIREWORKS->y;
    char * img;
    action_list * head = action_list_init();
    action_list * new;
    action_list * end = head;

    for (int i = 0 ; i <= height ; i++)  // before a fireworks boom
    {
        new = malloc(sizeof(action_list));
        img = malloc(sizeof(char));
        if (i == 0 || i == height)
        {
            *img = '.';
        }
        else
        {
            *img = '|';
        }
        add_actions(end , x , y , img , 1);
        y--;
    }

    /* fireworks boom */
    

}

