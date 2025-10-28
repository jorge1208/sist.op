#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        int VA = 32, page_size = 4096, bits = 12;
        unsigned int vaddr = atoi(argv[1]);
        
        // Cálculos
        unsigned int page_number = vaddr / page_size;
        unsigned int offset = vaddr % page_size;
        
        // Mostrar resultados en el formato solicitado
        printf("VA Size[%d] Bits\n", VA);
        printf("Page Size is [4KB][%dbits]\n", bits);
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
