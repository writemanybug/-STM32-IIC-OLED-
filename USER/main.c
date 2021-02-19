//              说明: 
//              ----------------------------------------------------------------
//              GND   电源地
//              VCC   接5V或3.3v电源
//              SCL   接PD6（SCL）
//              SDA   接PD7（SDA）            
//              ----------------------------------------------------------------

#include "delay.h"
#include "sys.h"
#include "oled.h"
#include "bmp.h"
 int main(void)
  {	
		u8 t;
		delay_init();	    	 //延时函数初始化	  
		NVIC_Configuration(); 	 //设置NVIC中断分组2:2位抢占优先级，2位响应优先级 	LED_Init();			     //LED端口初始化
	  //		delay_ms(8000);
		OLED_Init();			//初始化OLED  
		OLED_Clear()  	; 
	
	while(1) 
	{		
		OLED_Clear();
		OLED_ShowCHinese(0,0,0);//王
		OLED_ShowCHinese(18,0,1);//星
		OLED_ShowCHinese(36,0,2);//驰
		OLED_ShowCHinese(54,0,3);//电
		OLED_ShowCHinese(72,0,4);//子
		OLED_ShowCHinese(90,0,5);//科
		OLED_ShowCHinese(108,0,6);//技
	}	  
	
}
	