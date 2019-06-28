#include "types.h"
#include "stat.h"
#include "user.h"

int
main(void)
{
  printf(1, "Address %d\n", translate());
  return 0;
}
