# StonerViewElCap
The StonerView screen saver last released for OS X was not compatible with OS X El Capitan. So I downloaded the source and rebuilt it for El Capitan. This is not a big deal. It took about 5 minutes total. But in case someone wanted it and was not comfortable doing that, here it is. This version was recompiled by Nick Floersch in August 2016. If it burns your house down or kills your cat, it isn't my fault and using this screen saver is your acknowledgement that such repercussions are not attributable to me legally, morally, or like, with karma or something.

# Original README from original author
StonerView 1.3 (Unix/GL version)
Copyright 1998-2001 by Andrew Plotkin.

For the latest version, source code, and links to more of my stuff, see:
http://www.eblong.com/zarf/stonerview.html

You can contact me at:
erkyrath@eblong.com

__________________

This is my favorite screen saver in all the world.

Normally I hate screen savers, I really do. If the point is to save
the screen from burn-in (which doesn't happen these days), they're
silly. If the point is to occupy my attention, I have a host of better
ideas. If the point is to be pretty, they usually fail.

Except ElectroPaint. Which is something that came with SGI machines,
and I presume it still does. It was strange and hypnotic and I could
stare at it for hours. Once I set it running on twelve machines in the
same room and turned the lights off. That was pretty good.

Unfortunately and dammit, the source code to ElectroPaint has never
been released, and it only runs on SGI machines. This bugged me for
years. So I finally got off my butt and reimplemented it for the
Macintosh.

(Actually, the first thing I did was to reimplement it in sound.
That's StonerSound, for which see my web pages. But I made it back
into a visual toy after that.)

Please note that this contains no code from ElectroPaint. I've never
seen any. StonerView is entirely my own code, inspired only by my
memory of what ElectroPaint looked like. (In fact, when I wrote this,
I hadn't seen ElectroPaint run for over a year.)

StonerView originally used QuickDraw 3D for its display system. Since
not even Apple gives a toss about QD3D any more, I've done this quick
port to GL. It just pops up an X window with the goods running
therein. (I used glut for this, because that's what I had example code
for.)

(Wouldn't it be nice if you could make it run in the root window? So
that it would really work as a screen saver? Yes, it would. Wouldn't
it be nice if I had some documentation for glut, so that I could
implement that? Yeah, that too. "Maybe next version." I tried looking
at the GL samples in the xscreensaver distribution... for some reason,
it didn't help.)

__________________

The simplest possible Makefile is included. Type "make". If you get an
error, edit the Makefile and try again. Yes, I live in the Stone Age.

__________________

If you find that StonerView is running too slowly, reduce the window
size.

__________________

Version history:

1.3: Jamie Zawinski (jwz@jwz.org) contributed a pile of code to change 
the framework from GLUT to straight GL. This allows the --root 
option to work, and therefore it works with the xscreensaver
package.

1.2: I forgot the sliding rainbow effect on the chain of polygons!
Can you believe that? I'm such a doof.
Also, Unix/GL version.

1.1: Original release, I think.
__________________

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2 of the License, or (at
your option) any later version. The source code is available at the
web URL above.

This program is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program. (It should be a document entitled "Copying".)
If not, see the web URL above, or write to the Free Software
Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307,
USA.

__________________

