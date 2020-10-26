#ifndef GFX_SOFT_H
#define GFX_SOFT_H

#include "gfx_rendering_api.h"

#ifdef RS97
//#define CONVERT
//#define DIRECT_SDL
#define SDL_SURFACE
#else
//#define CONVERT
#define DIRECT_SDL
#define SDL_SURFACE
#endif

extern struct GfxRenderingAPI gfx_soft_api;

#if defined(DIRECT_SDL) && defined(SDL_SURFACE)
	extern uint32_t *gfx_output;
#endif

#ifdef CONVERT
#include <SDL/SDL.h>
extern uint16_t *gfx_output;
#else
extern uint32_t *gfx_output;
#endif

#endif
