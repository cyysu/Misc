/**************************************************************************//**

                   LPC11xxоƬ��ģ��λ����

 ******************************************************************************/


#ifndef __LPC11xx_BIT_H__
#define __LPC11xx_BIT_H__

#ifdef __cplusplus
 extern "C" {
#endif

/** @addtogroup LPC11xx_Definitions LPC11xx Definitions
  This file defines all structures and symbols for LPC11xx:
    - Registers and bitfields
    - peripheral base address
    - peripheral ID
    - PIO definitions
  @{
*/


/******************************************************************************/
/*                Processor and Core Peripherals                              */
/******************************************************************************/
/** @addtogroup LPC11xx_CMSIS LPC11xx CMSIS Definitions
  Configuration of the Cortex-M0 Processor and Core Peripherals
  @{
*/


/******************************************************************************/
/*                Device Specific Peripheral Registers structures             */
/******************************************************************************/


/*------------- System Control (SYSCON) --------------------------------------*/
/** @addtogroup LPC11xx_SYSCON LPC11xx System Control Block
  @{
*/
//Power-down configuration register,��PDRUNCFG:
#define IRCOUT_PD   (1 << 0)
#define IRC_PD      (1 << 1) 
#define FLASH_PD    (1 << 2) 
#define BOD_PD      (1 << 3)
#define ADC_PD      (1 << 4)  
#define SYSOSC_PD   (1 << 5)  
#define WDTOSC_PD   (1 << 6)
#define SYSPLL_PD   (1 << 7)   
   
#define COMP_PD     (1 << 15)   
   
//System AHB clock control register,��AHBCLKCTRL
#define SYS_ACC         (1 << 0)
#define ROM_ACC         (1 << 1) 
#define RAM_ACC         (1 << 2) 
#define FLASHREG_ACC    (1 << 3)
#define FLASHARRAY_ACC  (1 << 4)  
#define I2C_ACC         (1 << 5)  
#define CRC_ACC         (1 << 6)
#define CT16B0_ACC      (1 << 7)  
   
#define CT16B1_ACC      (1 << 8)
#define CT32B0_ACC      (1 << 9) 
#define CT32B1_ACC      (1 << 10) 
#define SSP_ACC         (1 << 11)
#define UART0_ACC       (1 << 12)  
#define UART1_ACC       (1 << 13)  
#define ADC_ACC         (1 << 14)
#define WDT             (1 << 15)  
   
#define IOCON_ACC      (1 << 16)
#define DMA_ACC        (1 << 17) 
#define RTC_ACC        (1 << 19) 
#define CMP_ACC        (1 << 20)
   
#define GPIO2_ACC      (1 << 29)  
#define GPIO1_ACC      (1 << 30)  
#define GPIO0_ACC      (1 << 31)
   
//Peripheral reset control register,��PRESETCTRL
#define SSP_RST_N         (1 << 0)
#define I2C_RST_N         (1 << 1) 
#define UART0_RST_N       (1 << 2) 
#define UART1_RST_N       (1 << 3)   
#define CT16B0_RST_N      (1 << 4)
#define CT16B1_RST_N      (1 << 5) 
#define CT32B0_RST_N      (1 << 6) 
#define CT32B1_RST_N      (1 << 7)  
   
#define CMP_RST_N         (1 << 8)
#define CRC_RST_N         (1 << 9) 
#define DMA_RST_N         (1 << 10) 

#define FLASH_OVERRIDE    (1 << 15)   
   
/*@}*/ /* end of group LPC11xx_SYSCON */


/*------------- Pin Connect Block (IOCON) --------------------------------*/
/** @addtogroup LPC11xx_IOCON LPC11xx I/O Configuration Block
  @{
*/


/*@}*/ /* end of group LPC11xx_IOCON */


/*------------- Power Management Unit (PMU) --------------------------*/
/** @addtogroup LPC11xx_PMU LPC11xx Power Management Unit
  @{
*/


/*@}*/ /* end of group LPC11xx_PMU */


/*------------- General Purpose Input/Output (GPIO) --------------------------*/
/** @addtogroup LPC11xx_GPIO LPC11xx General Purpose Input/Output
  @{
*/


/*@}*/ /* end of group LPC11xx_GPIO */


/*------------- Timer (TMR) --------------------------------------------------*/
/** @addtogroup LPC11xx_TMR LPC11xx 16/32-bit Counter/Timer
  @{
*/


/*@}*/ /* end of group LPC11xx_TMR */


/*------------- Universal Asynchronous Receiver Transmitter (UART) -----------*/
/** @addtogroup LPC11xx_UART LPC11xx Universal Asynchronous Receiver/Transmitter
  @{
*/
//UART0 Fractional Divider Register (U0FDR)
#define		LPC_DIVADDVAL			0x0000000F	//�����ʲ����ĳ�����ֵ,����˷�����Ϊ:
#define		LPC_DIVADGENE			0x00000001	//
#define		LPC_MULVAL				0x000000F0	//�����ʲ����ĳ˷���ֵ,�����������Ϊ:
#define		LPC_MULGENE				0x00000010

//UART0 Interrupt Enable Register (U0IER)
#define		LPC_RBR_IE				0x00000001	//�����ж�����
#define		LPC_THRE_IE				0x00000002	//����FIFO���ж�����
#define		LPC_RXLS_IE				0x00000004	//������״̬�ж�����
#define		LPC_ABTO_IE				0x00000100	//
#define		LPC_ABEO_IE				0x00000200	//

//UART0 Interrupt Identification Register (U0IIR)

//�ж��ж�������
#define		LPC_HENDDICT				0x0000000f 	//�ж��ж���Ӱ��λ
#define		LPC_HENDINGINT			0x00000001	//�����жϱ�־,Ϊ0ʱ����һ���й���

#define		LPC_INTIDENT				0x0000000e	//�ж�ʶ���,����Ϊ
#define		LPC_INT_RLS				0x00000006	//Rx ��״̬/���� OE, PE, FE, ��BI,��߼�
#define		LPC_INT_RDA				0x00000004	//������������,RX FIFO���ݵ��ﴥ����ʱ�ڶ���
					//�ַ���ʱ���ָʾ,һ��ʱ��(3.5 ��4.5 �ַ�)��û�н��յ�����ʱ,������
#define		LPC_INT_CTI				0x0000000c
#define		LPC_INT_THER				0x00000002	//U0IIR ����������ж�Դ����THR д����,���ļ�

#define		LPC_FIFO_EN2				0x000000c0	//FIFO����,�ȼ���U0FCR[0]
#define		LPC_INT_ABEO				0x00000100	//�Զ������ʽ����ж�
#define		LPC_INT_ABTO				0x00000200	//�Զ�������ʱ������ж�

//UART0 FIFO Control Register (U0FCR)		//FIFO���ƼĴ���
#define		LPC_FIFO_EN				0x01		//
#define		LPC_RXFIFO_RST			0x02		//
#define		LPC_TXFIFO_RST			0x04		//

#define		LPC_RX_TRI_LEV_SHIFT	6		    //������ѡ��,����Ϊ:
#define		LPC_RX_TRI_LEV_MASK		0xc0
#define		LPC_RX_TRI_LEV1			0x00		//1���ַ�����
#define		LPC_RX_TRI_LEV4			0x40		//4���ַ�����
#define		LPC_RX_TRI_LEV8			0x80		//8���ַ�����
#define		LPC_RX_TRI_LEV14		0xc0		//14���ַ�����

//UART0 Line Control Register (U0LCR)		//�߿���
#define		LPC_WORD_LEN_SEL		0x03		//������ѡ��,����Ϊ:
#define		LPC_WORD_LEN5			0x00		//������Ϊ5bit
#define		LPC_WORD_LEN6			0x01		//������Ϊ6bit
#define		LPC_WORD_LEN7			0x02		//������Ϊ7bit
#define		LPC_WORD_LEN8			0x03		//������Ϊ8bit

#define		LPC_STOPBIT1		    0x00		//ֹͣλѡ��,0ʱΪ1��ֹͣλ2ʱΪ2��ֹͣλ
#define		LPC_STOPBIT2		    0x04		//ֹͣλѡ��,0ʱΪ1��ֹͣλ2ʱΪ2��ֹͣλ

#define		LPC_PARITY_EN			0x08		//��żУ������

#define		LPC_PARITY_SEL			0x30		//��żУ��ѡ��,����Ϊ:
#define		LPC_PARITY_ODD			0x00		//��У��
#define		LPC_PARITY_EVEN			0x10		//żУ��
#define		LPC_PARITY_FORCE1		0x20		//ǿ��Ϊ1
#define		LPC_PARITY_FORCE0		0x30		//ǿ��Ϊ0

#define		LPC_FORCE_BREAK			0x40		//ǿ�Ƽ������
#define		LPC_DLAB				0x80		//�������������������


//UART0 Line Status Register (U0LSR)		//������״̬
#define		LPC_RDR				0x01		//�������Ƿ�Ϊ����,0Ϊ��
#define		LPC_OE					0x02		//�����־
#define		LPC_PE					0x04		//��żУ�����
#define		LPC_FE					0x08		//ȡ�������־
#define		LPC_BI					0x10		//
#define		LPC_THRE				0x20		//���ͱ��ּĴ�����,��ʾ�����ѷ���
#define		LPC_TEMT				0x40		//���ͼĴ�����,��ʾ�����ѷ���
#define		LPC_RXFE				0x80		//���մ���

//UART0 Auto-baud Control Register (U0ACR)
#define		LPC_ACT_START			0x00000001	//�Զ������ʼ�⿪ʼ
#define		LPC_ACT_MODE				0x00000002	//�Զ������ʼ��ģʽ
#define		LPC_ACT_AUTORST			0x00000004	//�Զ������ʸ�λ��
#define		LPC_ABEOINTCLR			0x00000100	//�Զ������ʽ����ж����
#define		LPC_ABTOINTCLR			0x00000200	//�Զ�������ʱ������ж����

//UART0 Transmit Enable Register (U0TER)
#define		LPC_TXE					0x80		//��������


/*@}*/ /* end of group LPC11xx_UART */


/*------------- Synchronous Serial Communication (SSP) -----------------------*/
/** @addtogroup LPC11xx_SSP LPC11xx Synchronous Serial Port
  @{
*/
//SSP Control Register 0 (SSPCR0),16bit
#define		LPC_DSS					0x000f	//����λ������,(ʵ��λ��1,4-16)

#define		LPC_FRF_SPI				0x0000	//֡��ʽ����SPI�ӿ�
#define		LPC_FRF_SSI				0x0010	//֡��ʽ����SSI�ӿ�
#define		LPC_FRF_MIC				0x0020	//֡��ʽ����Microwire�ӿ�

#define		LPC_CPOL				0x0040	//��ʱʱ������伫��,ָ����ʱ���Ǵ��ڵͻ��Ǹ�
#define		LPC_CPHA				0x0080	//ʱ�������λ,(�����ݽ���ʱ�Ǹ߻��)�����������½��ش���,
#define		LPC_SCR_MASK				0xff00	//��������ʿ���λ=PCLK / (CPSDVSR * [SCR+1])
#define		LPC_SCR_SHIFT				8
   
//SSP Control Register 1 (SSPCR1),8bit
#define		LPC_LBM					0x01	//�ش�ģʽ,1ʱ�ɽ�����������ڹ���
#define		LPC_SSE					0x02	//SSP�ӿ�ʹ��
#define		LPC_MS					0x04	//SSP�ӿ�����ѡ��,0��1��
#define		LPC_SOD					0x08	//��SSPΪ��ʱ��ֹ�������(ֻ������)

//SSP Data Register (SSPDR),16bit,���ݻ�����

//SSP Status Register (SSPSR)
#define		LPC_TFE					0x01	//Transmit FIFO Empty.
#define		LPC_TNF					0x02	//Transmit FIFO Not Full.
#define		LPC_RNE					0x04	//Receive FIFO Not Empty.
#define		LPC_RFF					0x08	//Receive FIFO Full.
#define		LPC_BSY					0x10	//Busy.

//SSP Clock Prescale Register (SSPCPSR),8bit,
//between 2 and 254��Bit 0 always reads as 0.

//SSP Interrupt Mask Set/Clear register (SSPIMSC),8bit,
#define		LPC_RORIM				0x01	//�������ݹ����ж�����
#define		LPC_RTIM				0x02	//��ʱ�����ж�����
#define		LPC_RXIM				0x04	//����FIFO���ж�����
#define		LPC_TXIM				0x08	//��������FIFO���ж�����


//SSP Raw Interrupt Status register (SSPRIS),8bit,ֻ��
#define		LPC_RORRIS				0x01	//����FIFO�����жϱ�־
#define		LPC_RTRIS				0x02	//�������ݳ�ʱ��־
#define		LPC_RXRIS				0x04	//����FIFO���ж�
#define		LPC_TXRIS				0x08	//��������FIFO���ж�.

//SSP Masked Interrupt register (SSPMIS),8bit,ֻ��,���ڶ�ȡSSPIMSC�趨ֵ
#define		LPC_RORMIS				0x01
#define		LPC_RTMIS				0x02
#define		LPC_RXMIS				0x04
#define		LPC_TXMIS				0x08

//SSP Interrupt Clear Register (SSPICR),8bit
#define		LPC_RORIC				0x01	//������ж�
#define		LPC_RTIC				0x02	//�峬ʱ�ж�

/*@}*/ /* end of group LPC11xx_SSP */


/*------------- Inter-Integrated Circuit (I2C) -------------------------------*/
/** @addtogroup LPC11xx_I2C LPC11xx I2C-Bus Interface
  @{
*/

//I2C Control register (I2CONSET),8bit
//(contian set and clr register)
#define		LPC_I2C_AA				0x04	//Ӧ���־
#define		LPC_I2C_SI				0x08	//�жϱ�־
#define		LPC_I2C_STO				0x10	//ֹͣ��־,����ʱ������
#define		LPC_I2C_STA				0x20	//��ʼ��־
#define		LPC_I2C_EN				0x40	//����I2C����

#define I2C_IDLE			0
#define I2C_STARTED			1
#define I2C_RESTARTED		2
#define I2C_REPEATED_START	3

#define I2CONSET_I2EN		0x00000040  /* I2C Control Set Register */
#define I2CONSET_AA			0x00000004
#define I2CONSET_SI			0x00000008
#define I2CONSET_STO		0x00000010
#define I2CONSET_STA		0x00000020

#define I2CONCLR_AAC		0x00000004  /* I2C Control clear Register */
#define I2CONCLR_SIC		0x00000008
#define I2CONCLR_STAC		0x00000020
#define I2CONCLR_I2ENC		0x00000040

#define I2DAT_I2C			0x00000000  /* I2C Data Reg */
#define I2ADR_I2C			0x00000000  /* I2C Slave Address Reg */
#define I2SCLH_SCLH			0x00000180  /* I2C SCL Duty Cycle High Reg */
#define I2SCLL_SCLL			0x00000180  /* I2C SCL Duty Cycle Low Reg */
#define I2SCLH_HS_SCLH		0x00000015  /* Fast Plus I2C SCL Duty Cycle High Reg */
#define I2SCLL_HS_SCLL		0x00000015  /* Fast Plus I2C SCL Duty Cycle Low Reg */

/*@}*/ /* end of group LPC11xx_I2C */


/*------------- Watchdog Timer (WDT) -----------------------------------------*/
/** @addtogroup LPC11xx_WDT LPC11xx WatchDog Timer
  @{
*/


/*@}*/ /* end of group LPC11xx_WDT */


/*------------- Analog-to-Digital Converter (ADC) ----------------------------*/
/** @addtogroup LPC11xx_ADC LPC11xx Analog-to-Digital Converter
  @{
*/
#define ADC_DONE		  0x80000000
#define ADC_OVERRUN		0x40000000
#define ADC_ADINT		  0x00010000

/*@}*/ /* end of group LPC11xx_ADC */


/*------------- CAN Controller (CAN) ----------------------------*/
/** @addtogroup LPC11xx_CAN LPC11xx Controller Area Network(CAN)
  @{
*/


/*@}*/ /* end of group LPC11xx_CAN */


#ifdef __cplusplus
}
#endif

#endif  /* __LPC11xx_BIT_H__ */
