#include "../headers/ess.h"
int main(int argc, char *argv[])
{
    int i;
    for(i=1;i<argc;i++)
    {
        printf("%i Arguments read\nContent: %s\n\n", i, argv[i]);
    }
    return 0;
}
