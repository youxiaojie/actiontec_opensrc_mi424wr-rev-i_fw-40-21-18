/* include/openh323buildopts.h.  Generated by configure.  */
/*
 * openh323buildopts.h
 *
 * Build options generated by the configure script.
 *
 * Portable Windows Library
 *
 * Copyright (c) 2003 Equivalence Pty. Ltd.
 *
 * The contents of this file are subject to the Mozilla Public License
 * Version 1.0 (the "License"); you may not use this file except in
 * compliance with the License. You may obtain a copy of the License at
 * http://www.mozilla.org/MPL/
 *
 * Software distributed under the License is distributed on an "AS IS"
 * basis, WITHOUT WARRANTY OF ANY KIND, either express or implied. See
 * the License for the specific language governing rights and limitations
 * under the License.
 *
 * The Original Code is Portable Windows Library.
 *
 * The Initial Developer of the Original Code is Equivalence Pty. Ltd.
 *
 * Contributor(s): ______________________________________.
 *
 * $Log: openh323buildopts.h,v $
 * Revision 1.2  2005/09/11 06:16:58  tali
 * B25118 Build makefiles for OpenH323
 *
 * Revision 1.2  2005/08/14 09:14:11  dmitry
 * Meging initial version on dev from vendor branch. (tag openh323-1_17_1).
 *
 * Revision 1.1.2.1  2005/08/14 09:06:06  dmitry
 * Commit of initial version of openh323 version 1_17_1 (tag v1_17_1 in their
 * repository)
 *
 * Revision 1.21  2005/01/03 06:25:52  csoutheren
 * Added extensive support for disabling code modules at compile time
 *
 * Revision 1.20  2004/12/08 05:24:38  csoutheren
 * Changed pragma directive to match changes for Linux
 *
 * Revision 1.19  2004/12/08 01:59:23  csoutheren
 * initial support for Transnexus OSP toolkit
 *
 * Revision 1.18  2004/11/26 03:06:12  csoutheren
 * Added detection of Transnexus OSP toolkit under Windows
 *
 * Revision 1.17  2004/05/18 22:27:33  csoutheren
 * Initial support for embedded codecs
 *
 * Revision 1.16  2004/04/29 14:47:56  csoutheren
 * Reconfigured plugin makefiles per suggestions from Damien Sandras
 * Changed install targets to use $(INSTALL)
 *
 * Revision 1.15  2004/04/22 22:35:00  csoutheren
 * Fixed mispelling of Guilhem Tardy - my apologies to him
 *
 * Revision 1.14  2004/04/22 14:22:20  csoutheren
 * Added RFC 2190 H.263 code as created by Guilhem Tardy and AliceStreet
 * Many thanks to them for their contributions.
 *
 * Revision 1.13  2004/01/30 01:45:30  csoutheren
 * Moved some compiler flags to include files
 *
 * Revision 1.12  2004/01/27 10:55:24  csoutheren
 * Added version information to openh323buildopts.h
 *
 * Revision 1.11  2003/12/29 12:13:26  csoutheren
 * configure now checks for libspeex in system libraries and compares
 * version against version in local sources. Also use --enable-localspeex to
 * force use of local Speex or system Speex
 *
 * Revision 1.10  2003/12/03 06:47:11  csoutheren
 * Fixed yet another problem with configuring video under Windows
 *
 * Revision 1.9  2003/12/03 06:44:07  csoutheren
 * Fixed problem with configuring video under Windows
 *
 * Revision 1.8  2003/11/25 08:30:55  rjongbloed
 * Added ability to build system without video or audio sw codecs.
 *
 * Revision 1.7  2003/07/24 08:09:59  dereksmithies
 * Update to reflect new vic h263 codec, which is optionally loaded.
 *
 * Revision 1.6  2003/05/05 11:59:21  robertj
 * Changed to use autoconf style selection of options and subsystems.
 *
 * Revision 1.5  2003/05/02 07:59:34  robertj
 * Fixed AVCODEC directory missing slash
 *
 * Revision 1.4  2003/05/02 07:35:32  robertj
 * Fixed ffmpeg AVCODEC include file
 *
 * Revision 1.3  2003/05/02 07:27:23  robertj
 * Fixed voice age library
 *
 * Revision 1.2  2003/05/02 07:08:12  craigs
 * Removed DOS end fo line chars
 *
 * Revision 1.1  2003/05/02 07:04:11  craigs
 * Initial version
 *
 */

