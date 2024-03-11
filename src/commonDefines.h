/*******************************************************************************
 * @file    commonDefines.h
 * @author  Jay Convertino(electrobs@gmail.com)
 * @date    2014.11.06
 * @brief   defines
 * @details Collection defines
 * @version 0.0.0
 *
 * @TODO
 *  - Cleanup interface
 *
 * @license mit
 *
 * Copyright 2024 Johnathan Convertino
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
 * IN THE SOFTWARE.
 ******************************************************************************/

#ifndef COMMONDEFINES_H_
#define COMMONDEFINES_H_

//masks, not a great way of masking, just here for sake of being
#define MASK_8BIT_FF 0xFF
#define MASK_16BIT_FF 0x000000FF
#define MASK_16BIT_FFFF 0x0000FFFF
//flag states
#define FLAG_ON 1
#define FLAG_OFF 0
#define	HIGH 1
#define LOW 0
//selection defines
#define SELECT_B 'B'
#define SELECT_C 'C'
#define SELECT_D 'D'
//bases
#define HEX 16
#define DEC 10
#define OCT 8
#define BIN 2


#endif /* COMMONDEFINES_H_ */
