/*
 * Copyright (c) 1998-2000 Apple Computer, Inc. All rights reserved.
 *
 * @APPLE_LICENSE_HEADER_START@
 * 
 * Copyright (c) 1999-2003 Apple Computer, Inc.  All Rights Reserved.
 * 
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this
 * file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 * 
 * @APPLE_LICENSE_HEADER_END@
 */

#ifndef __APPLE_INTEL_AC97_DEBUG_H
#define __APPLE_INTEL_AC97_DEBUG_H

/*
 * Set log level from 0 to 2.
 */
#define DEBUG_LEVEL   0

#if (DEBUG_LEVEL >= 1)
#define LOG_LEVEL_1(fmt, args...) kprintf(fmt, ## args)
#else
#define LOG_LEVEL_1(fmt, args...)
#endif

#if (DEBUG_LEVEL >= 2)
#define LOG_LEVEL_2(fmt, args...) kprintf(fmt, ## args)
#else
#define LOG_LEVEL_2(fmt, args...)
#endif

#define DebugLog   LOG_LEVEL_1

#endif /* !__APPLE_INTEL_AC97_DEBUG_H */
