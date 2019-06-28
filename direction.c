#include "types.h"
#include "stat.h"
#include "user.h"

int
main(void)
{
  int dirfis = traduccion();
    if(dirfis == 0){
        printf(1,"Direccion no valida");
        exit();
    }
    else{
        printf(1,"Direccion fisica: %x", dirfis);
        exit();
    }
}
