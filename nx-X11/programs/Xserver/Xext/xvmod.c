
#ifdef HAVE_XORG_CONFIG_H
#include <xorg-config.h>
#endif

#include <nx-X11/X.h>
#include "misc.h"
#include "scrnintstr.h"
#include "gc.h"
#include <nx-X11/extensions/Xv.h>
#include <nx-X11/extensions/Xvproto.h>
#include "xvdix.h"
#include "xvmodproc.h"

void
XvRegister()
{
    XvScreenInitProc = XvScreenInit;
    XvGetScreenIndexProc = XvGetScreenIndex;
    XvGetRTPortProc = XvGetRTPort;
    XvMCScreenInitProc = XvMCScreenInit;
}

