typedef struct fireworks
{
    int x;
    int y;
    int height;
}fireworks;

typedef struct action_list
{
    int x;  // top and left
    int y;  // top and left
    char * img;
    int time;
    struct action_list * pN;
}action_list;

typedef struct point
{
    int x;
    int y;
    struct point * pN;
}point;
