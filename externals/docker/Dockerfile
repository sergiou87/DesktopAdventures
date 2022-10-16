# use alpine as base image
FROM alpine:3.16.2

LABEL author="Sergio Padrino (@sergiou87)"

# install ming-w64
RUN apk add --no-cache --update \
  mingw-w64-gcc make cmake \
  sdl2-dev sdl2_mixer-dev

# set working directory
WORKDIR /src
