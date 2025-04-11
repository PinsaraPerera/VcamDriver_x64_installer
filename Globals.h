#pragma once

//#include <guiddef.h> // Include this header to define GUID
#include <windows.h>

// {45CD5A30-1256-42E4-9103-32443A5EEDFD}
static const GUID CLSID_TextBlurVCam =
{ 0x45cd5a30, 0x1256, 0x42e4, { 0x91, 0x3, 0x32, 0x44, 0x3a, 0x5e, 0xed, 0xfd } };

#define SAFE_RELEASE(p) { if (p) { (p)->Release(); (p) = NULL; } }
