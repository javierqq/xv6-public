#include “types.h”
#include “stat.h”
#include “user.h”

int
main(void)
{
  printf(1, “Processes running %d\n”, getprocs());
  return 0;
}
