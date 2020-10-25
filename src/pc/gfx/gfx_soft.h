#ifndef GFX_SOFT_H
#define GFX_SOFT_H

#include "gfx_rendering_api.h"

#define CONVERT

extern struct GfxRenderingAPI gfx_soft_api;
#ifdef CONVERT
#include <SDL/SDL.h>
extern uint16_t *gfx_output;
#else
extern uint32_t *gfx_output;
#endif

#endif
