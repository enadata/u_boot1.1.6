#include "common.h"
#include "command.h"

void serial_init(void)
{
}

static int do_installApp(cmd_tbl_t *cmdtp, int flag, int argc, char *const argv[])
{
    printf("install app .....\n");

    return 0;
}

U_BOOT_CMD(
    installApp, 2, 0, do_installApp,
    "installApp - using uart to intall u-boot.",
    "- use uart cmd install u-boot.");
