
*********************
*Package Description*
*********************

This package contains the following three folders:

--Software
A Python script that converts bitmap images into arrays that the firmware can then turn into images.

--Hardware
Eagle files for schematic and PCB layout of the device along with a PNG schematic.  Note that I didn't use the PCB layout in my design.  Instead, I created mine by hand using perf-board.  The layout was created after the fact and *should* work.

These project files are back from before I did any kind of library management, so they don't have any part numbers really…Have fun with that.

--Firmware
Firmware and Makefile for POV toy compiled with avrdude version 5.11.1.

**********
*Warnings*
**********

THIS IS NOT A TUTORIAL! These are the design files that I used to create what you see on my blog.  They are meant to be used as reference only.  If you do not understand how the project is supposed to work, do not begin working on it.  Given how haphazardly a lot of my projects are put together, in all likelihood, the designs presented herein won't actually work due to changes I made post publication.

I am a EE, not a coder.  My programming practices are questionable at best.  If you learn anything from working on this project, please don't let it be how to code like I do.

I no longer have the device in my possession, so I am unable to test the code provided in this package to see if it works.  That being said, it's very unlikely that anything changed since my last build, so it's *probably* okay.

*********
*License*
*********

The contents of this package are released to you under the Creative Commons Attribution-NonCommercial 3.0 Unported license.

This means that you are free to distribute this package and edit it as you see fit.  All works based on this package must provide attribution in some form to me.  A simple link to the blog post along with a description of what you used will suffice.

You may not use this package for any commercial ventures without my consent (but I'm usually cool with it, you just have to send me an email and ask nicely).

More information here:

http://creativecommons.org/licenses/by-nc/3.0/deed.en_US