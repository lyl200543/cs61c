#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include "lfsr.h"

uint16_t get(uint16_t x,int n){
    return (x>>n)&1;
}

void lfsr_calculate(uint16_t *reg) {
    /* YOUR CODE HERE */
    uint16_t xor=get(*reg,0)^get(*reg,2)^get(*reg,3)^get(*reg,5);
    *reg>>=1;
    *reg|=xor<<15;
}

