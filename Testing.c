#include <stdio.h>
#include <stdlib.h>


struct dog {
    int height;
    char* breed;
    int c;
}; typedef struct dog dog;


int main() {
    dog* dog1 = malloc(sizeof(struct dog));
    dog1->height = 10;
    dog1->breed = "Poodle";
    dog1->c = 5;
    int a = 5;
    
}