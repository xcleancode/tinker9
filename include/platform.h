#pragma once
#include "rc_man.h"


TINKER_NAMESPACE_BEGIN
constexpr int UNSET_PLTFM = 0x000;
constexpr int ACC_PLTFM = 0x001;
constexpr int CU_PLTFM = 0x002;


extern int pltfm_config;


void platform_data(rc_op);
TINKER_NAMESPACE_END
