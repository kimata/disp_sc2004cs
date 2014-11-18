#include <stdio.h>
#include "rp_gpio.h"

int main(int argc,char *argv[])
{
  int i;

  rp_gpio_init();
  rp_gpio_set_mode(14, RP_GPIO_OUTPUT);
  rp_gpio_set_output_bits(1 << 14);



  printf("OK?\n");
}

