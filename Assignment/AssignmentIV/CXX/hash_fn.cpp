/*
   ========================================
   hash_fn.cpp — implement your hash functions
   ========================================

   Description:
    This file contains the hash functions for integer and string keys.

   Development History:
    - 2025/11/11: Initial implementation
    - 2025/11/17: Refactored to use hash_fn.hpp

   Developer: Yu-Feng Huang <yfhuang@saturn.yzu.edu.tw>
 */
#include "hash_fn.hpp"
#include<bits/stdc++.h>

int myHashInt(int key, int m) {
    if (key<0)
    {
        key=-key;//如果hash是負的轉成正的
    } // TODO: replace with your own design
    return key % m;  // basic division method
}


int myHashString(const std::string& str, int m) {
    unsigned long hash = 0;
    const char* a = str.c_str();//str.data()因為版本問題不能執行改string，爬文這個函數在這個版本才有效
    while(*a){
        hash = hash * 33 + (unsigned char)(*a); // 33=2^5+1電腦比較好計算，上課例題也推薦
        //  把str限定成正整數
        a++; // 往後挪一個字元
    } // TODO: replace with your own design
    return static_cast<int>(hash % m);  // basic division method
}