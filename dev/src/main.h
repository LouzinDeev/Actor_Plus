#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED

#define SAMPGDK_AMALGAMATION
#include <iostream>
#include <chrono>
#include <thread>
#include <future>
#include "sampgdk.h"
#include "amx/amx.h"
#include "plugincommon.h"

#define MAJOR_VERSION (1)
#define MINOR_VERSION (2)
#define PATCH_VERSION (1)

typedef void(*logprintf_t)(const char* format, ...);
extern logprintf_t logprintf;

#endif