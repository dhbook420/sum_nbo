#include "utils.h"
#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>


int main(int argc, char** args)
{

    if (argc < 2)
    {
        printf("How to use : ./sum-nbo [4byte file] [...]\n");
        return 1;
    }
    
    //argc를 바탕으로 더할 uint32 변수들을 할당
    int         file_num = argc - 1;
    uint32_t*   values;
    uint32_t    sum;

    values = (uint32_t *)malloc(sizeof(uint32_t) * file_num);

    sum = 0;

    for (int i = 0; i < file_num; i++) 
    {
        if (read_file(&values[i], args[i+1]) == 1)
        {
            free(values);
            return 1;
        }

        sum += values[i];
    }
    
    
    print_all(sum, values, file_num);


    free(values);
    return 0;
}
