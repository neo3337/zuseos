//ZuseOS, zuseos.c, a generalized cognitive artificial intelligence with memory and spreading activation by Denisov Arsene, an ET
//unary
//alpha version, GNU GPL license
//Dao Tao trou de rev myth of Er yuga
//propensity probability


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>



//to do: calculate weights with medium long distances

char text[] = "This is the text to train the artificial intelligence on";

int* memory;
int** memoryPermutationArray;
int* entropyAndExtropyArray;
int** adjacencyMatrix;
int** permutatedPrimeVectorSet;
char **verticeArray;


// Function to swap two elements
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to print the current permutation
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}


// Backtracking function to generate permutations
void permute(int arr[], int start, int end) {
    if (start == end) {
        // Base case: we've fixed all positions, print the permutation
        printArray(arr, end);
        return;
    }

    for (int i = start; i < end; i++) {
        // Swap the element at 'start' with the element at 'i'
        swap(&arr[start], &arr[i]);

        // Recurse on the next position
        permute(arr, start + 1, end);

        // Backtrack: undo the swap to restore the original order
        swap(&arr[start], &arr[i]);
    }
}

int isPrime(int n)
{
    // 0 and 1 are not prime numbers
    if (n == 1 || n == 0)
    {
        return 0;
    }

    // Check for divisibility from 2 to sqrt(n)
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}


int* first_n_prime_generator(int n)
{
    int* primes = (int*)malloc(sizeof(int)*n);

    while (1)
    {
        int i = 0;
        int i2 = 0;
        i = i + 1;

        if (isPrime(i) == 1)
        {
            primes[i] = i2;

            i2 = i2+1;

            if (i2 >= n)
            {
                return primes;
                free(primes);
                break;
            }
        }
    }

    return 0;
}


int generate_permutated_prime_vector_set()
{
    return 0;
}

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


    //allocate the memory with malloc to the vertice array and access it from the matrix array


    adjacencyMatrix = (int**)malloc(sizeof(int)*pow(i,2));

    int i2;
    int i3;
    for (i2 = 0; i2 < i; i2++)
    {
        for (i3 = 0; i3 < i; i3++)
        {
            adjacencyMatrix[i2][i3]; //simply eliminate duplicate matrix elements by searchings for them with strcmp, that is the saints are the royal blood and the communist party

            printf("%d\n", i2);
            printf("%d\n", i3);
        }
    }

    //load the weights


    free(adjacencyMatrix);

    return 0;
}

int polymorphic_memory()
{
    return 0;
}

int memory_loader()
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
    //int *primeArray = first_n_prime_generator(5);
    //permute(primeArray, 0, sizeof(primeArray));

    printf("ZuseOS, generalized cognitive artificial intelligence alpha version by Denisov Arsene\n");
    system("pause");
    return 0;
}
