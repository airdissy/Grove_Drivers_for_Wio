/*
* grove_sound.h
*
* Copyright (c) 2016 seeed technology inc.
* Website    : www.seeed.cc
* Author     : Travis Brown (warriorrocker@gmail.com)
*
* The MIT License (MIT)
*
* Permission is hereby granted, free of charge, to any person obtaining a copy
* of this software and associated documentation files (the "Software"), to deal
* in the Software without restriction, including without limitation the rights
* to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
* copies of the Software, and to permit persons to whom the Software is
* furnished to do so, subject to the following conditions:
*
* The above copyright notice and this permission notice shall be included in
* all copies or substantial portions of the Software.
*
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
* AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
* OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
* THE SOFTWARE.
*/


#ifndef __GROVE_SOUND_H__
#define __GROVE_SOUND_H__

#include "suli2.h"

//GROVE_NAME        "Grove - Sound Sensor"
//SKU               101020023
//IF_TYPE           ANALOG
//IMAGE_URL         https://s3-us-west-2.amazonaws.com/wio.seeed.cc/static/driver_images/grove-sound-sensor.jpg
//DESCRIPTION       "Grove - Sound Sensor can detect the sound strength of the environment. The main component of the module is a simple microphone, which is based on the LM358 amplifier and an electret microphone."
//WIKI_URL          http://www.seeedstudio.com/wiki/Grove_-_Sound_Sensor
//ADDED_AT          "2016-07-01"
//AUTHOR            "Travis Brown"

class GroveSound
{
public:
    GroveSound(int pin);

    /**
    * Read the sound strength of the environment.
    *
    * @param sound_level - sound strength
    *
    * @return bool
    */
    bool read_sound_level(int *sound_level);

private:
    ANALOG_T *io;
};

#endif
