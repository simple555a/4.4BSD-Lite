/*-
 * Copyright (c) 1992, 1993, 1994
 *	The Regents of the University of California.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. All advertising materials mentioning features or use of this software
 *    must display the following acknowledgement:
 *	This product includes software developed by the University of
 *	California, Berkeley and its contributors.
 * 4. Neither the name of the University nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 *	@(#)search.h	9.2 (Berkeley) 11/17/94
 */

#define	RE_WSTART	"[[:<:]]"	/* Not-in-word search patterns. */
#define	RE_WSTOP	"[[:>:]]"

#define	SEARCH_EOL	0x001		/* Offset past EOL is okay. */
#define	SEARCH_FILE	0x002		/* Search the entire file. */
#define	SEARCH_MSG	0x004		/* Display search warning messages. */
#define	SEARCH_PARSE	0x008		/* Parse the search pattern. */
#define	SEARCH_SET	0x010		/* Set search direction. */
#define	SEARCH_TAG	0x020		/* Search pattern is a tag pattern. */

enum direction	{ NOTSET, FORWARD, BACKWARD };

/* Search functions. */
int	b_search __P((SCR *, MARK *, MARK *, char *, char **, u_int *));
int	f_search __P((SCR *, MARK *, MARK *, char *, char **, u_int *));
int	re_conv __P((SCR *, char **, int *));
void	re_error __P((SCR *, int, regex_t *));
