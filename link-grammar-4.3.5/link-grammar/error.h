/*************************************************************************/
/* Copyright (c) 2004                                                    */
/* Daniel Sleator, David Temperley, and John Lafferty                    */
/* All rights reserved                                                   */
/*                                                                       */
/* Use of the link grammar parsing system is subject to the terms of the */
/* license set forth in the LICENSE file included with this software,    */ 
/* and also available at http://www.link.cs.cmu.edu/link/license.html    */
/* This license allows free redistribution and use in source and binary  */
/* forms, with or without modification, subject to certain conditions.   */
/*                                                                       */
/*************************************************************************/
#ifndef _ERRORH_
#define _ERRORH_

typedef enum {
    NODICT=1,
    DICTPARSE,
    WORDFILE,
    SEPARATE,
    NOTINDICT,
    CHARSET,
    BUILDEXPR,
    INTERNALERROR,
}   LP_error_type;

#if     __GNUC__ > 2 || (__GNUC__ == 2 && __GNUC_MINOR__ > 4)
#define GNUC_PRINTF( format_idx, arg_idx )    \
  __attribute__((__format__ (__printf__, format_idx, arg_idx)))
#else
#define GNUC_PRINTF( format_idx, arg_idx )
#endif

void lperror(int lperr, const char *fmt, ...) GNUC_PRINTF(2,3);
void error(const char *fmt, ...) GNUC_PRINTF(1,2);

#endif

