//
// Created by Claudio Alvarez Gomez on 8/15/18.
//

#ifndef T1_1_TYPES_H
#define T1_1_TYPES_H
typedef unsigned char BYTE;
typedef unsigned int UINT;

#define min(a,b) \
   ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
     _a < _b ? _a : _b; })

#endif //T1_1_TYPES_H
