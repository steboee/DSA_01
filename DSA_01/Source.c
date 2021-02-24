#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define VELKOST 50;


void* memory_alloc(unsigned int size) {
    printf("toto je velkost : %ld", size);



}
int memory_free(void* valid_ptr) {

}
int memory_check(void* ptr) {

}
void memory_init(void* ptr, unsigned int size) {
    printf("vstupil si do memory init\n");
    printf("pointer ukazuje na adresu : %p\n", ptr);

    char* a;
    a = ptr;
    *a = size;
    *(a + 1) = 0;
    *(a + 2) = 0;
    *(a + 3) = 0;
    a = a + 4;


    for (int i = 3; i < size; i++) {

        *a = 5;
        a++;
    }
    printf("pointer ukazuje na adresu : %p\n", a);
    *a = "a";
    a = 5;
}


int main() {
    char region[100]; //my memory, size = VELKOST ( 50 BYTES)
    memory_init(region, 100);   // Initialization of my memory of 50 bytes
    char* pointer = (char*)memory_alloc(10);
    memset(region, 0, 10);
    return 0;
}