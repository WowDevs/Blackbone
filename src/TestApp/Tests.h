#pragma once

#include "../BlackBone/Process.h"
#include "../BlackBone/PEParser.h"
#include "../BlackBone/Utils.h"
#include "../BlackBone/DynImport.h"

#include <iostream>

using namespace blackbone;

void TestLocalHook();
void TestRemoteHook();
void TestMMap();
void TestRemoteCall();