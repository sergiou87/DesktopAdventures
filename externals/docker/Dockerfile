# use ubuntu as base image
FROM ubuntu:latest

LABEL author="Sergio Padrino (@sergiou87)"

# install ming-w64
RUN apt-get update \
  && apt-get install -y mingw-w64 make cmake wget unzip

RUN wget https://github.com/libsdl-org/SDL/releases/download/release-2.24.1/SDL2-devel-2.24.1-mingw.zip \
  && unzip SDL2-devel-2.24.1-mingw.zip \
  && cd SDL2-2.24.1 \
  && mkdir -p /usr/local/x86_64-w64-mingw32 \
  && sed -i 's/CROSS_PATH := \/usr\/local/CROSS_PATH := \/usr/g' Makefile \
  && make cross

RUN wget https://github.com/libsdl-org/SDL_mixer/releases/download/release-2.6.2/SDL2_mixer-devel-2.6.2-mingw.zip \
  && unzip SDL2_mixer-devel-2.6.2-mingw.zip \
  && cd SDL2_mixer-2.6.2 \
  && sed -i 's/CROSS_PATH := \/usr\/local/CROSS_PATH := \/usr/g' Makefile \
  && make cross

ENV CC="x86_64-w64-mingw32-gcc --sysroot=/usr/x86_64-w64-mingw32"
ENV PATH="${PATH}:/usr/x86_64-w64-mingw32/bin"

# set working directory
WORKDIR /src
