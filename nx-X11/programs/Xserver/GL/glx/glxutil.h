#ifdef HAVE_DIX_CONFIG_H
#include <dix-config.h>
#endif

#ifndef _glxcmds_h_
#define _glxcmds_h_

/*
** License Applicability. Except to the extent portions of this file are
** made subject to an alternative license as permitted in the SGI Free
** Software License B, Version 1.1 (the "License"), the contents of this
** file are subject only to the provisions of the License. You may not use
** this file except in compliance with the License. You may obtain a copy
** of the License at Silicon Graphics, Inc., attn: Legal Services, 1600
** Amphitheatre Parkway, Mountain View, CA 94043-1351, or at:
** 
** http://oss.sgi.com/projects/FreeB
** 
** Note that, as provided in the License, the Software is distributed on an
** "AS IS" basis, with ALL EXPRESS AND IMPLIED WARRANTIES AND CONDITIONS
** DISCLAIMED, INCLUDING, WITHOUT LIMITATION, ANY IMPLIED WARRANTIES AND
** CONDITIONS OF MERCHANTABILITY, SATISFACTORY QUALITY, FITNESS FOR A
** PARTICULAR PURPOSE, AND NON-INFRINGEMENT.
** 
** Original Code. The Original Code is: OpenGL Sample Implementation,
** Version 1.2.1, released January 26, 2000, developed by Silicon Graphics,
** Inc. The Original Code is Copyright (c) 1991-2000 Silicon Graphics, Inc.
** Copyright in any portions created by third parties is as indicated
** elsewhere herein. All Rights Reserved.
** 
** Additional Notice Provisions: The application programming interfaces
** established by SGI in conjunction with the Original Code are The
** OpenGL(R) Graphics System: A Specification (Version 1.2.1), released
** April 1, 1999; The OpenGL(R) Graphics System Utility Library (Version
** 1.3), released November 4, 1998; and OpenGL(R) Graphics with the X
** Window System(R) (Version 1.3), released October 19, 1998. This software
** was created using the OpenGL(R) version 1.2.1 Sample Implementation
** published by SGI, but has not been independently verified as being
** compliant with the OpenGL(R) version 1.2.1 Specification.
**
*/

extern void __glXNop(void);

/* memory management */
extern void *__glXMalloc(size_t size);
extern void *__glXCalloc(size_t numElements, size_t elementSize);
extern void *__glXRealloc(void *addr, size_t newSize);
extern void __glXFree(void *ptr);

/* relate contexts with drawables */
extern void __glXAssociateContext(__GLXcontext *glxc);
extern void __glXDeassociateContext(__GLXcontext *glxc);

/* drawable operation */
extern void __glXGetDrawableSize(__GLdrawablePrivate *glPriv, 
				 GLint *x, GLint *y, 
				 GLuint *width, GLuint *height);
extern GLboolean __glXResizeDrawable(__GLdrawablePrivate *glPriv);
extern GLboolean __glXResizeDrawableBuffers(__GLXdrawablePrivate *glxPriv);

/* drawable management */
extern void __glXRefDrawablePrivate(__GLXdrawablePrivate *glxPriv);
extern void __glXUnrefDrawablePrivate(__GLXdrawablePrivate *glxPriv);
extern __GLXdrawablePrivate *__glXCreateDrawablePrivate(DrawablePtr pDraw, 
							XID glxpixmapId, 
							__GLcontextModes *modes);
extern GLboolean __glXDestroyDrawablePrivate(__GLXdrawablePrivate *glxPriv);
extern __GLXdrawablePrivate *__glXFindDrawablePrivate(XID glxpixmapId);
extern __GLXdrawablePrivate *__glXGetDrawablePrivate(DrawablePtr pDraw, 
						     XID glxpixmapId, 
						     __GLcontextModes *modes);
extern void __glXCacheDrawableSize(__GLXdrawablePrivate *glxPriv);

/* context helper routines */
extern __GLXcontext *__glXLookupContextByTag(__GLXclientState*, GLXContextTag);

/* init helper routines */
extern void *__glXglDDXScreenInfo(void);
extern void *__glXglDDXExtensionInfo(void);

#endif /* _glxcmds_h_ */

