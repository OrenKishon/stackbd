#include <stdio.h>
#include <linux/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/ioctl.h>

#include "../common/stackbd.h"

int main(int argc, char *argv[])
{
	int stackbd;

    if (argc < 2)
    {
        printf("Usage:\n\t%s /dev/<raw dev name>\n", argv[0]);
        return 1;
    }
   
    if ((stackbd = open("/dev/" STACKBD_NAME_0, O_RDWR)) < 0)
    {
        printf("error: open /dev/%s: %m", STACKBD_NAME_0);
        return stackbd;
    }    

    printf("do it... <%s>\n", argv[1]);
    if (ioctl(stackbd, STACKBD_DO_IT, argv[1]) < 0)
    {
        fprintf(stderr, "Kernel call returned: %m");
        return 1;
    }
    printf("OK\n");

    return 0;
}
