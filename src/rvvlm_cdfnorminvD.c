// SPDX-FileCopyrightText: 2023 Rivos Inc.
//
// SPDX-License-Identifier: Apache-2.0

#include <riscv_vector.h>
#include <stdio.h>

#include "rvvlm.h"
#define API_SIGNATURE API_SIGNATURE_11
#define STRIDE UNIT_STRIDE

#include RVVLM_CDFNORMINVD_VSET_CONFIG

#define COMPILE_FOR_CDFNORMINV
#include "rvvlm_inverrorfuncsD.h"

#include "rvvlm_cdfnorminvD.inc.h"
