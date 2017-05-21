#!/bin/bash
# create multiresolution windows icon
ICON_DST=../../src/qt/res/icons/rain.ico

convert ../../src/qt/res/icons/rain-16.png ../../src/qt/res/icons/rain-32.png ../../src/qt/res/icons/rain-48.png ${ICON_DST}
