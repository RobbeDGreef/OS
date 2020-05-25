#include <stdint.h>

static const uint8_t MonospaceFont_16_bitmap[] = {
	/*Unicode: U+0020 ( ) , Width: 5 */
	0x00, //.....
	0x00, //.....
	0x00, //.....
	0x00, //.....
	0x00, //.....
	0x00, //.....
	0x00, //.....
	0x00, //.....
	0x00, //.....
	0x00, //.....
	0x00, //.....
	0x00, //.....
	0x00, //.....
	0x00, //.....
	0x00, //.....
	0x00, //.....

	/*Unicode: U+0021 (!) , Width: 1 */
	0x00, //.
	0x00, //.
	0x00, //.
	0x80, //%
	0x80, //%
	0x80, //%
	0x80, //%
	0x80, //%
	0x80, //%
	0x00, //.
	0x00, //.
	0x80, //%
	0x80, //%
	0x00, //.
	0x00, //.
	0x00, //.

	/*Unicode: U+0022 (") , Width: 3 */
	0x00, //...
	0x00, //...
	0x00, //...
	0xa0, //%.%
	0xa0, //%.%
	0xa0, //%.%
	0xa0, //%.%
	0x00, //...
	0x00, //...
	0x00, //...
	0x00, //...
	0x00, //...
	0x00, //...
	0x00, //...
	0x00, //...
	0x00, //...

	/*Unicode: U+0023 (#) , Width: 8 */
	0x00, //........
	0x00, //........
	0x00, //........
	0x12, //...%..%.
	0x12, //...%..%.
	0x16, //...%.%%.
	0x7f, //.%%%%%%%
	0x24, //..%..%..
	0x24, //..%..%..
	0xfe, //%%%%%%%.
	0x28, //..%.%...
	0x48, //.%..%...
	0x48, //.%..%...
	0x00, //........
	0x00, //........
	0x00, //........

	/*Unicode: U+0024 ($) , Width: 7 */
	0x00, //.......
	0x00, //.......
	0x10, //...%...
	0x10, //...%...
	0x7c, //.%%%%%.
	0xd2, //%%.%..%
	0x90, //%..%...
	0xd0, //%%.%...
	0x78, //.%%%%..
	0x16, //...%.%%
	0x12, //...%..%
	0x96, //%..%.%%
	0x7c, //.%%%%%.
	0x10, //...%...
	0x10, //...%...
	0x00, //.......

	/*Unicode: U+0025 (%) , Width: 8 */
	0x00, //........
	0x00, //........
	0x00, //........
	0x60, //.%%.....
	0x90, //%..%....
	0x90, //%..%....
	0x62, //.%%...%.
	0x0c, //....%%..
	0x30, //..%%....
	0x46, //.%...%%.
	0x09, //....%..%
	0x09, //....%..%
	0x06, //.....%%.
	0x00, //........
	0x00, //........
	0x00, //........

	/*Unicode: U+0026 (&) , Width: 7 */
	0x00, //.......
	0x00, //.......
	0x00, //.......
	0x38, //..%%%..
	0x40, //.%.....
	0x40, //.%.....
	0x60, //.%%....
	0x60, //.%%....
	0x92, //%..%..%
	0x8a, //%...%.%
	0x8e, //%...%%%
	0xcc, //%%..%%.
	0x7e, //.%%%%%%
	0x00, //.......
	0x00, //.......
	0x00, //.......

	/*Unicode: U+0027 (') , Width: 1 */
	0x00, //.
	0x00, //.
	0x00, //.
	0x80, //%
	0x80, //%
	0x80, //%
	0x80, //%
	0x00, //.
	0x00, //.
	0x00, //.
	0x00, //.
	0x00, //.
	0x00, //.
	0x00, //.
	0x00, //.
	0x00, //.

	/*Unicode: U+0028 (() , Width: 3 */
	0x00, //...
	0x00, //...
	0x20, //..%
	0x40, //.%.
	0x40, //.%.
	0x80, //%..
	0x80, //%..
	0x80, //%..
	0x80, //%..
	0x80, //%..
	0x80, //%..
	0x40, //.%.
	0x40, //.%.
	0x20, //..%
	0x00, //...
	0x00, //...

	/*Unicode: U+0029 ()) , Width: 3 */
	0x00, //...
	0x00, //...
	0x80, //%..
	0x40, //.%.
	0x40, //.%.
	0x20, //..%
	0x20, //..%
	0x20, //..%
	0x20, //..%
	0x20, //..%
	0x20, //..%
	0x40, //.%.
	0x40, //.%.
	0x80, //%..
	0x00, //...
	0x00, //...

	/*Unicode: U+002a (*) , Width: 7 */
	0x00, //.......
	0x00, //.......
	0x00, //.......
	0x10, //...%...
	0x92, //%..%..%
	0x38, //..%%%..
	0x38, //..%%%..
	0x92, //%..%..%
	0x10, //...%...
	0x00, //.......
	0x00, //.......
	0x00, //.......
	0x00, //.......
	0x00, //.......
	0x00, //.......
	0x00, //.......

	/*Unicode: U+002b (+) , Width: 7 */
	0x00, //.......
	0x00, //.......
	0x00, //.......
	0x00, //.......
	0x00, //.......
	0x10, //...%...
	0x10, //...%...
	0x10, //...%...
	0xfe, //%%%%%%%
	0x10, //...%...
	0x10, //...%...
	0x10, //...%...
	0x00, //.......
	0x00, //.......
	0x00, //.......
	0x00, //.......

	/*Unicode: U+002c (,) , Width: 3 */
	0x00, //...
	0x00, //...
	0x00, //...
	0x00, //...
	0x00, //...
	0x00, //...
	0x00, //...
	0x00, //...
	0x00, //...
	0x00, //...
	0x00, //...
	0x60, //.%%
	0x60, //.%%
	0x40, //.%.
	0x80, //%..
	0x00, //...

	/*Unicode: U+002d (-) , Width: 4 */
	0x00, //....
	0x00, //....
	0x00, //....
	0x00, //....
	0x00, //....
	0x00, //....
	0x00, //....
	0x00, //....
	0x00, //....
	0xf0, //%%%%
	0x00, //....
	0x00, //....
	0x00, //....
	0x00, //....
	0x00, //....
	0x00, //....

	/*Unicode: U+002e (.) , Width: 2 */
	0x00, //..
	0x00, //..
	0x00, //..
	0x00, //..
	0x00, //..
	0x00, //..
	0x00, //..
	0x00, //..
	0x00, //..
	0x00, //..
	0x00, //..
	0xc0, //%%
	0xc0, //%%
	0x00, //..
	0x00, //..
	0x00, //..

	/*Unicode: U+002f (/) , Width: 6 */
	0x00, //......
	0x00, //......
	0x00, //......
	0x04, //.....%
	0x08, //....%.
	0x08, //....%.
	0x08, //....%.
	0x10, //...%..
	0x10, //...%..
	0x20, //..%...
	0x20, //..%...
	0x40, //.%....
	0x40, //.%....
	0x40, //.%....
	0x80, //%.....
	0x00, //......

	/*Unicode: U+0030 (0) , Width: 7 */
	0x00, //.......
	0x00, //.......
	0x00, //.......
	0x38, //..%%%..
	0x44, //.%...%.
	0x82, //%.....%
	0x82, //%.....%
	0x92, //%..%..%
	0x82, //%.....%
	0x82, //%.....%
	0x82, //%.....%
	0x44, //.%...%.
	0x38, //..%%%..
	0x00, //.......
	0x00, //.......
	0x00, //.......

	/*Unicode: U+0031 (1) , Width: 5 */
	0x00, //.....
	0x00, //.....
	0x00, //.....
	0x60, //.%%..
	0xa0, //%.%..
	0x20, //..%..
	0x20, //..%..
	0x20, //..%..
	0x20, //..%..
	0x20, //..%..
	0x20, //..%..
	0x20, //..%..
	0xf8, //%%%%%
	0x00, //.....
	0x00, //.....
	0x00, //.....

	/*Unicode: U+0032 (2) , Width: 8 */
	0x00, //........
	0x00, //........
	0x00, //........
	0x78, //.%%%%...
	0x86, //%....%%.
	0x02, //......%.
	0x02, //......%.
	0x04, //.....%..
	0x0c, //....%%..
	0x18, //...%%...
	0x20, //..%.....
	0x40, //.%......
	0xfe, //%%%%%%%.
	0x00, //........
	0x00, //........
	0x00, //........

	/*Unicode: U+0033 (3) , Width: 7 */
	0x00, //.......
	0x00, //.......
	0x00, //.......
	0x78, //.%%%%..
	0x86, //%....%%
	0x02, //......%
	0x06, //.....%%
	0x3c, //..%%%%.
	0x06, //.....%%
	0x02, //......%
	0x02, //......%
	0x86, //%....%%
	0x78, //.%%%%..
	0x00, //.......
	0x00, //.......
	0x00, //.......

	/*Unicode: U+0034 (4) , Width: 7 */
	0x00, //.......
	0x00, //.......
	0x00, //.......
	0x0c, //....%%.
	0x14, //...%.%.
	0x34, //..%%.%.
	0x24, //..%..%.
	0x44, //.%...%.
	0x84, //%....%.
	0xfe, //%%%%%%%
	0x04, //.....%.
	0x04, //.....%.
	0x04, //.....%.
	0x00, //.......
	0x00, //.......
	0x00, //.......

	/*Unicode: U+0035 (5) , Width: 7 */
	0x00, //.......
	0x00, //.......
	0x00, //.......
	0xfc, //%%%%%%.
	0x80, //%......
	0x80, //%......
	0xf8, //%%%%%..
	0x84, //%....%.
	0x02, //......%
	0x02, //......%
	0x02, //......%
	0x84, //%....%.
	0x78, //.%%%%..
	0x00, //.......
	0x00, //.......
	0x00, //.......

	/*Unicode: U+0036 (6) , Width: 7 */
	0x00, //.......
	0x00, //.......
	0x00, //.......
	0x3c, //..%%%%.
	0x62, //.%%...%
	0xc0, //%%.....
	0x80, //%......
	0xbc, //%.%%%%.
	0xc6, //%%...%%
	0x82, //%.....%
	0x82, //%.....%
	0x46, //.%...%%
	0x3c, //..%%%%.
	0x00, //.......
	0x00, //.......
	0x00, //.......

	/*Unicode: U+0037 (7) , Width: 7 */
	0x00, //.......
	0x00, //.......
	0x00, //.......
	0xfe, //%%%%%%%
	0x06, //.....%%
	0x04, //.....%.
	0x08, //....%..
	0x08, //....%..
	0x10, //...%...
	0x10, //...%...
	0x20, //..%....
	0x20, //..%....
	0x40, //.%.....
	0x00, //.......
	0x00, //.......
	0x00, //.......

	/*Unicode: U+0038 (8) , Width: 7 */
	0x00, //.......
	0x00, //.......
	0x00, //.......
	0x7c, //.%%%%%.
	0xc6, //%%...%%
	0x82, //%.....%
	0xc6, //%%...%%
	0x7c, //.%%%%%.
	0xc6, //%%...%%
	0x82, //%.....%
	0x82, //%.....%
	0xc6, //%%...%%
	0x7c, //.%%%%%.
	0x00, //.......
	0x00, //.......
	0x00, //.......

	/*Unicode: U+0039 (9) , Width: 7 */
	0x00, //.......
	0x00, //.......
	0x00, //.......
	0x78, //.%%%%..
	0xc4, //%%...%.
	0x82, //%.....%
	0x82, //%.....%
	0xc6, //%%...%%
	0x7a, //.%%%%.%
	0x02, //......%
	0x06, //.....%%
	0x8c, //%...%%.
	0x78, //.%%%%..
	0x00, //.......
	0x00, //.......
	0x00, //.......

	/*Unicode: U+003a (:) , Width: 2 */
	0x00, //..
	0x00, //..
	0x00, //..
	0x00, //..
	0x00, //..
	0x00, //..
	0xc0, //%%
	0xc0, //%%
	0x00, //..
	0x00, //..
	0x00, //..
	0xc0, //%%
	0xc0, //%%
	0x00, //..
	0x00, //..
	0x00, //..

	/*Unicode: U+003b (;) , Width: 3 */
	0x00, //...
	0x00, //...
	0x00, //...
	0x00, //...
	0x00, //...
	0x00, //...
	0x60, //.%%
	0x60, //.%%
	0x00, //...
	0x00, //...
	0x00, //...
	0x60, //.%%
	0x60, //.%%
	0x40, //.%.
	0x80, //%..
	0x00, //...

	/*Unicode: U+003c (<) , Width: 7 */
	0x00, //.......
	0x00, //.......
	0x00, //.......
	0x00, //.......
	0x00, //.......
	0x02, //......%
	0x1c, //...%%%.
	0x70, //.%%%...
	0xc0, //%%.....
	0x70, //.%%%...
	0x1c, //...%%%.
	0x02, //......%
	0x00, //.......
	0x00, //.......
	0x00, //.......
	0x00, //.......

	/*Unicode: U+003d (=) , Width: 7 */
	0x00, //.......
	0x00, //.......
	0x00, //.......
	0x00, //.......
	0x00, //.......
	0x00, //.......
	0xfe, //%%%%%%%
	0x00, //.......
	0x00, //.......
	0xfe, //%%%%%%%
	0x00, //.......
	0x00, //.......
	0x00, //.......
	0x00, //.......
	0x00, //.......
	0x00, //.......

	/*Unicode: U+003e (>) , Width: 7 */
	0x00, //.......
	0x00, //.......
	0x00, //.......
	0x00, //.......
	0x00, //.......
	0x80, //%......
	0x70, //.%%%...
	0x1c, //...%%%.
	0x06, //.....%%
	0x1c, //...%%%.
	0x70, //.%%%...
	0x80, //%......
	0x00, //.......
	0x00, //.......
	0x00, //.......
	0x00, //.......

	/*Unicode: U+003f (?) , Width: 5 */
	0x00, //.....
	0x00, //.....
	0x00, //.....
	0x70, //.%%%.
	0x88, //%...%
	0x08, //....%
	0x18, //...%%
	0x10, //...%.
	0x20, //..%..
	0x20, //..%..
	0x00, //.....
	0x20, //..%..
	0x20, //..%..
	0x00, //.....
	0x00, //.....
	0x00, //.....

	/*Unicode: U+0040 (@) , Width: 7 */
	0x00, //.......
	0x00, //.......
	0x00, //.......
	0x3c, //..%%%%.
	0x66, //.%%..%%
	0x42, //.%....%
	0x8e, //%...%%%
	0x92, //%..%..%
	0x92, //%..%..%
	0x92, //%..%..%
	0x92, //%..%..%
	0x8e, //%...%%%
	0x40, //.%.....
	0x60, //.%%....
	0x1c, //...%%%.
	0x00, //.......

	/*Unicode: U+0041 (A) , Width: 7 */
	0x00, //.......
	0x00, //.......
	0x00, //.......
	0x10, //...%...
	0x38, //..%%%..
	0x28, //..%.%..
	0x28, //..%.%..
	0x28, //..%.%..
	0x44, //.%...%.
	0x7c, //.%%%%%.
	0x44, //.%...%.
	0x82, //%.....%
	0x82, //%.....%
	0x00, //.......
	0x00, //.......
	0x00, //.......

	/*Unicode: U+0042 (B) , Width: 7 */
	0x00, //.......
	0x00, //.......
	0x00, //.......
	0xfc, //%%%%%%.
	0x86, //%....%%
	0x82, //%.....%
	0x86, //%....%%
	0xfc, //%%%%%%.
	0x86, //%....%%
	0x82, //%.....%
	0x82, //%.....%
	0x86, //%....%%
	0xfc, //%%%%%%.
	0x00, //.......
	0x00, //.......
	0x00, //.......

	/*Unicode: U+0043 (C) , Width: 7 */
	0x00, //.......
	0x00, //.......
	0x00, //.......
	0x3c, //..%%%%.
	0x42, //.%....%
	0xc0, //%%.....
	0x80, //%......
	0x80, //%......
	0x80, //%......
	0x80, //%......
	0xc0, //%%.....
	0x42, //.%....%
	0x3c, //..%%%%.
	0x00, //.......
	0x00, //.......
	0x00, //.......

	/*Unicode: U+0044 (D) , Width: 7 */
	0x00, //.......
	0x00, //.......
	0x00, //.......
	0xf8, //%%%%%..
	0x8c, //%...%%.
	0x82, //%.....%
	0x82, //%.....%
	0x82, //%.....%
	0x82, //%.....%
	0x82, //%.....%
	0x82, //%.....%
	0x84, //%....%.
	0xf8, //%%%%%..
	0x00, //.......
	0x00, //.......
	0x00, //.......

	/*Unicode: U+0045 (E) , Width: 7 */
	0x00, //.......
	0x00, //.......
	0x00, //.......
	0xfe, //%%%%%%%
	0x80, //%......
	0x80, //%......
	0x80, //%......
	0xfe, //%%%%%%%
	0x80, //%......
	0x80, //%......
	0x80, //%......
	0x80, //%......
	0xfe, //%%%%%%%
	0x00, //.......
	0x00, //.......
	0x00, //.......

	/*Unicode: U+0046 (F) , Width: 7 */
	0x00, //.......
	0x00, //.......
	0x00, //.......
	0xfe, //%%%%%%%
	0x80, //%......
	0x80, //%......
	0x80, //%......
	0xfe, //%%%%%%%
	0x80, //%......
	0x80, //%......
	0x80, //%......
	0x80, //%......
	0x80, //%......
	0x00, //.......
	0x00, //.......
	0x00, //.......

	/*Unicode: U+0047 (G) , Width: 7 */
	0x00, //.......
	0x00, //.......
	0x00, //.......
	0x3c, //..%%%%.
	0x42, //.%....%
	0xc0, //%%.....
	0x80, //%......
	0x80, //%......
	0x86, //%....%%
	0x82, //%.....%
	0x82, //%.....%
	0x42, //.%....%
	0x3c, //..%%%%.
	0x00, //.......
	0x00, //.......
	0x00, //.......

	/*Unicode: U+0048 (H) , Width: 7 */
	0x00, //.......
	0x00, //.......
	0x00, //.......
	0x82, //%.....%
	0x82, //%.....%
	0x82, //%.....%
	0x82, //%.....%
	0xfe, //%%%%%%%
	0x82, //%.....%
	0x82, //%.....%
	0x82, //%.....%
	0x82, //%.....%
	0x82, //%.....%
	0x00, //.......
	0x00, //.......
	0x00, //.......

	/*Unicode: U+0049 (I) , Width: 5 */
	0x00, //.....
	0x00, //.....
	0x00, //.....
	0xf8, //%%%%%
	0x20, //..%..
	0x20, //..%..
	0x20, //..%..
	0x20, //..%..
	0x20, //..%..
	0x20, //..%..
	0x20, //..%..
	0x20, //..%..
	0xf8, //%%%%%
	0x00, //.....
	0x00, //.....
	0x00, //.....

	/*Unicode: U+004a (J) , Width: 6 */
	0x00, //......
	0x00, //......
	0x00, //......
	0x3c, //..%%%%
	0x04, //.....%
	0x04, //.....%
	0x04, //.....%
	0x04, //.....%
	0x04, //.....%
	0x04, //.....%
	0x04, //.....%
	0xcc, //%%..%%
	0x78, //.%%%%.
	0x00, //......
	0x00, //......
	0x00, //......

	/*Unicode: U+004b (K) , Width: 8 */
	0x00, //........
	0x00, //........
	0x00, //........
	0x84, //%....%..
	0x88, //%...%...
	0x90, //%..%....
	0xa0, //%.%.....
	0xe0, //%%%.....
	0x90, //%..%....
	0x98, //%..%%...
	0x88, //%...%...
	0x84, //%....%..
	0x82, //%.....%.
	0x00, //........
	0x00, //........
	0x00, //........

	/*Unicode: U+004c (L) , Width: 7 */
	0x00, //.......
	0x00, //.......
	0x00, //.......
	0x80, //%......
	0x80, //%......
	0x80, //%......
	0x80, //%......
	0x80, //%......
	0x80, //%......
	0x80, //%......
	0x80, //%......
	0x80, //%......
	0xfe, //%%%%%%%
	0x00, //.......
	0x00, //.......
	0x00, //.......

	/*Unicode: U+004d (M) , Width: 7 */
	0x00, //.......
	0x00, //.......
	0x00, //.......
	0xc6, //%%...%%
	0xc6, //%%...%%
	0xaa, //%.%.%.%
	0xaa, //%.%.%.%
	0xba, //%.%%%.%
	0x92, //%..%..%
	0x82, //%.....%
	0x82, //%.....%
	0x82, //%.....%
	0x82, //%.....%
	0x00, //.......
	0x00, //.......
	0x00, //.......

	/*Unicode: U+004e (N) , Width: 7 */
	0x00, //.......
	0x00, //.......
	0x00, //.......
	0xc2, //%%....%
	0xc2, //%%....%
	0xa2, //%.%...%
	0xa2, //%.%...%
	0x92, //%..%..%
	0x92, //%..%..%
	0x8a, //%...%.%
	0x8a, //%...%.%
	0x86, //%....%%
	0x86, //%....%%
	0x00, //.......
	0x00, //.......
	0x00, //.......

	/*Unicode: U+004f (O) , Width: 7 */
	0x00, //.......
	0x00, //.......
	0x00, //.......
	0x38, //..%%%..
	0x44, //.%...%.
	0x82, //%.....%
	0x82, //%.....%
	0x82, //%.....%
	0x82, //%.....%
	0x82, //%.....%
	0x82, //%.....%
	0x44, //.%...%.
	0x38, //..%%%..
	0x00, //.......
	0x00, //.......
	0x00, //.......

	/*Unicode: U+0050 (P) , Width: 7 */
	0x00, //.......
	0x00, //.......
	0x00, //.......
	0xf8, //%%%%%..
	0x86, //%....%%
	0x82, //%.....%
	0x82, //%.....%
	0x86, //%....%%
	0xfc, //%%%%%%.
	0x80, //%......
	0x80, //%......
	0x80, //%......
	0x80, //%......
	0x00, //.......
	0x00, //.......
	0x00, //.......

	/*Unicode: U+0051 (Q) , Width: 7 */
	0x00, //.......
	0x00, //.......
	0x00, //.......
	0x38, //..%%%..
	0x44, //.%...%.
	0x82, //%.....%
	0x82, //%.....%
	0x82, //%.....%
	0x82, //%.....%
	0x82, //%.....%
	0x82, //%.....%
	0x44, //.%...%.
	0x3c, //..%%%%.
	0x0c, //....%%.
	0x04, //.....%.
	0x00, //.......

	/*Unicode: U+0052 (R) , Width: 8 */
	0x00, //........
	0x00, //........
	0x00, //........
	0xf8, //%%%%%...
	0x86, //%....%%.
	0x82, //%.....%.
	0x82, //%.....%.
	0x86, //%....%%.
	0xfc, //%%%%%%..
	0x84, //%....%..
	0x82, //%.....%.
	0x82, //%.....%.
	0x81, //%......%
	0x00, //........
	0x00, //........
	0x00, //........

	/*Unicode: U+0053 (S) , Width: 7 */
	0x00, //.......
	0x00, //.......
	0x00, //.......
	0x3c, //..%%%%.
	0xc2, //%%....%
	0x80, //%......
	0x80, //%......
	0x60, //.%%....
	0x1c, //...%%%.
	0x02, //......%
	0x02, //......%
	0x86, //%....%%
	0x7c, //.%%%%%.
	0x00, //.......
	0x00, //.......
	0x00, //.......

	/*Unicode: U+0054 (T) , Width: 7 */
	0x00, //.......
	0x00, //.......
	0x00, //.......
	0xfe, //%%%%%%%
	0x10, //...%...
	0x10, //...%...
	0x10, //...%...
	0x10, //...%...
	0x10, //...%...
	0x10, //...%...
	0x10, //...%...
	0x10, //...%...
	0x10, //...%...
	0x00, //.......
	0x00, //.......
	0x00, //.......

	/*Unicode: U+0055 (U) , Width: 7 */
	0x00, //.......
	0x00, //.......
	0x00, //.......
	0x82, //%.....%
	0x82, //%.....%
	0x82, //%.....%
	0x82, //%.....%
	0x82, //%.....%
	0x82, //%.....%
	0x82, //%.....%
	0x82, //%.....%
	0xc6, //%%...%%
	0x7c, //.%%%%%.
	0x00, //.......
	0x00, //.......
	0x00, //.......

	/*Unicode: U+0056 (V) , Width: 7 */
	0x00, //.......
	0x00, //.......
	0x00, //.......
	0x82, //%.....%
	0x82, //%.....%
	0x44, //.%...%.
	0x44, //.%...%.
	0x44, //.%...%.
	0x28, //..%.%..
	0x28, //..%.%..
	0x28, //..%.%..
	0x38, //..%%%..
	0x10, //...%...
	0x00, //.......
	0x00, //.......
	0x00, //.......

	/*Unicode: U+0057 (W) , Width: 9 */
	0x00,
	0x00, //.........
	0x00,
	0x00, //.........
	0x00,
	0x00, //.........
	0x81,
	0x00, //%......%.
	0x81,
	0x00, //%......%.
	0x81,
	0x00, //%......%.
	0x99,
	0x00, //%..%%..%.
	0x5a,
	0x00, //.%.%%.%..
	0x5a,
	0x00, //.%.%%.%..
	0x7e,
	0x00, //.%%%%%%..
	0x24,
	0x00, //..%..%...
	0x24,
	0x00, //..%..%...
	0x24,
	0x00, //..%..%...
	0x00,
	0x00, //.........
	0x00,
	0x00, //.........
	0x00,
	0x00, //.........

	/*Unicode: U+0058 (X) , Width: 7 */
	0x00, //.......
	0x00, //.......
	0x00, //.......
	0x82, //%.....%
	0x44, //.%...%.
	0x28, //..%.%..
	0x28, //..%.%..
	0x10, //...%...
	0x38, //..%%%..
	0x28, //..%.%..
	0x44, //.%...%.
	0x44, //.%...%.
	0x82, //%.....%
	0x00, //.......
	0x00, //.......
	0x00, //.......

	/*Unicode: U+0059 (Y) , Width: 7 */
	0x00, //.......
	0x00, //.......
	0x00, //.......
	0x82, //%.....%
	0x44, //.%...%.
	0x44, //.%...%.
	0x28, //..%.%..
	0x38, //..%%%..
	0x10, //...%...
	0x10, //...%...
	0x10, //...%...
	0x10, //...%...
	0x10, //...%...
	0x00, //.......
	0x00, //.......
	0x00, //.......

	/*Unicode: U+005a (Z) , Width: 7 */
	0x00, //.......
	0x00, //.......
	0x00, //.......
	0xfe, //%%%%%%%
	0x06, //.....%%
	0x04, //.....%.
	0x08, //....%..
	0x10, //...%...
	0x10, //...%...
	0x20, //..%....
	0x40, //.%.....
	0xc0, //%%.....
	0xfe, //%%%%%%%
	0x00, //.......
	0x00, //.......
	0x00, //.......

	/*Unicode: U+005b ([) , Width: 3 */
	0x00, //...
	0x00, //...
	0xe0, //%%%
	0x80, //%..
	0x80, //%..
	0x80, //%..
	0x80, //%..
	0x80, //%..
	0x80, //%..
	0x80, //%..
	0x80, //%..
	0x80, //%..
	0x80, //%..
	0xe0, //%%%
	0x00, //...
	0x00, //...

	/*Unicode: U+005c (\) , Width: 6 */
	0x00, //......
	0x00, //......
	0x00, //......
	0x80, //%.....
	0x40, //.%....
	0x40, //.%....
	0x40, //.%....
	0x20, //..%...
	0x20, //..%...
	0x10, //...%..
	0x10, //...%..
	0x08, //....%.
	0x08, //....%.
	0x08, //....%.
	0x04, //.....%
	0x00, //......

	/*Unicode: U+005d (]) , Width: 3 */
	0x00, //...
	0x00, //...
	0xe0, //%%%
	0x20, //..%
	0x20, //..%
	0x20, //..%
	0x20, //..%
	0x20, //..%
	0x20, //..%
	0x20, //..%
	0x20, //..%
	0x20, //..%
	0x20, //..%
	0xe0, //%%%
	0x00, //...
	0x00, //...

	/*Unicode: U+005e (^) , Width: 7 */
	0x00, //.......
	0x00, //.......
	0x00, //.......
	0x10, //...%...
	0x28, //..%.%..
	0x44, //.%...%.
	0xc6, //%%...%%
	0x00, //.......
	0x00, //.......
	0x00, //.......
	0x00, //.......
	0x00, //.......
	0x00, //.......
	0x00, //.......
	0x00, //.......
	0x00, //.......

	/*Unicode: U+005f (_) , Width: 8 */
	0x00, //........
	0x00, //........
	0x00, //........
	0x00, //........
	0x00, //........
	0x00, //........
	0x00, //........
	0x00, //........
	0x00, //........
	0x00, //........
	0x00, //........
	0x00, //........
	0x00, //........
	0x00, //........
	0x00, //........
	0xff, //%%%%%%%%

	/*Unicode: U+0060 (`) , Width: 3 */
	0x00, //...
	0xc0, //%%.
	0x40, //.%.
	0x20, //..%
	0x00, //...
	0x00, //...
	0x00, //...
	0x00, //...
	0x00, //...
	0x00, //...
	0x00, //...
	0x00, //...
	0x00, //...
	0x00, //...
	0x00, //...
	0x00, //...

	/*Unicode: U+0061 (a) , Width: 6 */
	0x00, //......
	0x00, //......
	0x00, //......
	0x00, //......
	0x00, //......
	0x38, //..%%%.
	0x44, //.%...%
	0x04, //.....%
	0x7c, //.%%%%%
	0xc4, //%%...%
	0x84, //%....%
	0x8c, //%...%%
	0x74, //.%%%.%
	0x00, //......
	0x00, //......
	0x00, //......

	/*Unicode: U+0062 (b) , Width: 6 */
	0x00, //......
	0x00, //......
	0x80, //%.....
	0x80, //%.....
	0x80, //%.....
	0xb8, //%.%%%.
	0xc8, //%%..%.
	0x84, //%....%
	0x84, //%....%
	0x84, //%....%
	0x84, //%....%
	0xc8, //%%..%.
	0xb8, //%.%%%.
	0x00, //......
	0x00, //......
	0x00, //......

	/*Unicode: U+0063 (c) , Width: 6 */
	0x00, //......
	0x00, //......
	0x00, //......
	0x00, //......
	0x00, //......
	0x38, //..%%%.
	0x44, //.%...%
	0x80, //%.....
	0x80, //%.....
	0x80, //%.....
	0x80, //%.....
	0x44, //.%...%
	0x38, //..%%%.
	0x00, //......
	0x00, //......
	0x00, //......

	/*Unicode: U+0064 (d) , Width: 6 */
	0x00, //......
	0x00, //......
	0x04, //.....%
	0x04, //.....%
	0x04, //.....%
	0x74, //.%%%.%
	0x4c, //.%..%%
	0x84, //%....%
	0x84, //%....%
	0x84, //%....%
	0x84, //%....%
	0x4c, //.%..%%
	0x74, //.%%%.%
	0x00, //......
	0x00, //......
	0x00, //......

	/*Unicode: U+0065 (e) , Width: 6 */
	0x00, //......
	0x00, //......
	0x00, //......
	0x00, //......
	0x00, //......
	0x38, //..%%%.
	0x4c, //.%..%%
	0x84, //%....%
	0xfc, //%%%%%%
	0x80, //%.....
	0x80, //%.....
	0x44, //.%...%
	0x38, //..%%%.
	0x00, //......
	0x00, //......
	0x00, //......

	/*Unicode: U+0066 (f) , Width: 6 */
	0x00, //......
	0x00, //......
	0x1c, //...%%%
	0x20, //..%...
	0x20, //..%...
	0xfc, //%%%%%%
	0x20, //..%...
	0x20, //..%...
	0x20, //..%...
	0x20, //..%...
	0x20, //..%...
	0x20, //..%...
	0x20, //..%...
	0x00, //......
	0x00, //......
	0x00, //......

	/*Unicode: U+0067 (g) , Width: 6 */
	0x00, //......
	0x00, //......
	0x00, //......
	0x00, //......
	0x00, //......
	0x74, //.%%%.%
	0x4c, //.%..%%
	0x84, //%....%
	0x84, //%....%
	0x84, //%....%
	0x84, //%....%
	0x4c, //.%..%%
	0x74, //.%%%.%
	0x04, //.....%
	0x4c, //.%..%%
	0x38, //..%%%.

	/*Unicode: U+0068 (h) , Width: 6 */
	0x00, //......
	0x00, //......
	0x80, //%.....
	0x80, //%.....
	0x80, //%.....
	0xb8, //%.%%%.
	0xcc, //%%..%%
	0x84, //%....%
	0x84, //%....%
	0x84, //%....%
	0x84, //%....%
	0x84, //%....%
	0x84, //%....%
	0x00, //......
	0x00, //......
	0x00, //......

	/*Unicode: U+0069 (i) , Width: 7 */
	0x00, //.......
	0x00, //.......
	0x10, //...%...
	0x10, //...%...
	0x00, //.......
	0x70, //.%%%...
	0x10, //...%...
	0x10, //...%...
	0x10, //...%...
	0x10, //...%...
	0x10, //...%...
	0x10, //...%...
	0xfe, //%%%%%%%
	0x00, //.......
	0x00, //.......
	0x00, //.......

	/*Unicode: U+006a (j) , Width: 4 */
	0x00, //....
	0x00, //....
	0x10, //...%
	0x10, //...%
	0x00, //....
	0x70, //.%%%
	0x10, //...%
	0x10, //...%
	0x10, //...%
	0x10, //...%
	0x10, //...%
	0x10, //...%
	0x10, //...%
	0x10, //...%
	0x10, //...%
	0xe0, //%%%.

	/*Unicode: U+006b (k) , Width: 7 */
	0x00, //.......
	0x00, //.......
	0x80, //%......
	0x80, //%......
	0x80, //%......
	0x88, //%...%..
	0x90, //%..%...
	0xa0, //%.%....
	0xe0, //%%%....
	0x90, //%..%...
	0x90, //%..%...
	0x88, //%...%..
	0x84, //%....%.
	0x00, //.......
	0x00, //.......
	0x00, //.......

	/*Unicode: U+006c (l) , Width: 7 */
	0x00, //.......
	0x00, //.......
	0xf0, //%%%%...
	0x10, //...%...
	0x10, //...%...
	0x10, //...%...
	0x10, //...%...
	0x10, //...%...
	0x10, //...%...
	0x10, //...%...
	0x10, //...%...
	0x10, //...%...
	0x0e, //....%%%
	0x00, //.......
	0x00, //.......
	0x00, //.......

	/*Unicode: U+006d (m) , Width: 7 */
	0x00, //.......
	0x00, //.......
	0x00, //.......
	0x00, //.......
	0x00, //.......
	0xec, //%%%.%%.
	0x92, //%..%..%
	0x92, //%..%..%
	0x92, //%..%..%
	0x92, //%..%..%
	0x92, //%..%..%
	0x92, //%..%..%
	0x92, //%..%..%
	0x00, //.......
	0x00, //.......
	0x00, //.......

	/*Unicode: U+006e (n) , Width: 6 */
	0x00, //......
	0x00, //......
	0x00, //......
	0x00, //......
	0x00, //......
	0xb8, //%.%%%.
	0xcc, //%%..%%
	0x84, //%....%
	0x84, //%....%
	0x84, //%....%
	0x84, //%....%
	0x84, //%....%
	0x84, //%....%
	0x00, //......
	0x00, //......
	0x00, //......

	/*Unicode: U+006f (o) , Width: 6 */
	0x00, //......
	0x00, //......
	0x00, //......
	0x00, //......
	0x00, //......
	0x78, //.%%%%.
	0x48, //.%..%.
	0x84, //%....%
	0x84, //%....%
	0x84, //%....%
	0x84, //%....%
	0x48, //.%..%.
	0x78, //.%%%%.
	0x00, //......
	0x00, //......
	0x00, //......

	/*Unicode: U+0070 (p) , Width: 6 */
	0x00, //......
	0x00, //......
	0x00, //......
	0x00, //......
	0x00, //......
	0xb8, //%.%%%.
	0xc8, //%%..%.
	0x84, //%....%
	0x84, //%....%
	0x84, //%....%
	0x84, //%....%
	0xc8, //%%..%.
	0xb8, //%.%%%.
	0x80, //%.....
	0x80, //%.....
	0x80, //%.....

	/*Unicode: U+0071 (q) , Width: 6 */
	0x00, //......
	0x00, //......
	0x00, //......
	0x00, //......
	0x00, //......
	0x74, //.%%%.%
	0x4c, //.%..%%
	0x84, //%....%
	0x84, //%....%
	0x84, //%....%
	0x84, //%....%
	0x4c, //.%..%%
	0x74, //.%%%.%
	0x04, //.....%
	0x04, //.....%
	0x04, //.....%

	/*Unicode: U+0072 (r) , Width: 5 */
	0x00, //.....
	0x00, //.....
	0x00, //.....
	0x00, //.....
	0x00, //.....
	0xb0, //%.%%.
	0xc8, //%%..%
	0x80, //%....
	0x80, //%....
	0x80, //%....
	0x80, //%....
	0x80, //%....
	0x80, //%....
	0x00, //.....
	0x00, //.....
	0x00, //.....

	/*Unicode: U+0073 (s) , Width: 6 */
	0x00, //......
	0x00, //......
	0x00, //......
	0x00, //......
	0x00, //......
	0x78, //.%%%%.
	0x84, //%....%
	0x80, //%.....
	0xe0, //%%%...
	0x1c, //...%%%
	0x04, //.....%
	0x84, //%....%
	0x78, //.%%%%.
	0x00, //......
	0x00, //......
	0x00, //......

	/*Unicode: U+0074 (t) , Width: 6 */
	0x00, //......
	0x00, //......
	0x00, //......
	0x20, //..%...
	0x20, //..%...
	0xfc, //%%%%%%
	0x20, //..%...
	0x20, //..%...
	0x20, //..%...
	0x20, //..%...
	0x20, //..%...
	0x20, //..%...
	0x1c, //...%%%
	0x00, //......
	0x00, //......
	0x00, //......

	/*Unicode: U+0075 (u) , Width: 6 */
	0x00, //......
	0x00, //......
	0x00, //......
	0x00, //......
	0x00, //......
	0x84, //%....%
	0x84, //%....%
	0x84, //%....%
	0x84, //%....%
	0x84, //%....%
	0x84, //%....%
	0xcc, //%%..%%
	0x74, //.%%%.%
	0x00, //......
	0x00, //......
	0x00, //......

	/*Unicode: U+0076 (v) , Width: 6 */
	0x00, //......
	0x00, //......
	0x00, //......
	0x00, //......
	0x00, //......
	0x84, //%....%
	0x84, //%....%
	0x48, //.%..%.
	0x48, //.%..%.
	0x48, //.%..%.
	0x30, //..%%..
	0x30, //..%%..
	0x30, //..%%..
	0x00, //......
	0x00, //......
	0x00, //......

	/*Unicode: U+0077 (w) , Width: 8 */
	0x00, //........
	0x00, //........
	0x00, //........
	0x00, //........
	0x00, //........
	0x81, //%......%
	0x81, //%......%
	0x5a, //.%.%%.%.
	0x5a, //.%.%%.%.
	0x5a, //.%.%%.%.
	0x7e, //.%%%%%%.
	0x24, //..%..%..
	0x24, //..%..%..
	0x00, //........
	0x00, //........
	0x00, //........

	/*Unicode: U+0078 (x) , Width: 6 */
	0x00, //......
	0x00, //......
	0x00, //......
	0x00, //......
	0x00, //......
	0x84, //%....%
	0x48, //.%..%.
	0x30, //..%%..
	0x30, //..%%..
	0x30, //..%%..
	0x48, //.%..%.
	0x48, //.%..%.
	0x84, //%....%
	0x00, //......
	0x00, //......
	0x00, //......

	/*Unicode: U+0079 (y) , Width: 6 */
	0x00, //......
	0x00, //......
	0x00, //......
	0x00, //......
	0x00, //......
	0x84, //%....%
	0x44, //.%...%
	0x48, //.%..%.
	0x48, //.%..%.
	0x28, //..%.%.
	0x30, //..%%..
	0x10, //...%..
	0x10, //...%..
	0x10, //...%..
	0x20, //..%...
	0x60, //.%%...

	/*Unicode: U+007a (z) , Width: 6 */
	0x00, //......
	0x00, //......
	0x00, //......
	0x00, //......
	0x00, //......
	0xfc, //%%%%%%
	0x04, //.....%
	0x08, //....%.
	0x10, //...%..
	0x20, //..%...
	0x40, //.%....
	0x80, //%.....
	0xfc, //%%%%%%
	0x00, //......
	0x00, //......
	0x00, //......

	/*Unicode: U+007b ({) , Width: 5 */
	0x00, //.....
	0x00, //.....
	0x18, //...%%
	0x20, //..%..
	0x20, //..%..
	0x20, //..%..
	0x20, //..%..
	0x20, //..%..
	0xc0, //%%...
	0x20, //..%..
	0x20, //..%..
	0x20, //..%..
	0x20, //..%..
	0x20, //..%..
	0x18, //...%%
	0x00, //.....

	/*Unicode: U+007c (|) , Width: 1 */
	0x00, //.
	0x00, //.
	0x80, //%
	0x80, //%
	0x80, //%
	0x80, //%
	0x80, //%
	0x80, //%
	0x80, //%
	0x80, //%
	0x80, //%
	0x80, //%
	0x80, //%
	0x80, //%
	0x80, //%
	0x80, //%

	/*Unicode: U+007d (}) , Width: 5 */
	0x00, //.....
	0x00, //.....
	0xc0, //%%...
	0x20, //..%..
	0x20, //..%..
	0x20, //..%..
	0x20, //..%..
	0x20, //..%..
	0x18, //...%%
	0x20, //..%..
	0x20, //..%..
	0x20, //..%..
	0x20, //..%..
	0x20, //..%..
	0xc0, //%%...
	0x00, //.....

	/*Unicode: U+007e (~) , Width: 7 */
	0x00, //.......
	0x00, //.......
	0x00, //.......
	0x00, //.......
	0x00, //.......
	0x00, //.......
	0x00, //.......
	0x00, //.......
	0x72, //.%%%..%
	0x8c, //%...%%.
	0x00, //.......
	0x00, //.......
	0x00, //.......
	0x00, //.......
	0x00, //.......
	0x00, //.......

	0x00,
	0x00,
	0x00,
	0x00,
	0xFF,
	0xFF,
	0xFF,
	0xFF,
	0xFF,
	0xFF,
	0xFF,
	0xFF,
	0x00,
	0x00,
	0x00,
	0x00,

};

