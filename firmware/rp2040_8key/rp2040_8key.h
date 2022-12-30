#pragma once

#include "quantum.h"


#define LAYOUT_ortho_2x8( \
	L00, L01, L02, L03,  R00, R01, R02, R03,\
    L10, L11, L12, L13,  R10, R11, R12, R13\
	) \
	{ \
		{ L00, L01, L02, L03}, \
        { L10, L11, L12, L13}, \
        { R00, R01, R02, R03}, \
		{ R10, R11, R12, R13} \
	}
