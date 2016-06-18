/*****************************************************************************************

                                PIC16λ�������ļ�  
//ʹ��PIC MPLIB(PICC��<chip_select.h>��ʾ��)�ڲ������ֲ�ͬ��Ƭ��                                                                
*****************************************************************************************/
#ifndef __PIC16_BIT_H
#define __PIC16_BIT_H

//�������� PIC MCUλ֧��
//--------------------------PIC193Xϵ��---------------------------
#ifdef _16F1935
#include "Pic16f193xBit.h"
#endif

#ifdef _16F1936
#include "Pic16f193xBit.h"
#endif

#ifdef _16F1937
#include "Pic16f193xBit.h"
#endif

#ifdef _16F1938
#include "Pic16f193xBit.h"
#endif

//--------------------------PIC194Xϵ��---------------------------
//��193x��,�ܽŸ����ˣ�LCD���������,����һ��USART
#ifdef _16F1947
#include "Pic16f193xBit.h"
#endif


//--------------------------PIC18FxK80ϵ��---------------------------
//MCU�ڲ�����CAN���ߣ�12λAD
#ifdef _18F25K80
#include "Pic18FxK80Bit.h"
#endif

#ifdef _18F26K80
#include "Pic18FxK80Bit.h"
#endif

#ifdef _18F46K80
#include "Pic18FxK80Bit.h"
#endif


#endif #define __PIC16_BIT_H
