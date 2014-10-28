#include <linux/types.h>

/* IOCTL */
#define STACKBD_DO_IT _IOW( 0xad, 0, char * )

#define STACKBD_NAME "stackbd"
#define STACKBD_NAME_0 STACKBD_NAME "0"
