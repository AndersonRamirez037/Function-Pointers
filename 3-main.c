#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - check the code 
 *
 * Return: Always 0.
 */
int main(int argc, char **argv){
    int a, b, result;
    int (*operation)(int, int);
    char *operador = argv[2];
    if (argc != 4) {
		printf("Error\n");
        exit(98);
	} 
    a = atoi(argv[1]);
    b = atoi(argv[3]);
    operation = get_op_func(operador); 
    if (operation == NULL) {
        printf("Error\n");
        exit(99);
    }
    if (operation != NULL) {
        int result = operation(a,b);
        printf("%d\n",result); 
    }    
    return 0; 
}