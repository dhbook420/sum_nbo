#pragma once

#include <stdio.h>
#include <stdint.h>

int         read_file(uint32_t *ptr, char* filename);
uint32_t    ntohl(uint32_t n);
void        print_all(uint32_t sum, uint32_t *values, int len);