typedef struct
{
	uint8_t  width;
	uint32_t index;
} font_bitmap_data;

/*Store the glyph descriptions*/
static const font_bitmap_data MonospaceFont_16_data[] = {
	{.width = 5, .index = 0},    /*Unicode: U+0020 ( )*/
	{.width = 1, .index = 16},   /*Unicode: U+0021 (!)*/
	{.width = 3, .index = 32},   /*Unicode: U+0022 (")*/
	{.width = 8, .index = 48},   /*Unicode: U+0023 (#)*/
	{.width = 7, .index = 64},   /*Unicode: U+0024 ($)*/
	{.width = 8, .index = 80},   /*Unicode: U+0025 (%)*/
	{.width = 7, .index = 96},   /*Unicode: U+0026 (&)*/
	{.width = 1, .index = 112},  /*Unicode: U+0027 (')*/
	{.width = 3, .index = 128},  /*Unicode: U+0028 (()*/
	{.width = 3, .index = 144},  /*Unicode: U+0029 ())*/
	{.width = 7, .index = 160},  /*Unicode: U+002a (*)*/
	{.width = 7, .index = 176},  /*Unicode: U+002b (+)*/
	{.width = 3, .index = 192},  /*Unicode: U+002c (,)*/
	{.width = 4, .index = 208},  /*Unicode: U+002d (-)*/
	{.width = 2, .index = 224},  /*Unicode: U+002e (.)*/
	{.width = 6, .index = 240},  /*Unicode: U+002f (/)*/
	{.width = 7, .index = 256},  /*Unicode: U+0030 (0)*/
	{.width = 5, .index = 272},  /*Unicode: U+0031 (1)*/
	{.width = 8, .index = 288},  /*Unicode: U+0032 (2)*/
	{.width = 7, .index = 304},  /*Unicode: U+0033 (3)*/
	{.width = 7, .index = 320},  /*Unicode: U+0034 (4)*/
	{.width = 7, .index = 336},  /*Unicode: U+0035 (5)*/
	{.width = 7, .index = 352},  /*Unicode: U+0036 (6)*/
	{.width = 7, .index = 368},  /*Unicode: U+0037 (7)*/
	{.width = 7, .index = 384},  /*Unicode: U+0038 (8)*/
	{.width = 7, .index = 400},  /*Unicode: U+0039 (9)*/
	{.width = 2, .index = 416},  /*Unicode: U+003a (:)*/
	{.width = 3, .index = 432},  /*Unicode: U+003b (;)*/
	{.width = 7, .index = 448},  /*Unicode: U+003c (<)*/
	{.width = 7, .index = 464},  /*Unicode: U+003d (=)*/
	{.width = 7, .index = 480},  /*Unicode: U+003e (>)*/
	{.width = 5, .index = 496},  /*Unicode: U+003f (?)*/
	{.width = 7, .index = 512},  /*Unicode: U+0040 (@)*/
	{.width = 7, .index = 528},  /*Unicode: U+0041 (A)*/
	{.width = 7, .index = 544},  /*Unicode: U+0042 (B)*/
	{.width = 7, .index = 560},  /*Unicode: U+0043 (C)*/
	{.width = 7, .index = 576},  /*Unicode: U+0044 (D)*/
	{.width = 7, .index = 592},  /*Unicode: U+0045 (E)*/
	{.width = 7, .index = 608},  /*Unicode: U+0046 (F)*/
	{.width = 7, .index = 624},  /*Unicode: U+0047 (G)*/
	{.width = 7, .index = 640},  /*Unicode: U+0048 (H)*/
	{.width = 5, .index = 656},  /*Unicode: U+0049 (I)*/
	{.width = 6, .index = 672},  /*Unicode: U+004a (J)*/
	{.width = 8, .index = 688},  /*Unicode: U+004b (K)*/
	{.width = 7, .index = 704},  /*Unicode: U+004c (L)*/
	{.width = 7, .index = 720},  /*Unicode: U+004d (M)*/
	{.width = 7, .index = 736},  /*Unicode: U+004e (N)*/
	{.width = 7, .index = 752},  /*Unicode: U+004f (O)*/
	{.width = 7, .index = 768},  /*Unicode: U+0050 (P)*/
	{.width = 7, .index = 784},  /*Unicode: U+0051 (Q)*/
	{.width = 8, .index = 800},  /*Unicode: U+0052 (R)*/
	{.width = 7, .index = 816},  /*Unicode: U+0053 (S)*/
	{.width = 7, .index = 832},  /*Unicode: U+0054 (T)*/
	{.width = 7, .index = 848},  /*Unicode: U+0055 (U)*/
	{.width = 7, .index = 864},  /*Unicode: U+0056 (V)*/
	{.width = 9, .index = 880},  /*Unicode: U+0057 (W)*/
	{.width = 7, .index = 912},  /*Unicode: U+0058 (X)*/
	{.width = 7, .index = 928},  /*Unicode: U+0059 (Y)*/
	{.width = 7, .index = 944},  /*Unicode: U+005a (Z)*/
	{.width = 3, .index = 960},  /*Unicode: U+005b ([)*/
	{.width = 6, .index = 976},  /*Unicode: U+005c (\)*/
	{.width = 3, .index = 992},  /*Unicode: U+005d (])*/
	{.width = 7, .index = 1008}, /*Unicode: U+005e (^)*/
	{.width = 8, .index = 1024}, /*Unicode: U+005f (_)*/
	{.width = 3, .index = 1040}, /*Unicode: U+0060 (`)*/
	{.width = 6, .index = 1056}, /*Unicode: U+0061 (a)*/
	{.width = 6, .index = 1072}, /*Unicode: U+0062 (b)*/
	{.width = 6, .index = 1088}, /*Unicode: U+0063 (c)*/
	{.width = 6, .index = 1104}, /*Unicode: U+0064 (d)*/
	{.width = 6, .index = 1120}, /*Unicode: U+0065 (e)*/
	{.width = 6, .index = 1136}, /*Unicode: U+0066 (f)*/
	{.width = 6, .index = 1152}, /*Unicode: U+0067 (g)*/
	{.width = 6, .index = 1168}, /*Unicode: U+0068 (h)*/
	{.width = 7, .index = 1184}, /*Unicode: U+0069 (i)*/
	{.width = 4, .index = 1200}, /*Unicode: U+006a (j)*/
	{.width = 7, .index = 1216}, /*Unicode: U+006b (k)*/
	{.width = 7, .index = 1232}, /*Unicode: U+006c (l)*/
	{.width = 7, .index = 1248}, /*Unicode: U+006d (m)*/
	{.width = 6, .index = 1264}, /*Unicode: U+006e (n)*/
	{.width = 6, .index = 1280}, /*Unicode: U+006f (o)*/
	{.width = 6, .index = 1296}, /*Unicode: U+0070 (p)*/
	{.width = 6, .index = 1312}, /*Unicode: U+0071 (q)*/
	{.width = 5, .index = 1328}, /*Unicode: U+0072 (r)*/
	{.width = 6, .index = 1344}, /*Unicode: U+0073 (s)*/
	{.width = 6, .index = 1360}, /*Unicode: U+0074 (t)*/
	{.width = 6, .index = 1376}, /*Unicode: U+0075 (u)*/
	{.width = 6, .index = 1392}, /*Unicode: U+0076 (v)*/
	{.width = 8, .index = 1408}, /*Unicode: U+0077 (w)*/
	{.width = 6, .index = 1424}, /*Unicode: U+0078 (x)*/
	{.width = 6, .index = 1440}, /*Unicode: U+0079 (y)*/
	{.width = 6, .index = 1456}, /*Unicode: U+007a (z)*/
	{.width = 5, .index = 1472}, /*Unicode: U+007b ({)*/
	{.width = 1, .index = 1488}, /*Unicode: U+007c (|)*/
	{.width = 5, .index = 1504}, /*Unicode: U+007d (})*/
	{.width = 7, .index = 1520}, /*Unicode: U+007e (~)*/
	{.width = 8, .index = 1536}  /* Debugging */
};

font_bitmap_data getdata(char character)
{
	return MonospaceFont_16_data[character - 32];
}

uint8_t font_getchar_width(char character)
{
	return MonospaceFont_16_data[character - 32].width;
}

uint32_t font_getchar_index(char character)
{
	return MonospaceFont_16_data[character - 32].index;
}

uint8_t *font_getchar(unsigned char character)
{
	/**
	 * This check will make sure the requisted character is printable
	 */
	if ((character < 32) | (character > 128))
	{
		return 0;
	}
	return (uint8_t *) &MonospaceFont_16_bitmap[font_getchar_index(character)];
}