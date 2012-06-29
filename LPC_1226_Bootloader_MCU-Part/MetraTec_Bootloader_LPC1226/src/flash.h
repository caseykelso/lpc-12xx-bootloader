/*
Copyright (c) 2012 Martin Koehler, metraTec GmbH (metraTec.com)

Permission is hereby granted, free of charge, to any person obtaining a copy of this software
and associated documentation files (the "Software"), to deal in the Software without restriction,
including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense,
and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so,
subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.
THE SOFTWARE IS PROVIDED "AS IS",
WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED,
INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM,
DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/

#ifndef FLASHPARAM_H_
#define FLASHPARAM_H_

#define PROGRAMMED_FLAG (0x00018000-4)
#define IAP_LOCATION 0x1FFF1FF1
volatile u32 dwProgramBufferLevel;
#define pStartOfApplicationCode ((u8*)(0x2000))
extern u8* mBlankBlock[256];

tErrorCode eraseAllFlash (void);
tErrorCode writeFlash(u8* mBuffer, u32 dwLength, u8* pTargetArea);
u8 sendByteFlash(u8 bByte);
void endFlashing(void);

#endif /* FLASHPARAM_H_ */
