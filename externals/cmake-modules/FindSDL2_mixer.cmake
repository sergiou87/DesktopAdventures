#
# this module look for SDL2_Mixer (http://www.libsdl.org) support
# it will define the following values
#
# SDLMIXER_INCLUDE_DIR  = where SDL_mixer.h can be found
# SDLMIXER_LIBRARY      = the library to link against SDL2_mixer
# SDLMIXER_FOUND        = set to 1 if SDL2_mixer is found
#

IF(SDL2_Mixer_INCLUDE_DIRS)

  FIND_PATH(SDLMIXER_INCLUDE_DIR SDL2/SDL_mixer.h ${SDL2_Mixer_INCLUDE_DIRS})
  FIND_LIBRARY(SDLMIXER_LIBRARY SDL2_mixer ${SDL2_Mixer_LIBRARY_DIRS})

ELSE(SDL2_Mixer_INCLUDE_DIRS)

  SET(TRIAL_LIBRARY_PATHS
    $ENV{SDL2_MIXER_HOME}/lib
    /usr/lib
    /usr/local/lib
    /sw/lib
    /usr/x86_64-w64-mingw32/lib
  )
  SET(TRIAL_INCLUDE_PATHS
    $ENV{SDL2_MIXER_HOME}/include/SDL2
    /usr/include/SDL2
    /usr/local/include/SDL2
    /sw/include/SDL2
    /usr/x86_64-w64-mingw32/include/SDL2
  )

  FIND_LIBRARY(SDLMIXER_LIBRARY SDL2_mixer ${TRIAL_LIBRARY_PATHS})
  FIND_PATH(SDLMIXER_INCLUDE_DIR SDL_mixer.h ${TRIAL_INCLUDE_PATHS})

ENDIF(SDL2_Mixer_INCLUDE_DIRS)

IF(SDLMIXER_INCLUDE_DIR AND SDLMIXER_LIBRARY)
  SET(SDLMIXER_FOUND 1 CACHE BOOL "Found SDL2_Mixer library")
ELSE(SDLMIXER_INCLUDE_DIR AND SDLMIXER_LIBRARY)
  SET(SDLMIXER_FOUND 0 CACHE BOOL "Not fount SDL2_Mixer library")
ENDIF(SDLMIXER_INCLUDE_DIR AND SDLMIXER_LIBRARY)

MARK_AS_ADVANCED(
  SDLMIXER_INCLUDE_DIR
  SDLMIXER_LIBRARY
  SDLMIXER_FOUND
)
