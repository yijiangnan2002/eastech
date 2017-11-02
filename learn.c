#include "config.h"
void Learn_IR_Key_Process(void)
{
   	if (g_fgIrNewKey_multi_ir)
   	{
	   	g_fgIrNewKey_multi_ir = 0;
	      if (g_ucKeyCode==_KEY_NOKEY)
          	{
	   		g_ucKeyCode=(System_Key_Type)IR_key_convert_Multi_Ir();
          	}
   	}
}

