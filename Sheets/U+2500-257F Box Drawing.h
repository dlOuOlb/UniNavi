#ifndef oUNINAVI_INC_BOX_DRAWING_
#define oUNINAVI_INC_BOX_DRAWING_ "Date:2020.03.14"
/*------------------------------------------------------------------+
|	UniNavi's Navigator for the Box Drawing Sheet					|
|																	|
|	Written by Ranny Clover											|
+-------------------------------------------------------------------+
|	References														|
|																	|
|	http://www.utf8-chartable.de/									|
|	http://en.wikipedia.org/wiki/Box_Drawing						|
+------------------------------------------------------------------*/

#ifdef uUNINAVI_LET_BOX_DRAWING_
#ifdef uUNINAVI_USE_NON_STANDARD_
//UniNavi : [U+2500-257F] Box Drawing
extern const union
{
	//UniNavi : Box Drawings Light
	const union
	{
		//UniNavi : Box Drawings Light Wall
		const union
		{
			const int ─;	//[U+2500] [u8 E2 94 80] Box Drawings Light Horizontal
			const int │;	//[U+2502] [u8 E2 94 82] Box Drawings Light Vertical
			const int ├;	//[U+251C] [u8 E2 94 9C] Box Drawings Light Vertical and Right
			const int ┤;	//[U+2524] [u8 E2 94 A4] Box Drawings Light Vertical and Left
			const int ┬;	//[U+252C] [u8 E2 94 AC] Box Drawings Light Down and Horizontal
			const int ┴;	//[U+2534] [u8 E2 94 B4] Box Drawings Light Up and Horizontal
			const int ┼;	//[U+253C] [u8 E2 94 BC] Box Drawings Light Vertical and Horizontal
		}
		Wall;

		//UniNavi : Box Drawings Light Dash
		const union
		{
			const int ┄;	//[U+2504] [u8 E2 94 84] Box Drawings Light Triple Dash Horizontal
			const int ┆;	//[U+2506] [u8 E2 94 86] Box Drawings Light Triple Dash Vertical
			const int ┈;	//[U+2508] [u8 E2 94 88] Box Drawings Light Quadruple Dash Horizontal
			const int ┊;	//[U+250A] [u8 E2 94 8A] Box Drawings Light Quadruple Dash Vertical
			const int ╌;	//[U+254C] [u8 E2 95 8C] Box Drawings Light Double Dash Horizontal
			const int ╎;	//[U+254E] [u8 E2 95 8E] Box Drawings Light Double Dash Vertical
		}
		Dash;

		//UniNavi : Box Drawings Light Corner
		const union
		{
			const int ┌;	//[U+250C] [u8 E2 94 8C] Box Drawings Light Down and Right
			const int ┐;	//[U+2510] [u8 E2 94 90] Box Drawings Light Down and Left
			const int └;	//[U+2514] [u8 E2 94 94] Box Drawings Light Up and Right
			const int ┘;	//[U+2518] [u8 E2 94 98] Box Drawings Light Up and Left
		}
		Corner;

		//UniNavi : Box Drawings Light Arc
		const union
		{
			const int ╭;	//[U+256D] [u8 E2 95 AD] Box Drawings Light Arc Down and Right
			const int ╮;	//[U+256E] [u8 E2 95 AE] Box Drawings Light Arc Down and Left
			const int ╯;	//[U+256F] [u8 E2 95 AF] Box Drawings Light Arc Up and Left
			const int ╰;	//[U+2570] [u8 E2 95 B0] Box Drawings Light Arc Up and Right
		}
		Arc;

		//UniNavi : Box Drawings Light Diagonal
		const union
		{
			const int ╱;	//[U+2571] [u8 E2 95 B1] Box Drawings Light Diagonal Upper Right to Lower Left
			const int ╲;	//[U+2572] [u8 E2 95 B2] Box Drawings Light Diagonal Upper Left to Lower Right
			const int ╳;	//[U+2573] [u8 E2 95 B3] Box Drawings Light Diagonal Cross
		}
		Diag;

		//UniNavi : Box Drawings Light Half
		const union
		{
			const int ╴;	//[U+2574] [u8 E2 95 B4] Box Drawings Light Left
			const int ╵;	//[U+2575] [u8 E2 95 B5] Box Drawings Light Up
			const int ╶;	//[U+2576] [u8 E2 95 B6] Box Drawings Light Right
			const int ╷;	//[U+2577] [u8 E2 95 B7] Box Drawings Light Down
		}
		Half;
	}
	Light;

	//UniNavi : Box Drawings Heavy
	const union
	{
		//UniNavi : Box Drawings Heavy Wall
		const union
		{
			const int ━;	//[U+2501] [u8 E2 94 81] Box Drawings Heavy Horizontal
			const int ┃;	//[U+2503] [u8 E2 94 83] Box Drawings Heavy Vertical
			const int ┣;	//[U+2523] [u8 E2 94 A3] Box Drawings Heavy Vertical and Right
			const int ┫;	//[U+252B] [u8 E2 94 AB] Box Drawings Heavy Vertical and Left
			const int ┳;	//[U+2533] [u8 E2 94 B3] Box Drawings Heavy Down and Horizontal
			const int ┻;	//[U+253B] [u8 E2 94 BB] Box Drawings Heavy Up and Horizontal
			const int ╋;	//[U+254B] [u8 E2 95 8B] Box Drawings Heavy Vertical and Horizontal
		}
		Wall;

		//UniNavi : Box Drawings Heavy Dash
		const union
		{
			const int ┅;	//[U+2505] [u8 E2 94 85] Box Drawings Heavy Triple Dash Horizontal
			const int ┇;	//[U+2507] [u8 E2 94 87] Box Drawings Heavy Triple Dash Vertical
			const int ┉;	//[U+2509] [u8 E2 94 89] Box Drawings Heavy Quadruple Dash Horizontal
			const int ┋;	//[U+250B] [u8 E2 94 8B] Box Drawings Heavy Quadruple Dash Vertical
			const int ╍;	//[U+254D] [u8 E2 95 8D] Box Drawings Heavy Double Dash Horizontal
			const int ╏;	//[U+254F] [u8 E2 95 8F] Box Drawings Heavy Double Dash Vertical
		}
		Dash;

		//UniNavi : Box Drawings Heavy Corner
		const union
		{
			const int ┏;	//[U+250F] [u8 E2 94 8F] Box Drawings Heavy Down and Right
			const int ┓;	//[U+2513] [u8 E2 94 93] Box Drawings Heavy Down and Left
			const int ┗;	//[U+2517] [u8 E2 94 97] Box Drawings Heavy Up and Right
			const int ┛;	//[U+251B] [u8 E2 94 9B] Box Drawings Heavy Up and Left
		}
		Corner;

		//UniNavi : Box Drawings Heavy Half
		const union
		{
			const int ╸;	//[U+2578] [u8 E2 95 B8] Box Drawings Heavy Left
			const int ╹;	//[U+2579] [u8 E2 95 B9] Box Drawings Heavy Up
			const int ╺;	//[U+257A] [u8 E2 95 BA] Box Drawings Heavy Right
			const int ╻;	//[U+257B] [u8 E2 95 BB] Box Drawings Heavy Down
		}
		Half;
	}
	Heavy;

	//UniNavi : Box Drawings Light and Heavy
	const union
	{
		//UniNavi : Box Drawings Light and Heavy Corner
		const union
		{
			const int ┍;	//[U+250D] [u8 E2 94 8D] Box Drawings Down Light and Right Heavy
			const int ┎;	//[U+250E] [u8 E2 94 8E] Box Drawings Down Heavy and Right Light
			const int ┑;	//[U+2511] [u8 E2 94 91] Box Drawings Down Light and Left Heavy
			const int ┒;	//[U+2512] [u8 E2 94 92] Box Drawings Down Heavy and Left Light
			const int ┕;	//[U+2515] [u8 E2 94 95] Box Drawings Up Light and Right Heavy
			const int ┖;	//[U+2516] [u8 E2 94 96] Box Drawings Up Heavy and Right Light
			const int ┙;	//[U+2519] [u8 E2 94 99] Box Drawings Up Light and Left Heavy
			const int ┚;	//[U+251A] [u8 E2 94 9A] Box Drawings Up Heavy and Left Light
		}
		Corner;

		//UniNavi : Box Drawings Vertical Right Wall
		const union
		{
			const int ┝;	//[U+251D] [u8 E2 94 9D] Box Drawings Vertical Light and Right Heavy
			const int ┞;	//[U+251E] [u8 E2 94 9E] Box Drawings Up Heavy and Right Down Light
			const int ┟;	//[U+251F] [u8 E2 94 9F] Box Drawings Down Heavy and Right Up Light
			const int ┠;	//[U+2520] [u8 E2 94 A0] Box Drawings Vertical Heavy and Right Light
			const int ┡;	//[U+2521] [u8 E2 94 A1] Box Drawings Down Light and Right Up Heavy
			const int ┢;	//[U+2522] [u8 E2 94 A2] Box Drawings Up Light and Right Down Heavy
		}
		VerticalRightWall;

		//UniNavi : Box Drawings Vertical Left Wall
		const union
		{
			const int ┥;	//[U+2525] [u8 E2 94 A5] Box Drawings Vertical Light and Left Heavy
			const int ┦;	//[U+2526] [u8 E2 94 A6] Box Drawings Up Heavy and Left Down Light
			const int ┧;	//[U+2527] [u8 E2 94 A7] Box Drawings Down Heavy and Left Up Light
			const int ┨;	//[U+2528] [u8 E2 94 A8] Box Drawings Vertical Heavy and Left Light
			const int ┩;	//[U+2529] [u8 E2 94 A9] Box Drawings Down Light and Left Up Heavy
			const int ┪;	//[U+252A] [u8 E2 94 AA] Box Drawings Up Light and Left Down Heavy
		}
		VerticalLeftWall;

		//UniNavi : Box Drawings Horizontal Down Wall
		const union
		{
			const int ┭;	//[U+252D] [u8 E2 94 AD] Box Drawings Left Heavy and Right Down Light
			const int ┮;	//[U+252E] [u8 E2 94 AE] Box Drawings Right Heavy and Left Down Light
			const int ┯;	//[U+252F] [u8 E2 94 AF] Box Drawings Down Light and Horizontal Heavy
			const int ┰;	//[U+2530] [u8 E2 94 B0] Box Drawings Down Heavy and Horizontal Light
			const int ┱;	//[U+2531] [u8 E2 94 B1] Box Drawings Right Light and Left Down Heavy
			const int ┲;	//[U+2532] [u8 E2 94 B2] Box Drawings Left Light and Right Down Heavy
		}
		HorizontalDownWall;

		//UniNavi : Box Drawings Horizontal Up Wall
		const union
		{
			const int ┵;	//[U+2535] [u8 E2 94 B5] Box Drawings Left Heavy and Right Up Light
			const int ┶;	//[U+2536] [u8 E2 94 B6] Box Drawings Right Heavy and Left Up Light
			const int ┷;	//[U+2537] [u8 E2 94 B7] Box Drawings Up Light and Horizontal Heavy
			const int ┸;	//[U+2538] [u8 E2 94 B8] Box Drawings Up Heavy and Horizontal Light
			const int ┹;	//[U+2539] [u8 E2 94 B9] Box Drawings Right Light and Left Up Heavy
			const int ┺;	//[U+253A] [u8 E2 94 BA] Box Drawings Left Light and Right Up Heavy
		}
		HorizontalUpWall;

		//UniNavi : Box Drawings Cross Wall
		const union
		{
			const int ┽;	//[U+253D] [u8 E2 94 BD] Box Drawings Left Heavy and Right Vertical Light
			const int ┾;	//[U+253E] [u8 E2 94 BE] Box Drawings Right Heavy and Left Vertical Light
			const int ┿;	//[U+253F] [u8 E2 94 BF] Box Drawings Vertical Light and Horizontal Heavy
			const int ╀;	//[U+2540] [u8 E2 95 80] Box Drawings Up Heavy and Down Horizontal Light
			const int ╁;	//[U+2541] [u8 E2 95 81] Box Drawings Down Heavy and Up Horizontal Light
			const int ╂;	//[U+2542] [u8 E2 95 82] Box Drawings Vertical Heavy and Horizontal Light
			const int ╃;	//[U+2543] [u8 E2 95 83] Box Drawings Left Up Heavy and Right Down Light
			const int ╄;	//[U+2544] [u8 E2 95 84] Box Drawings Right Up Heavy and Left Down Light
			const int ╅;	//[U+2545] [u8 E2 95 85] Box Drawings Left Down Heavy and Right Up Light
			const int ╆;	//[U+2546] [u8 E2 95 86] Box Drawings Right Down Heavy and Left Up Light
			const int ╇;	//[U+2547] [u8 E2 95 87] Box Drawings Down Light and Up Horizontal Heavy
			const int ╈;	//[U+2548] [u8 E2 95 88] Box Drawings Up Light and Down Horizontal Heavy
			const int ╉;	//[U+2549] [u8 E2 95 89] Box Drawings Right Light and Left Vertical Heavy
			const int ╊;	//[U+254A] [u8 E2 95 8A] Box Drawings Left Light and Right Vertical Heavy
		}
		CrossWall;

		//UniNavi : Box Drawings Light and Heavy Wall
		const union
		{
			const int ╼;	//[U+257C] [u8 E2 95 BC] Box Drawings Light Left and Heavy Right
			const int ╽;	//[U+257D] [u8 E2 95 BD] Box Drawings Light Up and Heavy Down
			const int ╾;	//[U+257E] [u8 E2 95 BE] Box Drawings Heavy Left and Light Right
			const int ╿;	//[U+257F] [u8 E2 95 BF] Box Drawings Heavy Up and Light Down
		}
		HalfHalfWall;
	}
	LightHeavy;

	//UniNavi : Box Drawings Double
	const union
	{
		//UniNavi : Box Drawings Double Wall
		const union
		{
			const int ═;	//[U+2550] [u8 E2 95 90] Box Drawings Double Horizontal
			const int ║;	//[U+2551] [u8 E2 95 91] Box Drawings Double Vertical
			const int ╠;	//[U+2560] [u8 E2 95 A0] Box Drawings Double Vertical and Right
			const int ╣;	//[U+2563] [u8 E2 95 A3] Box Drawings Double Vertical and Left
			const int ╦;	//[U+2566] [u8 E2 95 A6] Box Drawings Double Down and Horizontal
			const int ╩;	//[U+2569] [u8 E2 95 A9] Box Drawings Double Up and Horizontal
			const int ╬;	//[U+256C] [u8 E2 95 AC] Box Drawings Double Vertical and Horizontal
		}
		Wall;

		//UniNavi : Box Drawings Double Corner
		const union
		{
			const int ╔;	//[U+2554] [u8 E2 95 94] Box Drawings Double Down and Right
			const int ╗;	//[U+2557] [u8 E2 95 97] Box Drawings Double Down and Left
			const int ╚;	//[U+255A] [u8 E2 95 9A] Box Drawings Double Up and Right
			const int ╝;	//[U+255D] [u8 E2 95 9D] Box Drawings Double Up and Left
		}
		Corner;
	}
	Double;

	//UniNavi : Box Drawings Single and Double
	const union
	{
		//UniNavi : Box Drawings Single and Double Corner
		const union
		{
			const int ╒;	//[U+2552] [u8 E2 95 92] Box Drawings Down Single and Right Double
			const int ╓;	//[U+2553] [u8 E2 95 93] Box Drawings Down Double and Right Single
			const int ╕;	//[U+2555] [u8 E2 95 95] Box Drawings Down Single and Left Double
			const int ╖;	//[U+2556] [u8 E2 95 96] Box Drawings Down Double and Left Single
			const int ╘;	//[U+2558] [u8 E2 95 98] Box Drawings Up Single and Right Double
			const int ╙;	//[U+2559] [u8 E2 95 99] Box Drawings Up Double and Right Single
			const int ╛;	//[U+255B] [u8 E2 95 9B] Box Drawings Up Single and Left Double
			const int ╜;	//[U+255C] [u8 E2 95 9C] Box Drawings Up Double and Left Single
		}
		Corner;

		//UniNavi : Box Drawings Single and Double Wall
		const union
		{
			const int ╞;	//[U+255E] [u8 E2 95 9E] Box Drawings Vertical Single and Right Double
			const int ╟;	//[U+255F] [u8 E2 95 9F] Box Drawings Vertical Double and Right Single
			const int ╡;	//[U+2561] [u8 E2 95 A1] Box Drawings Vertical Single and Left Double
			const int ╢;	//[U+2562] [u8 E2 95 A2] Box Drawings Vertical Double and Left Single
			const int ╤;	//[U+2564] [u8 E2 95 A4] Box Drawings Down Single and Horizontal Double
			const int ╥;	//[U+2565] [u8 E2 95 A5] Box Drawings Down Double and Horizontal Single
			const int ╧;	//[U+2567] [u8 E2 95 A7] Box Drawings Up Single and Horizontal Double
			const int ╨;	//[U+2568] [u8 E2 95 A8] Box Drawings Up Double and Horizontal Single
			const int ╪;	//[U+256A] [u8 E2 95 AA] Box Drawings Vertical Single and Horizontal Double
			const int ╫;	//[U+256B] [u8 E2 95 AB] Box Drawings Vertical Double and Horizontal Single
		}
		Wall;
	}
	SingleDouble;
}
uUNINAVI_LET_BOX_DRAWING_;
#endif
#endif

#endif
