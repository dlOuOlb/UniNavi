#ifndef oUNINAVI_INC_NUMBER_FORMS_
#define oUNINAVI_INC_NUMBER_FORMS_ "Date:2020.03.15"
/*------------------------------------------------------------------+
|	UniNavi's Navigator for the Number Forms Sheet					|
|																	|
|	Written by Ranny Clover											|
+-------------------------------------------------------------------+
|	References														|
|																	|
|	http://www.utf8-chartable.de/									|
|	http://en.wikipedia.org/wiki/Number_Forms						|
+------------------------------------------------------------------*/

#ifdef uUNINAVI_LET_NUMBER_FORMS_
//UniNavi : [U+2150-218F] Number Forms
extern const union
{
	//UniNavi : Vulgar Fraction
	//＊Some fractions are from the Latin-1 Supplement Sheet.
	const union
	{
		const int ¼;	//[U+00BC] [u8 C2 BC] Vulgar Fraction One Quarter
		const int ½;	//[U+00BD] [u8 C2 BD] Vulgar Fraction One Half
		const int ¾;	//[U+00BE] [u8 C2 BE] Vulgar Fraction Three Quarters

		const int ⅐;	//[U+2150] [u8 E2 85 90] Vulgar Fraction One Seventh
		const int ⅑;	//[U+2151] [u8 E2 85 91] Vulgar Fraction One Ninth
		const int ⅒;	//[U+2152] [u8 E2 85 92] Vulgar Fraction One Tenth
		const int ⅓;	//[U+2153] [u8 E2 85 93] Vulgar Fraction One Third
		const int ⅔;	//[U+2154] [u8 E2 85 94] Vulgar Fraction Two Thirds
		const int ⅕;	//[U+2155] [u8 E2 85 95] Vulgar Fraction One Fifth
		const int ⅖;	//[U+2156] [u8 E2 85 96] Vulgar Fraction Two Fifths
		const int ⅗;	//[U+2157] [u8 E2 85 97] Vulgar Fraction Three Fifths
		const int ⅘;	//[U+2158] [u8 E2 85 98] Vulgar Fraction Four Fifths
		const int ⅙;	//[U+2159] [u8 E2 85 99] Vulgar Fraction One Sixth
		const int ⅚;	//[U+215A] [u8 E2 85 9A] Vulgar Fraction Five Sixths
		const int ⅛;	//[U+215B] [u8 E2 85 9B] Vulgar Fraction One Eighth
		const int ⅜;	//[U+215C] [u8 E2 85 9C] Vulgar Fraction Three Eighths
		const int ⅝;	//[U+215D] [u8 E2 85 9D] Vulgar Fraction Five Eighths
		const int ⅞;	//[U+215E] [u8 E2 85 9E] Vulgar Fraction Seven Eighths
		const int ⅟;	//[U+215F] [u8 E2 85 9F] Fraction Numerator One
		const int ↉;	//[U+2189] [u8 E2 86 89] Vulgar Fraction Zero Thirds
	}
	Frac;

	//UniNavi : Roman Numeral
	const union
	{
		//UniNavi : Roman Numeral One
		const union
		{
			const int Ⅰ;	//[U+2160] [u8 E2 85 A0] Roman Numeral One
			const int ⅰ;	//[U+2170] [u8 E2 85 B0] Small Roman Numeral One
		}
		_1;

		//UniNavi : Roman Numeral Two
		const union
		{
			const int Ⅱ;	//[U+2161] [u8 E2 85 A1] Roman Numeral Two
			const int ⅱ;	//[U+2171] [u8 E2 85 B1] Small Roman Numeral Two
		}
		_2;

		//UniNavi : Roman Numeral Three
		const union
		{
			const int Ⅲ;	//[U+2162] [u8 E2 85 A2] Roman Numeral Three
			const int ⅲ;	//[U+2172] [u8 E2 85 B2] Small Roman Numeral Three
		}
		_3;

		//UniNavi : Roman Numeral Four
		const union
		{
			const int Ⅳ;	//[U+2163] [u8 E2 85 A3] Roman Numeral Four
			const int ⅳ;	//[U+2173] [u8 E2 85 B3] Small Roman Numeral Four
		}
		_4;

		//UniNavi : Roman Numeral Five
		const union
		{
			const int Ⅴ;	//[U+2164] [u8 E2 85 A4] Roman Numeral Five
			const int ⅴ;	//[U+2174] [u8 E2 85 B4] Small Roman Numeral Five
		}
		_5;

		//UniNavi : Roman Numeral Six
		const union
		{
			const int Ⅵ;	//[U+2165] [u8 E2 85 A5] Roman Numeral Six
			const int ⅵ;	//[U+2175] [u8 E2 85 B5] Small Roman Numeral Six
			const int ↅ;	//[U+2185] [u8 E2 86 85] Roman Numeral Six Late Form
		}
		_6;

		//UniNavi : Roman Numeral Seven
		const union
		{
			const int Ⅶ;	//[U+2166] [u8 E2 85 A6] Roman Numeral Seven
			const int ⅶ;	//[U+2176] [u8 E2 85 B6] Small Roman Numeral Seven
		}
		_7;

		//UniNavi : Roman Numeral Eight
		const union
		{
			const int Ⅷ;	//[U+2167] [u8 E2 85 A7] Roman Numeral Eight
			const int ⅷ;	//[U+2177] [u8 E2 85 B7] Small Roman Numeral Eight
		}
		_8;

		//UniNavi : Roman Numeral Nine
		const union
		{
			const int Ⅸ;	//[U+2168] [u8 E2 85 A8] Roman Numeral Nine
			const int ⅸ;	//[U+2178] [u8 E2 85 B8] Small Roman Numeral Nine
		}
		_9;

		//UniNavi : Roman Numeral Ten
		const union
		{
			const int Ⅹ;	//[U+2169] [u8 E2 85 A9] Roman Numeral Ten
			const int ⅹ;	//[U+2179] [u8 E2 85 B9] Small Roman Numeral Ten
		}
		_10;

		//UniNavi : Roman Numeral Eleven
		const union
		{
			const int Ⅺ;	//[U+216A] [u8 E2 85 AA] Roman Numeral Eleven
			const int ⅺ;	//[U+217A] [u8 E2 85 BA] Small Roman Numeral Eleven
		}
		_11;

		//UniNavi : Roman Numeral Twelve
		const union
		{
			const int Ⅻ;	//[U+216B] [u8 E2 85 AB] Roman Numeral Twelve
			const int ⅻ;	//[U+217B] [u8 E2 85 BB] Small Roman Numeral Twelve
		}
		_12;

		//UniNavi : Roman Numeral Fifty
		const union
		{
			const int Ⅼ;	//[U+216C] [u8 E2 85 AC] Roman Numeral Fifty
			const int ⅼ;	//[U+217C] [u8 E2 85 BC] Small Roman Numeral Fifty
			const int ↆ;	//[U+2186] [u8 E2 86 86] Roman Numeral Fifty Early Form
		}
		_50;

		//UniNavi : Roman Numeral One Hundred
		const union
		{
			const int Ⅽ;	//[U+216D] [u8 E2 85 AD] Roman Numeral One Hundred
			const int ⅽ;	//[U+217D] [u8 E2 85 BD] Small Roman Numeral One Hundred
			const int Ↄ;	//[U+2183] [u8 E2 86 83] Roman Numeral Reversed One Hundred
			const int ↄ;	//[U+2184] [u8 E2 86 84] Latin Small Letter Reversed C
		}
		_100;

		//UniNavi : Roman Numeral Five Hundred
		const union
		{
			const int Ⅾ;	//[U+216E] [u8 E2 85 AE] Roman Numeral Five Hundred
			const int ⅾ;	//[U+217E] [u8 E2 85 BE] Small Roman Numeral Five Hundred
		}
		_500;

		//UniNavi : Roman Numeral One Thousand
		const union
		{
			const int Ⅿ;	//[U+216F] [u8 E2 85 AF] Roman Numeral One Thousand
			const int ⅿ;	//[U+217F] [u8 E2 85 BF] Small Roman Numeral One Thousand
			const int ↀ;	//[U+2180] [u8 E2 86 80] Roman Numeral One Thousand C D
		}
		_1000;

		//UniNavi : Roman Numeral Five Thousand
		const union
		{
			const int ↁ;	//[U+2181] [u8 E2 86 81] Roman Numeral Five Thousand
		}
		_5000;

		//UniNavi : Roman Numeral Ten Thousand
		const union
		{
			const int ↂ;	//[U+2182] [u8 E2 86 82] Roman Numeral Ten Thousand
		}
		_10000;

		//UniNavi : Roman Numeral Fifty Thousand
		const union
		{
			const int ↇ;	//[U+2187] [u8 E2 86 87] Roman Numeral Fifty Thousand
		}
		_50000;

		//UniNavi : Roman Numeral One Hundred Thousand
		const union
		{
			const int ↈ;	//[U+2188] [u8 E2 86 88] Roman Numeral One Hundred Thousand
		}
		_100000;
	}
	Roman;

	//UniNavi : Turned Digit
	const union
	{
		const int ↊;	//[U+218A] [u8 E2 86 8A] Turned Digit Two
		const int ↋;	//[U+218B] [u8 E2 86 8B] Turned Digit Three
	}
	Turned;
}
uUNINAVI_LET_NUMBER_FORMS_;
#endif

#endif
