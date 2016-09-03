/*
 * grove_button.h
 *
 * Copyright (c) 2012 seeed technology inc.
 * Website    : www.seeed.cc
 * Author     : Jack Shao (jacky.shaoxg@gmail.com)
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


#ifndef __GROVE_BUTTON_H__
#define __GROVE_BUTTON_H__

#include "suli2.h"

//GROVE_NAME        "Grove-Button"
//SKU               101020003
//IF_TYPE           GPIO
//IMAGE_URL         https://s3-us-west-2.amazonaws.com/wio.seeed.cc/static/driver_images/grove-Button.jpg
//DESCRIPTION       "Grove Button is a momentary push button. It contains one independent "momentary on/off" button. “Momentary” means that the button rebounds on its own after it is released. The button outputs a HIGH signal when pressed, and LOW when released."
//WIKI_URL          http://www.seeedstudio.com/wiki/Grove_-_Button
//ADDED_AT          "2015-10-01"
//AUTHOR            "SEEED"

class GroveButton
{
public:
    GroveButton(int pin);

    /**
     * Get the status of button
     *
     * @param pressed - 1: pressed, 0: not
     *
     * @return bool
     */
    bool read_pressed(uint8_t *pressed);

    /**
     * Event which is triggered when the button is pressed,
     * event data is the number of PIN where the button is attached.
     */
    DEFINE_EVENT(button_pressed, SULI_EDT_INT);
    IO_T *io;
    uint32_t time;
};

static void button_interrupt_handler(void *para);

#endif
