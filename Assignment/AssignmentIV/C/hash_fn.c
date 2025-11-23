/*
   ========================================
   hash_fn.c — implement your hash functions
   ========================================

   Description:
    This file contains the hash functions for integer and string keys.

   Development History:
    - 2025/11/11: Initial implementation
    - 2025/11/17: Refactored to use hash_fn.h
    - 2025/11/23: complete
 */

#include "hash_fn.h"

int myHashInt(int key, int m) {
    if(key<0)
    {
    key=-key;
    }
    // 把負數改成正的
    return key % m;  // division method example
}

int myHashString(const char* str, int m) {
    unsigned long hash = 0;
     while(*str){
        hash = hash * 33 + (unsigned char)(*str); // 33=2^5+1電腦比較好計算，上課例題也推薦
        //  把str限定成正整數
        str++; // 往後挪一個字元
    }
    // TODO: replace with your own design
    return (int)(hash % m); // basic division method
}
