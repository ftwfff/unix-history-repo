/*
 * Copyright (c) 1983 Regents of the University of California.
 * All rights reserved.
 *
 * %sccs.include.redist.c%
 *
 *	@(#)token.h	3.8 (Berkeley) %G%
 */

#define token		(cx.x_token)
#define token_num	(cx.x_val.v_num)
#define token_str	(cx.x_val.v_str)

#define T_EOL		1
#define T_EOF		2
#define T_COMP		3
#define T_PLUS		4
#define T_MINUS		5
#define T_MUL		6
#define T_DIV		7
#define T_LP		8
#define T_RP		9
#define T_LB		10
#define T_RB		11
#define T_DOLLAR	12
#define T_COMMA		13
#define T_QUEST		14
#define T_COLON		15
#define T_CHAR		16
#define T_STR		17
#define T_NUM		18
#define T_MOD		19
#define T_XOR		20
#define T_DQ		21		/* $? */
#define T_GE		22
#define T_RS		23
#define T_GT		24
#define T_LE		25
#define T_LS		26
#define T_LT		27
#define T_EQ		28
#define T_ASSIGN	29
#define T_NE		30
#define T_NOT		31
#define T_ANDAND	32
#define T_AND		33
#define T_OROR		34
#define T_OR		35

#define T_IF		40
#define T_THEN		41
#define T_ELSIF		42
#define T_ELSE		43
#define T_ENDIF		44
