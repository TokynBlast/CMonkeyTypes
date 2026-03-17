#include <stdint.h>
// stdio is slow. We like slow for this project :3
#include <stdio.h>

#pragma once

typedef struct {
  uint8_t bit1;
  uint8_t bit2;
  uint8_t bit3;
  uint8_t bit4;
  uint8_t bit5;
  uint8_t bit6;
  uint8_t bit7;
  uint8_t bit8;
} u8;

uint8_t BuildU8(u8 nums) {
  // Converts into regular usable number :)
  uint8_t FinalNum = 0;
  FinalNum += nums.bit1;FinalNum <<= 1;
  FinalNum += nums.bit2; FinalNum <<= 1;
  FinalNum += nums.bit3; FinalNum <<= 1;
  FinalNum += nums.bit4; FinalNum <<= 1;
  FinalNum += nums.bit5; FinalNum <<= 1;
  FinalNum += nums.bit6; FinalNum <<= 1;
  FinalNum += nums.bit7; FinalNum <<= 1;
  FinalNum += nums.bit8;
  return FinalNum;
}

u8 DestructU8(uint8_t num) {
    u8 result;
    // We shift the number to the right to bring each bit to the 1s place,
    // then mask it with 1 to grab only that bit.
    result.bit1 = (num >> 7) & 1;
    result.bit2 = (num >> 6) & 1;
    result.bit3 = (num >> 5) & 1;
    result.bit4 = (num >> 4) & 1;
    result.bit5 = (num >> 3) & 1;
    result.bit6 = (num >> 2) & 1;
    result.bit7 = (num >> 1) & 1;
    result.bit8 = (num >> 0) & 1;
    return result;
}

int PrintU8(u8 nums) {
  // prints, using BuildU8 :3
  printf("%u", BuildU8(nums));
}

u8 ConvertToU8(void* num) {
  
}
