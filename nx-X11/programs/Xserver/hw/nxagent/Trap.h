/**************************************************************************/
/*                                                                        */
/* Copyright (c) 2001, 2007 NoMachine, http://www.nomachine.com/.         */
/*                                                                        */
/* NXAGENT, NX protocol compression and NX extensions to this software    */
/* are copyright of NoMachine. Redistribution and use of the present      */
/* software is allowed according to terms specified in the file LICENSE   */
/* which comes in the source distribution.                                */
/*                                                                        */
/* Check http://www.nomachine.com/licensing.html for applicability.       */
/*                                                                        */
/* NX and NoMachine are trademarks of NoMachine S.r.l.                    */
/*                                                                        */
/* All rights reserved.                                                   */
/*                                                                        */
/**************************************************************************/

#ifndef __Traps_H__
#define __Traps_H__

/*
 * Set if we are dispatching a render
 * extension request. Used to avoid
 * reentrancy in GC operations.
 */

extern int nxagentGCTrap;

/*
 * Set if we are enqueing an internal
 * operation, CreateWindow and Reparent-
 * Window. Used to remove any screen operation.
 */

extern int nxagentScreenTrap;

/*
 * Set if we detected that our RENDER
 * implementation is faulty.
 */

extern int nxagentRenderTrap;

/*
 * Set if we are executing a GC operation
 * only on the X side. Used to avoid
 * reentrancy in FB layer.
 */

extern int nxagentFBTrap;

/*
 * Set if we are dispatching a shared
 * memory extension request.
 */

extern int nxagentShmTrap;

/*
 * Set if a shared pixmap operation is
 * requested by the client.
 */

extern int nxagentShmPixmapTrap;

/*
 * Set if we are dispatching a XVideo
 * extension request.
 */

extern int nxagentXvTrap;

/*
 * Set if we are dispatching a GLX
 * extension request.
 */

extern int nxagentGlxTrap;

/*
 * Set while we are resuming the session.
 */

extern int nxagentReconnectTrap;

/*
 * Set if we need to realize a drawable
 * by using a lossless encoding.
 */

extern int nxagentLosslessTrap;

/*
 * Set to force the synchronization of
 * a drawable.
 */

extern int nxagentSplitTrap;

#endif /* __Trap_H__ */