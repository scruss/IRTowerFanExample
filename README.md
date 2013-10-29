IRTowerFanExample
=================

**NB: does not actually quite work yet**

Work-in-progress to control this fan. Uses
[shirriff / Arduino-IRremote](https://github.com/shirriff/Arduino-IRremote
"shirriff / Arduino-IRremote").

The clever bit is in the .h file, which is a dump of all the 32-bit
NEC codes sent by the remote. It has some idea of state, and also you
could create masks of the nybbles that turn things on and off.

Product info
------------

* Manufacturer's Product Page: [Ultra Slimline Tower Fan Combo Pack](https://www.sevilleclassics.com/ultra_slim_tower_fan_combo_fan "Ultra Slimline Tower Fan Combo Pack") - note, though, that only the larger fan (# 10127) has IR control
* Manual: [10127](https://www.sevilleclassics.com/uploads/products/pdf_20120315132254_Tower%20Fan.pdf "10127") (PDF)

Bugs
----

* Doesn't *quite* work, but released in the hope of being useful. ☺
* The manual for the 10127 indicates an “eco” mode. My unit is a bit
  older, and doesn't seem to have that.

Author
------

Stewart C. Russell - http://scruss.com/blog/ - Twitter: @scruss

Licence
-------

WTFPL. (Srsly; see COPYING.)
