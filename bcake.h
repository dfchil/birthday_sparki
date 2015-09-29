
//0123456701234567012345670123456701234567012345670123456701234567
//                        0                                          4
//                       000               00                        5
//                       000              0000                       6
//                      00000             0000                       7
//               0      00000             0000                       8
//               0       000              0000      00               9
//              000       0                00      000               10
//              0000     000               00      0000              11
//             00000     000               00      0000              12
//              000      000       0       00      0000              13
//               0       000      00       00       00               14
//               00      000     0000      00       00               15
//               00      000     0000      00       00               16
//               00      000     0000      00       00               17
//               00      000      000      00       00               18
//               00      000  00  00   00  00       00               19
//               00  00  000  00  00   00  00  000  00               20
//               00  00  000      00       00  000  00               21
//          00   00      000      00       00       00  00           22
//        0000   00      000      00       00       00  0000         23
//      00000    00      00       00       00       00   00000       24
//     0000      00       0       00        0       00      000      25
//    000        00               00                00       000     26
//    00         00               00                00        000    27
//    00         00               00                00         00    28
//   000         00               00                00         00    29
//   000                          00                          000    30
//   0000                         00                         0000    31
//   000000                       00                       000000    32
//   000 0000                     00                     00000 00    33
//   000  0000000                                     000000   00    34
//   000     00000000                             00000000     00    35
//   000        00000000000000           00000000000000        00    36
//   000            0000000000000000000000000000000            00    37
//   000                   0000000000000000                    00    38
//   000                                                       00    39
//   000                                                       00    40
//   000                                                       00    41
//   000                                                      000    42
//   0000                                                     000    43
//   0000                                                    0000    44
//   00000   0000                                     000    0000    45
//   000000 000000                                   000000 00000    46
//   000 00000  00                                  000 000000 00    47
//   000  000    00      00000          00000      000    000  00    48
//   000         000    0000000        00000000    00          00    49
//   000          00   000   000      000   0000  000          00    50
//   000          000 000     000     00      000000           00    51
//   000           00000       000   000       0000            00    52
//    00            00          0000000         00            000    53
//    000                       000000                       000     54
//     0000                                                 000      55
//      00000                                             0000       56
//        000000                                       000000        57
//          00000000                              00000000           58
//             000000000000                000000000000              59
//                 00000000000000000000000000000000                  60
//                       00000000000000000000                        61

//static unsigned char __attribute__ ((progmem)) bcake[] = {

#include <avr/pgmspace.h>
PROGMEM prog_uchar bcake[]  = 
  0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,
  0x00,0x00,0x80,0x03,0x00,0x06,0x00,0x00,
  0x00,0x00,0x80,0x03,0x00,0x0f,0x00,0x00,
  0x00,0x00,0xc0,0x07,0x00,0x0f,0x00,0x00,
  0x00,0x80,0xc0,0x07,0x00,0x0f,0x00,0x00,
  0x00,0x80,0x80,0x03,0x00,0x0f,0x0c,0x00,
  0x00,0xc0,0x01,0x01,0x00,0x06,0x0e,0x00,
  0x00,0xc0,0x83,0x03,0x00,0x06,0x1e,0x00,
  0x00,0xe0,0x83,0x03,0x00,0x06,0x1e,0x00,
  0x00,0xc0,0x81,0x03,0x02,0x06,0x1e,0x00,
  0x00,0x80,0x80,0x03,0x03,0x06,0x0c,0x00,
  0x00,0x80,0x81,0x83,0x07,0x06,0x0c,0x00,
  0x00,0x80,0x81,0x83,0x07,0x06,0x0c,0x00,
  0x00,0x80,0x81,0x83,0x07,0x06,0x0c,0x00,
  0x00,0x80,0x81,0x03,0x07,0x06,0x0c,0x00,
  0x00,0x80,0x81,0x33,0x63,0x06,0x0c,0x00,
  0x00,0x80,0x99,0x33,0x63,0xe6,0x0c,0x00,
  0x00,0x80,0x99,0x03,0x03,0xe6,0x0c,0x00,
  0x00,0x8c,0x81,0x03,0x03,0x06,0xcc,0x00,
  0x00,0x8f,0x81,0x03,0x03,0x06,0xcc,0x03,
  0xc0,0x87,0x81,0x01,0x03,0x06,0x8c,0x0f,
  0xe0,0x81,0x01,0x01,0x03,0x04,0x0c,0x1c,
  0x70,0x80,0x01,0x00,0x03,0x00,0x0c,0x38,
  0x30,0x80,0x01,0x00,0x03,0x00,0x0c,0x70,
  0x30,0x80,0x01,0x00,0x03,0x00,0x0c,0x60,
  0x38,0x80,0x01,0x00,0x03,0x00,0x0c,0x60,
  0x38,0x00,0x00,0x00,0x03,0x00,0x00,0x70,
  0x78,0x00,0x00,0x00,0x03,0x00,0x00,0x78,
  0xf8,0x01,0x00,0x00,0x03,0x00,0x00,0x7e,
  0xb8,0x07,0x00,0x00,0x03,0x00,0x80,0x6f,
  0x38,0x7f,0x00,0x00,0x00,0x00,0xf0,0x63,
  0x38,0xf8,0x07,0x00,0x00,0x00,0xff,0x60,
  0x38,0xc0,0xff,0x0f,0x80,0xff,0x1f,0x60,
  0x38,0x00,0xfc,0xff,0xff,0xff,0x01,0x60,
  0x38,0x00,0x00,0xfe,0xff,0x01,0x00,0x60,
  0x38,0x00,0x00,0x00,0x00,0x00,0x00,0x60,
  0x38,0x00,0x00,0x00,0x00,0x00,0x00,0x60,
  0x38,0x00,0x00,0x00,0x00,0x00,0x00,0x60,
  0x38,0x00,0x00,0x00,0x00,0x00,0x00,0x70,
  0x78,0x00,0x00,0x00,0x00,0x00,0x00,0x70,
  0x78,0x00,0x00,0x00,0x00,0x00,0x00,0x78,
  0xf8,0x78,0x00,0x00,0x00,0x00,0x70,0x78,
  0xf8,0xfd,0x00,0x00,0x00,0x00,0xf8,0x7d,
  0xb8,0xcf,0x00,0x00,0x00,0x00,0xdc,0x6f,
  0x38,0x87,0x81,0x0f,0xc0,0x07,0x0e,0x67,
  0x38,0x80,0xc3,0x1f,0xe0,0x1f,0x06,0x60,
  0x38,0x00,0xe3,0x38,0x70,0x3c,0x07,0x60,
  0x38,0x00,0x77,0x70,0x30,0xf0,0x03,0x60,
  0x38,0x00,0x3e,0xe0,0x38,0xe0,0x01,0x60,
  0x30,0x00,0x0c,0xc0,0x1f,0xc0,0x00,0x70,
  0x70,0x00,0x00,0xc0,0x0f,0x00,0x00,0x38,
  0xe0,0x01,0x00,0x00,0x00,0x00,0x00,0x1c,
  0xc0,0x07,0x00,0x00,0x00,0x00,0x00,0x0f,
  0x00,0x3f,0x00,0x00,0x00,0x00,0xe0,0x07,
  0x00,0xfc,0x03,0x00,0x00,0x00,0xff,0x00,
  0x00,0xe0,0xff,0x01,0x00,0xfe,0x1f,0x00,
  0x00,0x00,0xfe,0xff,0xff,0xff,0x01,0x00,
  0x00,0x00,0x80,0xff,0xff,0x07,0x00,0x00,
};
