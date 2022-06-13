/*
 * generic_error.c
 *
 *  Created on: 26.10.2020
 *      Author: thomas
 */

#include "ux.h"
#include "glyphs.h"

// gcc doesn't know this and ledger's SDK cannot be compiled with Werror!
//#pragma GCC diagnostic error "-Werror"
//#pragma GCC diagnostic error "-Wpedantic"
#pragma GCC diagnostic error "-Wall"
#pragma GCC diagnostic error "-Wextra"

// clang-format off
UX_STEP_NOCB(
    ux_signed_successfully,
    pbb,
    {
    &C_x_icon_check,
    "Signed",
    "Successfully"
    }
);

UX_FLOW(
    ux_flow_signed_successfully,
    &ux_signed_successfully,
    FLOW_END_STEP
);
// clang-format on

void flow_signed_successfully()
{
    ux_flow_init(0, ux_flow_signed_successfully, NULL);
}
