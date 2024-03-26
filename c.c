#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    puts("Ritom hazard");
    char *buffer = NULL;
    long unsigned int len;
    getline(&buffer, &len, stdin);
    printf("%s", buffer);
    free(buffer);
    return 0;
    printf(hazard working on it)
}