#ifndef _OPENH323_BUILDOPTS_H
#define _OPENH323_BUILDOPTS_H

/////////////////////////////////////////////////
//
// Major options
//

#define	OPENH323_MAJOR 1
#define	OPENH323_MINOR 17
#define	OPENH323_BUILD 1
#define	OPENH323_VERSION "1.17.1"

#define H323_AUDIO_CODECS

#ifndef H323_AUDIO_CODECS
#define NO_H323_AUDIO_CODECS
#endif


#define H323_VIDEO

#ifndef H323_VIDEO
#define NO_H323_VIDEO
#endif

//////////////////////////////////////////////////

#ifdef H323_AUDIO_CODECS

/* #undef H323_EMBEDDED_GSM */

#endif // H323_AUDIO_CODECS


#ifdef H323_VIDEO

/////////////////////////////////////////////////
//
// RFC 2190 compatible H.263
//

/* #undef H323_RFC2190_AVCODEC */

#if defined(_MSC_VER)

#if H323_RFC2190_AVCODEC
#pragma include_alias(<avcodec.h>, <@H323_RFC2190_AVCODEC_DIR@/avcodec.h>)
#endif

#define H323_RFC2190_AVCODEC_DIR     "@H323_RFC2190_AVCODEC_DIR@/"

#endif // _MSC_VER


/////////////////////////////////////////////////
//
// ffmpeg H.263 Support
//

/* #undef H323_AVCODEC */

#if defined(_MSC_VER)

#if H323_AVCODEC
#pragma include_alias(<avcodec.h>, <@H323_AVCODEC_DIR@/avcodec.h>)
#endif

#define H323_AVCODEC_DIR     "@H323_AVCODEC_DIR@/"

#endif // _MSC_VER


/////////////////////////////////////////////////
//
// Vic H.263 Support
//

/* #undef H323_VICH263 */

#if defined(_MSC_VER)

#if H323_VICH263
#pragma include_alias(<encoder-h263.h>, <@H323_VICH263_DIR@/encoder-h263.h>)
#pragma include_alias(<decoder-h263.h>, <@H323_VICH263_DIR@/decoder-h263.h>)
#endif

#define H323_VICH263_DIR     "@H323_VICH263_DIR@/"

#ifdef _DEBUG
#define H323_VICH263_LIB_DIR H323_VICH263_DIR"Debug/"
#else
#define H323_VICH263_LIB_DIR H323_VICH263_DIR"Release/"
#endif

#define H323_VICH263_LIBRARY H323_VICH263_LIB_DIR"libvich263.lib"

#endif // _MSC_VER

#endif // H323_VIDEO

/////////////////////////////////////////////////
//
// Various item support
//

/* #undef H323_T38 */
/* #undef H323_T120 */
/* #undef H323_H248 */
/* #undef H323_H450 */
/* #undef H323_H460 */
/* #undef H323_H501 */
/* #undef HAS_IXJ */

/////////////////////////////////////////////////
//
// Transnexus OSP Tookit Support
//

/* #undef H323_TRANSNEXUS_OSP */

#if H323_TRANSNEXUS_OSP

#if defined(_MSC_VER)
#pragma include_alias(<osp/osp.h>, <@H323_TRANSNEXUS_OSP_DIR@/include/osp/osp.h>)
#define H323_TRANSNEXUS_OSP_DIR         "@H323_TRANSNEXUS_OSP_DIR@/"
#define H323_TRANSNEXUS_OSP_DIR_LIBRARY1 H323_TRANSNEXUS_OSP_DIR "lib/osp.lib"
#define H323_TRANSNEXUS_OSP_DIR_LIBRARY2 H323_TRANSNEXUS_OSP_DIR "pthread/lib/pthreadVC1.lib"
#endif // _MSC_VER

#endif // H323_TRANSNEXUS_OSP

#endif // _OPENH323_BUILDOPTS_H


// End Of File ///////////////////////////////////////////////////////////////