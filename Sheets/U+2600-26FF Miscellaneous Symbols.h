#ifndef oUNINAVI_INC_MISCELLANEOUS_SYMBOLS_
#define oUNINAVI_INC_MISCELLANEOUS_SYMBOLS_ "Date:2020.03.15"
/*------------------------------------------------------------------+
|	UniNavi's Navigator for the Miscellaneous Symbols Sheet			|
|																	|
|	Written by Ranny Clover											|
+-------------------------------------------------------------------+
|	References														|
|																	|
|	http://www.utf8-chartable.de/									|
|	http://en.wikipedia.org/wiki/Miscellaneous_Symbols				|
+------------------------------------------------------------------*/

#ifdef uUNINAVI_LET_MISCELLANEOUS_SYMBOLS_
#ifdef uUNINAVI_USE_NON_STANDARD_
//UniNavi : [U+2600-26FF] Miscellaneous Symbols
extern const union
{
	//UniNavi : Weather Sign
	const union
	{
		const int ☀;	//[U+2600] [u8 E2 98 80] Black Sun with Rays / Clear Weather
		const int ☁;	//[U+2601] [u8 E2 98 81] Cloud / Cloudy Weather
		const int ☂;	//[U+2602] [u8 E2 98 82] Umbrella / Rainy Weather
		const int ☃;	//[U+2603] [u8 E2 98 83] Snowman / Snowy Weather
		const int ☇;	//[U+2607] [u8 E2 98 87] Lightning
		const int ☈;	//[U+2608] [u8 E2 98 88] Thunderstorm
		const int ☔;	//[U+2614] [u8 E2 98 94] Umbrella with Rain Drops / Showery Weather
		const int ☕;	//[U+2615] [u8 E2 98 95] Hot Beverage
		const int ☘;	//[U+2618] [u8 E2 98 98] Shamrock / Good Luck
		const int ☼;	//[U+263C] [u8 E2 98 BC] White Sun with Rays
		const int ⚘;	//[U+2698] [u8 E2 9A 98] Flower
		const int ⛄;	//[U+26C4] [u8 E2 9B 84] Snowman without Snow / Light Snow
		const int ⛅;	//[U+26C5] [u8 E2 9B 85] Sun behind Cloud / Partly Cloudy
		const int ⛆;	//[U+26C6] [u8 E2 9B 86] Rain / Rainy Weather
		const int ⛇;	//[U+26C7] [u8 E2 9B 87] Black Snowman / Heavy Snow
		const int ⛈;	//[U+26C8] [u8 E2 9B 88] Thunder Cloud and Rain / Thunderstorm
	}
	Weather;

	//UniNavi : Astronomical Symbol
	const union
	{
		const int ☄;	//[U+2604] [u8 E2 98 84] Comet
		const int ★;	//[U+2605] [u8 E2 98 85] Black Star
		const int ☆;	//[U+2606] [u8 E2 98 86] White Star
		const int ☊;	//[U+260A] [u8 E2 98 8A] Ascending Node
		const int ☋;	//[U+260B] [u8 E2 98 8B] Descending Node
		const int ☌;	//[U+260C] [u8 E2 98 8C] Conjunction
		const int ☍;	//[U+260D] [u8 E2 98 8D] Opposition
		const int ☽;	//[U+263D] [u8 E2 98 BD] First Quarter Moon
		const int ☾;	//[U+263E] [u8 E2 98 BE] Last Quarter Moon
	}
	Astronomy;

	//UniNavi : Telephone
	const union
	{
		const int ☎;	//[U+260E] [u8 E2 98 8E] Black Telephone
		const int ☏;	//[U+260F] [u8 E2 98 8F] White Telephone
	}
	Telephone;

	//UniNavi : Box
	const union
	{
		const int ☐;	//[U+2610] [u8 E2 98 90] Ballot Box
		const int ☑;	//[U+2611] [u8 E2 98 91] Ballot Box with Check
		const int ☒;	//[U+2612] [u8 E2 98 92] Ballot Box with X
		const int ⚿;	//[U+26BF] [u8 E2 9A BF] Squared Key
		const int ⛋;	//[U+26CB] [u8 E2 9B 8B] White Diamond in Square
		const int ⛝;	//[U+26DD] [u8 E2 9B 9D] Squared Saltire
		const int ⛞;	//[U+26DE] [u8 E2 9B 9E] Falling Diagonal in White Circle in Black Square
		const int ⛾;	//[U+26FE] [u8 E2 9B BE] Cup on Black Square
	}
	Box;

	//UniNavi : Mark
	const union
	{
		const int ☓;	//[U+2613] [u8 E2 98 93] Saltire
		const int ☙;	//[U+2619] [u8 E2 98 99] Reversed Rotated Floral Heart Bullet / Binding Signature Mark
	}
	Mark;

	//UniNavi : Shogi Piece
	const union
	{
		const int ☖;	//[U+2616] [u8 E2 98 96] White Shogi Piece
		const int ☗;	//[U+2617] [u8 E2 98 97] Black Shogi Piece
		const int ⛉;	//[U+26C9] [u8 E2 9B 89] Turned White Shogi Piece
		const int ⛊;	//[U+26CA] [u8 E2 9B 8A] Turned Black Shogi Piece
	}
	Shogi;
	
	//UniNavi : Pointing Index
	const union
	{
		const int ☚;	//[U+261A] [u8 E2 98 9A] Black Left Pointing Index
		const int ☛;	//[U+261B] [u8 E2 98 9B] Black Right Pointing Index
		const int ☜;	//[U+261C] [u8 E2 98 9C] White Left Pointing Index
		const int ☝;	//[U+261D] [u8 E2 98 9D] White UP Pointing Index
		const int ☞;	//[U+261E] [u8 E2 98 9E] White Right Pointing Index
		const int ☟;	//[U+261F] [u8 E2 98 9F] White Down Pointing Index
	}
	Pointing;

	//UniNavi : Warning Sign
	const union
	{
		const int ☠;	//[U+2620] [u8 E2 98 A0] Skull and Crossbones
		const int ☡;	//[U+2621] [u8 E2 98 A1] Caution Sign
		const int ☢;	//[U+2622] [u8 E2 98 A2] Radioactive Sign
		const int ☣;	//[U+2623] [u8 E2 98 A3] Biohazard Sign
		const int ⚠;	//[U+26A0] [u8 E2 9A A0] Warning Sign
		const int ⚡;	//[U+26A1] [u8 E2 9A A1] High Voltage Sign
	}
	Warning;

	//UniNavi : Staff Sign
	const union
	{
		const int ☤;	//[U+2624] [u8 E2 98 A4] Caduceus
		const int ☥;	//[U+2625] [u8 E2 98 A5] Ankh
		const int ⚕;	//[U+2695] [u8 E2 9A 95] Staff of Aesculapius
		const int ⚚;	//[U+269A] [u8 E2 9A 9A] Staff of Hermes
	}
	Staff;

	//UniNavi : Cross Sign
	const union
	{
		const int ☦;	//[U+2626] [u8 E2 98 A6] Orthodox Cross
		const int ☧;	//[U+2627] [u8 E2 98 A7] Chi Rho
		const int ☨;	//[U+2628] [u8 E2 98 A8] Cross of Lorraine
		const int ☩;	//[U+2629] [u8 E2 98 A9] Cross of Jerusalem
		const int ♰;	//[U+2670] [u8 E2 99 B0] West Syriac Cross
		const int ♱;	//[U+2671] [u8 E2 99 B1] East Syriac Cross
	}
	Cross;

	//UniNavi : Emblem
	const union
	{
		const int ☪;	//[U+262A] [u8 E2 98 AA] Star and Crescent
		const int ☫;	//[U+262B] [u8 E2 98 AB] Farsi Symbol
		const int ☬;	//[U+262C] [u8 E2 98 AC] Adi Shakti
		const int ☭;	//[U+262D] [u8 E2 98 AD] Hammer and Sickle
		const int ☮;	//[U+262E] [u8 E2 98 AE] Peace Symbol
		const int ☯;	//[U+262F] [u8 E2 98 AF] Yin Yang
		const int ☸;	//[U+2638] [u8 E2 98 B8] Wheel of Dharma
		const int ⚒;	//[U+2692] [u8 E2 9A 92] Hammer and Pick / Mining
		const int ⚖;	//[U+2696] [u8 E2 9A 96] Scales / Jurisprudence
		const int ⚗;	//[U+2697] [u8 E2 9A 97] Alembic / Chemistry
		const int ⚛;	//[U+269B] [u8 E2 9A 9B] Atom Symbol / Nuclear Installation
		const int ⚜;	//[U+269C] [u8 E2 9A 9C] Fleur-de-lis
		const int ⚝;	//[U+269D] [u8 E2 9A 9D] Outlined White Star
	}
	Emblem;

	//UniNavi : Yin and Yang
	const union
	{
		//UniNavi : Yin Yang
		const union
		{
			const int ☯;	//[U+262F] [u8 E2 98 AF] Yin Yang
		}
		Symbol;

		//UniNavi : Trigram
		const union
		{
			const int ☰;	//[U+2630] [u8 E2 98 B0] Trigram for Heaven
			const int ☱;	//[U+2631] [u8 E2 98 B1] Trigram for Lake
			const int ☲;	//[U+2632] [u8 E2 98 B2] Trigram for Fire
			const int ☳;	//[U+2633] [u8 E2 98 B3] Trigram for Thunder
			const int ☴;	//[U+2634] [u8 E2 98 B4] Trigram for Wind
			const int ☵;	//[U+2635] [u8 E2 98 B5] Trigram for Water
			const int ☶;	//[U+2636] [u8 E2 98 B6] Trigram for Mountain
			const int ☷;	//[U+2637] [u8 E2 98 B7] Trigram for Earth
		}
		Trigram;

		//UniNavi : Monogram
		const union
		{
			const int ⚊;	//[U+268A] [u8 E2 9A 8A] Monogram for Yang
			const int ⚋;	//[U+268B] [u8 E2 9A 8B] Monogram for Yin
		}
		Monogram;

		//UniNavi : Digram
		const union
		{
			const int ⚌;	//[U+268C] [u8 E2 9A 8C] Digram for Greater Yang
			const int ⚍;	//[U+268D] [u8 E2 9A 8D] Digram for Lesser Yin
			const int ⚎;	//[U+268E] [u8 E2 9A 8E] Digram for Lesser Yang
			const int ⚏;	//[U+268F] [u8 E2 9A 8F] Digram for Greater Yin
		}
		Digram;
	}
	YinYang;

	//UniNavi : Face
	const union
	{
		const int ☹;	//[U+2639] [u8 E2 98 B9] White Frowning Face
		const int ☺;	//[U+263A] [u8 E2 98 BA] White Smiling Face
		const int ☻;	//[U+263B] [u8 E2 98 BB] Black Smiling Face
	}
	Face;

	//UniNavi : Astrological Symbol
	const union
	{
		const int ☉;	//[U+2609] [u8 E2 98 89] Sun
		const int ☽;	//[U+263D] [u8 E2 98 BD] Crescent
		const int ☾;	//[U+263E] [u8 E2 98 BE] Decrescent
		const int ☿;	//[U+263F] [u8 E2 98 BF] Mercury
		const int ♀;	//[U+2640] [u8 E2 99 80] Venus
		const int ♁;	//[U+2641] [u8 E2 99 81] Earth
		const int ♂;	//[U+2642] [u8 E2 99 82] Mars
		const int ♃;	//[U+2643] [u8 E2 99 83] Jupiter
		const int ♄;	//[U+2644] [u8 E2 99 84] Saturn
		const int ♅;	//[U+2645] [u8 E2 99 85] Uranus
		const int ♆;	//[U+2646] [u8 E2 99 86] Neptune
		const int ♇;	//[U+2647] [u8 E2 99 87] Pluto
		const int ⚳;	//[U+26B3] [u8 E2 9A B3] Ceres
		const int ⚴;	//[U+26B4] [u8 E2 9A B4] Pallas
		const int ⚵;	//[U+26B5] [u8 E2 9A B5] Juno
		const int ⚶;	//[U+26B6] [u8 E2 9A B6] Vesta
		const int ⚷;	//[U+26B7] [u8 E2 9A B7] Chiron
		const int ⚸;	//[U+26B8] [u8 E2 9A B8] Black Moon Lilith
		const int ⚹;	//[U+26B9] [u8 E2 9A B9] Sextile
		const int ⚺;	//[U+26BA] [u8 E2 9A BA] Semisextile
		const int ⚻;	//[U+26BB] [u8 E2 9A BB] Quincunx
		const int ⚼;	//[U+26BC] [u8 E2 9A BC] Sesquiquadrate
		const int ⛢;	//[U+26E2] [u8 E2 9B A2] Astronomical Symbol for Uranus
	}
	Astrology;

	//UniNavi : Zodiac Sign
	const union
	{
		const int ♈;	//[U+2648] [u8 E2 99 88] Aries
		const int ♉;	//[U+2649] [u8 E2 99 89] Taurus
		const int ♊;	//[U+264A] [u8 E2 99 8A] Gemini
		const int ♋;	//[U+264B] [u8 E2 99 8B] Cancer
		const int ♌;	//[U+264C] [u8 E2 99 8C] Leo
		const int ♍;	//[U+264D] [u8 E2 99 8D] Virgo
		const int ♎;	//[U+264E] [u8 E2 99 8E] Libra
		const int ♏;	//[U+264F] [u8 E2 99 8F] Scorpius
		const int ♐;	//[U+2650] [u8 E2 99 90] Sagittarius
		const int ♑;	//[U+2651] [u8 E2 99 91] Capricorn
		const int ♒;	//[U+2652] [u8 E2 99 92] Aquarius
		const int ♓;	//[U+2653] [u8 E2 99 93] Pisces
		const int ⛎;	//[U+26CE] [u8 E2 9B 8E] Ophiuchus
	}
	Zodiac;

	//UniNavi : Chess
	const union
	{
		const int ♔;	//[U+2654] [u8 E2 99 94] White Chess King
		const int ♕;	//[U+2655] [u8 E2 99 95] White Chess Queen
		const int ♖;	//[U+2656] [u8 E2 99 96] White Chess Rook
		const int ♗;	//[U+2657] [u8 E2 99 97] White Chess Bishop
		const int ♘;	//[U+2658] [u8 E2 99 98] White Chess Knight
		const int ♙;	//[U+2659] [u8 E2 99 99] White Chess Pawn
		const int ♚;	//[U+265A] [u8 E2 99 9A] Black Chess King
		const int ♛;	//[U+265B] [u8 E2 99 9B] Black Chess Queen
		const int ♜;	//[U+265C] [u8 E2 99 9C] Black Chess Rook
		const int ♝;	//[U+265D] [u8 E2 99 9D] Black Chess Bishop
		const int ♞;	//[U+265E] [u8 E2 99 9E] Black Chess Knight
		const int ♟;	//[U+265F] [u8 E2 99 9F] Black Chess Pawn
	}
	Chess;

	//UniNavi : Suit
	const union
	{
		//UniNavi : Spade Suit
		const union
		{
			const int ♠;	//[U+2660] [u8 E2 99 A0] Black Spade Suit
			const int ♤;	//[U+2664] [u8 E2 99 A4] White Spade Suit
		}
		Spade;

		//UniNavi : Heart Suit
		const union
		{
			const int ♡;	//[U+2661] [u8 E2 99 A1] White Heart Suit
			const int ♥;	//[U+2665] [u8 E2 99 A5] Black Heart Suit
		}
		Heart;

		//UniNavi : Diamond Suit
		const union
		{
			const int ♢;	//[U+2662] [u8 E2 99 A2] White Diamond Suit
			const int ♦;	//[U+2666] [u8 E2 99 A6] Black Diamond Suit
		}
		Diamond;

		//UniNavi : Club Suit
		const union
		{
			const int ♣;	//[U+2663] [u8 E2 99 A3] Black Club Suit
			const int ♧;	//[U+2667] [u8 E2 99 A7] White Club Suit
		}
		Club;
	}
	Suit;

	//UniNavi : Place Symbol
	const union
	{
		const int ♨;	//[U+2668] [u8 E2 99 A8] Hot Springs / Onsen
		const int ⚓;	//[U+2693] [u8 E2 9A 93] Anchor / Harbor
		const int ⚔;	//[U+2694] [u8 E2 9A 94] Crossed Swords / Battleground
		const int ⛣;	//[U+26E3] [u8 E2 9B A3] Heavy Circle with Stroke and Two Dots above / Public Office
		const int ⛨;	//[U+26E8] [u8 E2 9B A8] Black Cross on Shield / Hospital
		const int ⛩;	//[U+26E9] [u8 E2 9B A9] Shinto Shrine / Torii
		const int ⛪;	//[U+26EA] [u8 E2 9B AA] Church
		const int ⛫;	//[U+26EB] [u8 E2 9B AB] Castle
		const int ⛬;	//[U+26EC] [u8 E2 9B AC] Historic Site
		const int ⛭;	//[U+26ED] [u8 E2 9B AD] Factory
		const int ⛮;	//[U+26EE] [u8 E2 9B AE] Power Plant
		const int ⛯;	//[U+26EF] [u8 E2 9B AF] Map Symbol for Lighthouse
		const int ⛰;	//[U+26F0] [u8 E2 9B B0] Mountain
		const int ⛱;	//[U+26F1] [u8 E2 9B B1] Umbrella on Ground / Bathing Beach
		const int ⛲;	//[U+26F2] [u8 E2 9B B2] Fountain / Park
		const int ⛳;	//[U+26F3] [u8 E2 9B B3] Flag in Hole / Golf Course
		const int ⛴;	//[U+26F4] [u8 E2 9B B4] Ferry / Ferry Boat Terminal
		const int ⛵;	//[U+26F5] [u8 E2 9B B5] Sailboat / Marina or Yacht Harbour
		const int ⛶;	//[U+26F6] [u8 E2 9B B6] Square Four Corners / Intersection
		const int ⛷;	//[U+26F7] [u8 E2 9B B7] Skier / Ski Resort
		const int ⛸;	//[U+26F8] [u8 E2 9B B8] Ice Skate / Ice Skating Rink
		const int ⛹;	//[U+26F9] [u8 E2 9B B9] Person with Ball / Track and Field, Gymnasium
		const int ⛺;	//[U+26FA] [u8 E2 9B BA] Tent / Camping Site
		const int ⛻;	//[U+26FB] [u8 E2 9B BB] Japanese Bank Symbol
		const int ⛼;	//[U+26FC] [u8 E2 9B BC] Headstone Graveyard Symbol / Graveyard, Memorial Park, Cemetery
		const int ⛽;	//[U+26FD] [u8 E2 9B BD] Fuel Pump / Petrol Station, Gas Station
		const int ⛾;	//[U+26FE] [u8 E2 9B BE] Drive-in Restaurant
		const int ⛿;	//[U+26FF] [u8 E2 9B BF] White Flag with Horizontal Middle Black Stripe / Japanese Self-Defense Force Site
	}
	Place;

	//UniNavi : Music Sign
	const union
	{
		//UniNavi : Note
		const union
		{
			const int ♩;	//[U+2669] [u8 E2 99 A9] Quarter Note
			const int ♪;	//[U+266A] [u8 E2 99 AA] Eighth Note
			const int ♫;	//[U+266B] [u8 E2 99 AB] Beamed Eighth Notes
			const int ♬;	//[U+266C] [u8 E2 99 AC] Beamed Sixteenth Notes
		}
		Note;

		//UniNavi : Music Sign
		const union
		{
			const int ♭;	//[U+266D] [u8 E2 99 AD] Music Flat Sign
			const int ♮;	//[U+266E] [u8 E2 99 AE] Music Natural Sign
			const int ♯;	//[U+266F] [u8 E2 99 AF] Music Sharp Sign
		}
		Sign;
	}
	Music;

	//UniNavi : Recycling Symbol
	const union
	{
		//UniNavi : Universal Recycling Symbol
		const union
		{
			const int ♲;	//[U+2672] [u8 E2 99 B2] Universal Recycling Symbol
			const int ♺;	//[U+267A] [u8 E2 99 BA] Recycling Symbol for Generic Materials
			const int ♻;	//[U+267B] [u8 E2 99 BB] Black Universal Recycling Symbol
		}
		Universal;

		//UniNavi : Recycling Symbol for Plastics
		const union
		{
			const int ♳;	//[U+2673] [u8 E2 99 B3] Recycling Symbol for Type-1 Plastics
			const int ♴;	//[U+2674] [u8 E2 99 B4] Recycling Symbol for Type-2 Plastics
			const int ♵;	//[U+2675] [u8 E2 99 B5] Recycling Symbol for Type-3 Plastics
			const int ♶;	//[U+2676] [u8 E2 99 B6] Recycling Symbol for Type-4 Plastics
			const int ♷;	//[U+2677] [u8 E2 99 B7] Recycling Symbol for Type-5 Plastics
			const int ♸;	//[U+2678] [u8 E2 99 B8] Recycling Symbol for Type-6 Plastics
			const int ♹;	//[U+2679] [u8 E2 99 B9] Recycling Symbol for Type-7 Plastics
		}
		Plastics;

		//UniNavi : Recycled Paper Symbol
		const union
		{
			const int ♼;	//[U+267C] [u8 E2 99 BC] Recycled Paper Symbol
			const int ♽;	//[U+267D] [u8 E2 99 BD] Partially-Recycled Paper Symbol
			const int ♾;	//[U+267E] [u8 E2 99 BE] Permanent Paper Sign
		}
		Paper;
	}
	Recycle;

	//UniNavi : Wheelchair
	const union
	{
		const int ♿;	//[U+267F] [u8 E2 99 BF] Wheelchair Symbol
	}
	Wheelchair;

	//UniNavi : Die
	const union
	{
		const int ⚀;	//[U+2680] [u8 E2 9A 80] Die Face-1
		const int ⚁;	//[U+2681] [u8 E2 9A 81] Die Face-2
		const int ⚂;	//[U+2682] [u8 E2 9A 82] Die Face-3
		const int ⚃;	//[U+2683] [u8 E2 9A 83] Die Face-4
		const int ⚄;	//[U+2684] [u8 E2 9A 84] Die Face-5
		const int ⚅;	//[U+2685] [u8 E2 9A 85] Die Face-6
	}
	Die;

	//UniNavi : Go Piece
	const union
	{
		const int ⚆;	//[U+2686] [u8 E2 9A 86] White Circle with Dot Right
		const int ⚇;	//[U+2687] [u8 E2 9A 87] White Circle with Two Dots
		const int ⚈;	//[U+2688] [u8 E2 9A 88] Black Circle with White Dot Right
		const int ⚉;	//[U+2689] [u8 E2 9A 89] Black Circle with Two White Dots
		const int ⚪;	//[U+26AA] [u8 E2 9A AA] Medium White Circle
		const int ⚫;	//[U+26AB] [u8 E2 9A AB] Medium Black Circle
	}
	Go;

	//UniNavi : Flag
	const union
	{
		const int ⚐;	//[U+2690] [u8 E2 9A 90] White Flag
		const int ⚑;	//[U+2691] [u8 E2 9A 91] Black Flag
	}
	Flag;

	//UniNavi : Gear
	const union
	{
		const int ⚙;	//[U+2699] [u8 E2 9A 99] Gear
		const int ⛭;	//[U+26ED] [u8 E2 9B AD] Gear without Hub
		const int ⛮;	//[U+26EE] [u8 E2 9B AE] Gear with Handles
	}
	Gear;

	//UniNavi : Speaking Symbol
	const union
	{
		const int ⚞;	//[U+269E] [u8 E2 9A 9E] Three Lines Converging Right
		const int ⚟;	//[U+269F] [u8 E2 9A 9F] Three Lines Converging Left
	}
	Speak;

	//UniNavi : Sexual Sign
	const union
	{
		const int ♀;	//[U+2640] [u8 E2 99 80] Female Sign
		const int ♂;	//[U+2642] [u8 E2 99 82] Male Sign
		const int ⚢;	//[U+26A2] [u8 E2 9A A2] Doubled Female Sign
		const int ⚣;	//[U+26A3] [u8 E2 9A A3] Doubled Male Sign
		const int ⚤;	//[U+26A4] [u8 E2 9A A4] Interlocked Female and Male Sign
		const int ⚥;	//[U+26A5] [u8 E2 9A A5] Male and Female Sign
		const int ⚦;	//[U+26A6] [u8 E2 9A A6] Male with Stroke Sign
		const int ⚧;	//[U+26A7] [u8 E2 9A A7] Male with Stroke and Male and Female Sign
		const int ⚨;	//[U+26A8] [u8 E2 9A A8] Vertical Male with Stroke Sign
		const int ⚩;	//[U+26A9] [u8 E2 9A A9] Horizontal Male with Stroke Sign
		const int ⚪;	//[U+26AA] [u8 E2 9A AA] Medium White Circle
		const int ⚫;	//[U+26AB] [u8 E2 9A AB] Medium Black Circle
		const int ⚬;	//[U+26AC] [u8 E2 9A AC] Medium Small White Circle
		const int ⚭;	//[U+26AD] [u8 E2 9A AD] Marriage Symbol
		const int ⚮;	//[U+26AE] [u8 E2 9A AE] Divorce Symbol
		const int ⚯;	//[U+26AF] [u8 E2 9A AF] Unmarried Partnership Symbol
		const int ⚲;	//[U+26B2] [u8 E2 9A B2] Neuter
	}
	Sexual;

	//UniNavi : Funeral Symbol
	const union
	{
		const int ⚰;	//[U+26B0] [u8 E2 9A B0] Coffin
		const int ⚱;	//[U+26B1] [u8 E2 9A B1] Funeral Urn
	}
	Funeral;

	//UniNavi : Ball Symbol
	const union
	{
		const int ⚽;	//[U+26BD] [u8 E2 9A BD] Soccer Ball
		const int ⚾;	//[U+26BE] [u8 E2 9A BE] Baseball
	}
	Ball;

	//UniNavi : Draughts
	const union
	{
		const int ⛀;	//[U+26C0] [u8 E2 9B 80] White Draughts Man
		const int ⛁;	//[U+26C1] [u8 E2 9B 81] White Draughts King
		const int ⛂;	//[U+26C2] [u8 E2 9B 82] Black Draughts Man
		const int ⛃;	//[U+26C3] [u8 E2 9B 83] Black Draughts King
	}
	Draughts;

	//UniNavi : Road Signs
	const union
	{
		const int ⛌;	//[U+26CC] [u8 E2 9B 8C] Crossing Lanes / Accident
		const int ⛍;	//[U+26CD] [u8 E2 9B 8D] Disabled Car
		const int ⛏;	//[U+26CF] [u8 E2 9B 8F] Pick / under Construction
		const int ⛐;	//[U+26D0] [u8 E2 9B 90] Car Sliding / Icy Road
		const int ⛑;	//[U+26D1] [u8 E2 9B 91] Helmet with White Cross / Maintenance
		const int ⛒;	//[U+26D2] [u8 E2 9B 92] Circled Crossing Lanes / Road Closed
		const int ⛓;	//[U+26D3] [u8 E2 9B 93] Chains / Tyre Chains Required
		const int ⛔;	//[U+26D4] [u8 E2 9B 94] No Entry
		const int ⛕;	//[U+26D5] [u8 E2 9B 95] Alternate One-Way Left Way Traffic
		const int ⛖;	//[U+26D6] [u8 E2 9B 96] Black Two-Way Left Way Traffic
		const int ⛗;	//[U+26D7] [u8 E2 9B 97] White Two-Way Left Way Traffic
		const int ⛘;	//[U+26D8] [u8 E2 9B 98] Black Left Lane Merge
		const int ⛙;	//[U+26D9] [u8 E2 9B 99] White Left Lane Merge
		const int ⛚;	//[U+26DA] [u8 E2 9B 9A] Drive Slow Sign
		const int ⛛;	//[U+26DB] [u8 E2 9B 9B] Heavy White Down-Pointing Triangle / Drive Slow
		const int ⛜;	//[U+26DC] [u8 E2 9B 9C] Left Closed Entry
		const int ⛝;	//[U+26DD] [u8 E2 9B 9D] Closed Entry
		const int ⛞;	//[U+26DE] [u8 E2 9B 9E] Closed to Large Vehicles
		const int ⛟;	//[U+26DF] [u8 E2 9B 9F] Black Truck / Closed to Large Vehicles
		const int ⛠;	//[U+26E0] [u8 E2 9B A0] Restricted Left Entry-1
		const int ⛡;	//[U+26E1] [u8 E2 9B A1] Restricted Left Entry-2
	}
	Road;

	//UniNavi : Pentagram
	const union
	{
		const int ⛤;	//[U+26E4] [u8 E2 9B A4] Pentagram
		const int ⛥;	//[U+26E5] [u8 E2 9B A5] Right-Handed Interlaced Pentagram
		const int ⛦;	//[U+26E6] [u8 E2 9B A6] Left-Handed Interlaced Pentagram
		const int ⛧;	//[U+26E7] [u8 E2 9B A7] Inverted Pentagram
	}
	Pentagram;
}
uUNINAVI_LET_MISCELLANEOUS_SYMBOLS_;
#endif
#endif

#endif
