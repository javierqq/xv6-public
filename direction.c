#include "types.h"
#include "stat.h"
#include "user.h"

int
main(void)
{
  int dirfis = traduccion();
    if(dirfis == 0){
        printf(1,"La direccion no es válida");
        exit();
    }
    else{
        printf(1,"La direccion fisica es: %x", dirfis);
        exit();
    }
}
