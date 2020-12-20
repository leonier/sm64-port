#!/bin/sh -e

convert textures/segment2/segment2.05A00.rgba16.png -resize 32x32! build/icon.png
mksquashfs build/jp_pc/sm64.jp.f3dex2e build/icon.png jp_desk/default.retrofw.desktop sm64-port-jp-retrofw.opk 
