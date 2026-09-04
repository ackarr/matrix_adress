#include <stdio.h>
int PrintMtx(int* data, int sizeY, int sizeX);

int main()
{
    int data[5][4] = {{10, 11, 12, 13},
                      {20, 21, 22, 23},
                      {30, 31, 32, 33},
                      {40, 41, 42, 43},
                      {50, 51, 52, 53}};

    PrintMtx((int*) data, 5, 4);
}


int PrintMtx(int* data, int sizeY, int sizeX)
{
    for(int y = 0; y < sizeY; y++)
    {
        for(int x = 0; x < sizeX; x++)
        {
            printf("%d ", *(data + y*sizeX + x));
        }

        printf("\n");
    }

    return 0;
}
