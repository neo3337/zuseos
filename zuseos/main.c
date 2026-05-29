//ZuseOS, a generalized cognitive artificial intelligence with memory by Arsene Denisov
//alpha version, GNU GPL license
//Dao Tao trou de rev myth of Er



#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>



//to do: calculate weights with medium long distances

char text[] = "This is the text to train artificial intelligence on";


int* memory;
int** memoryPermutationArray;
int* entropyAndExtropyArray;



int memory_predictor()
{
    return 0;
}

int build_adjacency_array()
{
    char* vertices = strtok(text, " ");

    int i = 0;
    while (vertices != NULL)
    {
        printf("%d", i);
        printf("%s\n", vertices);
        vertices = strtok(NULL, " ");
        i++;
    }

    int** adjacencyMatrix = (int**)malloc(sizeof(int)*pow(i,2));

    int i2;
    int i3;
    for (i2 = 0; i2 < i; i2++)
    {
        for (i3 = 0; i3 < i; i3++)
        {

            printf("%d\n", i2);
            printf("%d\n", i3);
        }
    }

    return 0;
}

int polymorphic_memory()
{
    return 0;
}

int entropy_extropy_function()
{
    return 0;
}

int sorting_algorithm()
{
    printf("test");
    return 0;
}

int spreading_activation_algorithm()
{
    int i;

    for (i = 0; i < 5; i++)
    {
      printf("%d\n", i);
    }

    return 0;
}

int universal_wave_function()
{
    return 0;
}

int main()
{
    build_adjacency_array();
    printf("ZuseOS, generalized cognitive artificial intelligence alpha version by Arsene Denisov\n");
    system("pause");
    return 0;
}
