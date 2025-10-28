#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        int VA = 32, page_size = 4096, bits = 12;
        
        // VERIFICACIÓN CORREGIDA para números negativos
        char *endptr;
        long input = strtol(argv[1], &endptr, 10);
        
        // Verificar si la conversión fue exitosa y si es positivo
        if (*endptr != '\0' || input < 0) {
            printf("Please enter a positive number\n");
            return 1;
        }
        
        unsigned int vaddr = (unsigned int)input;
        
        // Cálculos
        unsigned int page_number = vaddr / page_size;
        unsigned int offset = vaddr % page_size;
        
        // Mostrar resultados
        printf("VA Size[%d] Bits\n", VA);
        printf("Page Size is [4KB][12bits]\n", bits);
        printf("The address [%u] = [%Xh] contains:\n", vaddr, vaddr);
        printf("page number = [%u] = [%Xh]\n", page_number, page_number);
        printf("offset = [%u] = [%Xh]\n", offset, offset);
    }
    else
    {
        printf("Usage: ./program <virtual address (decimal)>\n");
    }
    return 0;
}
