#include <stdio.h>
#include "rp_gpio.h"
#include "sc2004c_ctrl.h"

int main(int argc,char *argv[])
{
  sc2004c_init();
  sc2004c_print("SC2004CS control");
  sc2004c_set_line(1);
  sc2004c_print("By Raspberry Pi!");
  
  return 0;
}

