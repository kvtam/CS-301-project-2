/*
 * Seven_segment.h
 *
 *  Created on: Nov 28, 2017
 *      Author: Kyle Tam
 */

#ifndef SEVEN_SEGMENT_H_
#define SEVEN_SEGMENT_H_
// Segments are an active high
    #define SEG0 0x3F
    #define SEG1 0x06
    #define SEG2 0x5B
    #define SEG3 0x4F
    #define SEG4 0x66
    #define SEG5 0x6D
    #define SEG6 0x7D
    #define SEG7 0x07
    #define SEG8 0x7F
    #define SEG9 0x6F
    #define SEGA 0x77
    #define SEGB 0x7C
    #define SEGC 0x39
    #define SEGD 0x5E
    #define SEGE 0x79
    #define SEGF 0x71

    #define SEG_ARR int[SEG0,SEG1,SEG2,SEG3,SEG4,SEG5,SEG6,SEG7,SEG8,SEG9,SEGA,SEGB,SEGC,SEGD,SEGE,SEGF]



#endif /* SEVEN_SEGMENT_H_ */
