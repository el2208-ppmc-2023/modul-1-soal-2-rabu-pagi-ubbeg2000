/** EL2208 Praktikum Pemecahan Masalah dengan C 2022/2023
 *   Modul               : 1 - Overview of the C Language
 *   Hari dan Tanggal    : Rabu, 8 Febuari 2023
 *   Nama (NIM)          :
 *   Nama File           : main.c
 *   Deskripsi           :
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int lebar;
    printf("Masukkan lebar (ganjil): ");

    scanf("%d", &lebar);
    while (lebar % 2 != 1)
    {
        printf("Lebar haruslah bilangan ganjil!\n\n");
        printf("Masukkan lebar (ganjil): ");
        scanf("%d", &lebar);
    }

    for (int i = 0; i <= (lebar - 1) / 2; i++)
    {
        for (int j = 0; j < lebar; j++)
        {
            if (j >= (lebar - 1) / 2 - i && j <= (lebar - 1) / 2 + i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }
    for (int i = (lebar - 1) / 2 - 1; i >= 0; i--)
    {
        for (int j = 0; j < lebar; j++)
        {
            if (j >= (lebar - 1) / 2 - i && j <= (lebar - 1) / 2 + i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}

