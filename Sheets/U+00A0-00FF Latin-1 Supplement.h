#ifndef oUNINAVI_INC_LATIN_1_SUPPLEMENT_
#define oUNINAVI_INC_LATIN_1_SUPPLEMENT_ "Date:2020.03.14"
/*------------------------------------------------------------------+
|	UniNavi's Navigator for the Latin-1 Supplement Sheet			|
|																	|
|	Written by Ranny Clover											|
+-------------------------------------------------------------------+
|	References														|
|																	|
|	http://www.utf8-chartable.de/									|
|	http://en.wikipedia.org/wiki/Latin-1_Supplement					|
+------------------------------------------------------------------*/

#ifdef uUNINAVI_LET_LATIN_1_SUPPLEMENT_
//UniNavi : [U+00A0-00FF] Latin-1 Supplement
extern const union
{
	//UniNavi : Punctutation Marks
	const union
	{
#ifdef uUNINAVI_USE_NON_STANDARD_
		const int ¡;	//[U+00A1] [u8 C2 A1] Inverted Exclamation Mark
		const int «;	//[U+00AB] [u8 C2 AB] Left-Pointing Double Angle Quotation Mark
#endif
		const int ·;	//[U+00B7] [u8 C2 B7] Middle Dot
#ifdef uUNINAVI_USE_NON_STANDARD_
		const int »;	//[U+00BB] [u8 C2 BB] Right-Pointing Double-Angle Quotation Mark
		const int ¿;	//[U+00BF] [u8 C2 BF] Inverted Question Mark
#endif
	}
	Punc;

#ifdef uUNINAVI_USE_NON_STANDARD_
	//UniNavi : Currency Symbols
	const union
	{
		const int ¢;	//[U+00A2] [u8 C2 A2] Cent Sign
		const int £;	//[U+00A3] [u8 C2 A3] Pound Sign
		const int ¤;	//[U+00A4] [u8 C2 A4] Currency Sign
		const int ¥;	//[U+00A5] [u8 C2 A5] Yen Sign
	}
	Curr;
#endif

	//UniNavi : Mathematical Symbols
	//＊Superscripts of other numbers are under the Superscripts and Subscripts sheet.
	const union
	{
#ifdef uUNINAVI_USE_NON_STANDARD_
		const int ¦;	//[U+00A6] [u8 C2 A6] Broken Bar
		const int ¬;	//[U+00AC] [u8 C2 AC] Not Sign
		const int °;	//[U+00B0] [u8 C2 B0] Degree Symbol
		const int ±;	//[U+00B1] [u8 C2 B1] Plus-Minus Sign
#endif
		const int ²;	//[U+00B2] [u8 C2 B2] Superscript Two
		const int ³;	//[U+00B3] [u8 C2 B3] Superscript Three
		const int µ;	//[U+00B5] [u8 C2 B5] Micro Sign
		const int ¹;	//[U+00B9] [u8 C2 B9] Superscript One
		const int ¼;	//[U+00BC] [u8 C2 BC] Vulgar Fraction One Quarter
		const int ½;	//[U+00BD] [u8 C2 BD] Vulgar Fraction One Half
		const int ¾;	//[U+00BE] [u8 C2 BE] Vulgar Fraction Three Quarters
#ifdef uUNINAVI_USE_NON_STANDARD_
		const int ×;	//[U+00D7] [u8 C3 97] Multiplication Sign
		const int ÷;	//[U+00F7] [u8 C3 B7] Division Sign
#endif
	}
	Math;

	//UniNavi : Various Signs
	const union
	{
#ifdef uUNINAVI_USE_NON_STANDARD_
		const int §;	//[U+00A7] [u8 C2 A7] Section Sign
		const int ©;	//[U+00A9] [u8 C2 A9] Copyright Sign
#endif
		const int ª;	//[U+00AA] [u8 C2 AA] Feminine Ordinal Indicator
#ifdef uUNINAVI_USE_NON_STANDARD_
		const int ®;	//[U+00AE] [u8 C2 AE] Registered Sign
		const int ¶;	//[U+00B6] [u8 C2 B6] Pilcrow Sign
#endif
		const int º;	//[U+00BA] [u8 C2 BA] Masculine Ordinal Indicator
	}
	Sign;

	//UniNavi : Diacritical Marks
	const union
	{
		const int ¨;	//[U+00A8] [u8 C2 A8] Diaeresis
		const int ¯;	//[U+00AF] [u8 C2 AF] Macron
		const int ´;	//[U+00B4] [u8 C2 B4] Acute Accent
		const int ¸;	//[U+00B8] [u8 C2 B8] Cedilla
	}
	Diac;

	//UniNavi : Latin Letters
	const union
	{
		//Latin Letter A
		const union
		{
			const int À;	//[U+00C0] [u8 C3 80] Latin Capital Letter A with Grave
			const int Á;	//[U+00C1] [u8 C3 81] Latin Capital Letter A with Acute
			const int Â;	//[U+00C2] [u8 C3 82] Latin Capital Letter A with Circumflex
			const int Ã;	//[U+00C3] [u8 C3 83] Latin Capital Letter A with Tilde
			const int Ä;	//[U+00C4] [u8 C3 84] Latin Capital Letter A with Diaeresis
			const int Å;	//[U+00C5] [u8 C3 85] Latin Capital Letter A with Ring Above
			const int à;	//[U+00E0] [u8 C3 A0] Latin Small Letter A with Grave
			const int á;	//[U+00E1] [u8 C3 A1] Latin Small Letter A with Acute
			const int â;	//[U+00E2] [u8 C3 A2] Latin Small Letter A with Circumflex
			const int ã;	//[U+00E3] [u8 C3 A3] Latin Small Letter A with Tilde
			const int ä;	//[U+00E4] [u8 C3 A4] Latin Small Letter A with Diaeresis
			const int å;	//[U+00E5] [u8 C3 A5] Latin Small Letter A with Ring Above
		}
		A;

		//Latin Letter AE
		const union
		{
			const int Æ;	//[U+00C6] [u8 C3 86] Latin Capital Letter AE
			const int æ;	//[U+00E6] [u8 C3 A6] Latin Small Letter AE
		}
		AE;

		//Latin Letter C
		const union
		{
			const int Ç;	//[U+00C7] [u8 C3 87] Latin Capital Letter C with Cedilla
			const int ç;	//[U+00E7] [u8 C3 A7] Latin Small Letter C with Cedilla
		}
		C;

		//Latin Letter E
		const union
		{
			const int È;	//[U+00C8] [u8 C3 88] Latin Capital Letter E with Grave
			const int É;	//[U+00C9] [u8 C3 89] Latin Capital Letter E with Acute
			const int Ê;	//[U+00CA] [u8 C3 8A] Latin Capital Letter E with Circumflex
			const int Ë;	//[U+00CB] [u8 C3 8B] Latin Capital Letter E with Diaeresis
			const int è;	//[U+00E8] [u8 C3 A8] Latin Small Letter E with Grave
			const int é;	//[U+00E9] [u8 C3 A9] Latin Small Letter E with Acute
			const int ê;	//[U+00EA] [u8 C3 AA] Latin Small Letter E with Circumflex
			const int ë;	//[U+00EB] [u8 C3 AB] Latin Small Letter E with Diaeresis
		}
		E;

		//Latin Letter I
		const union
		{
			const int Ì;	//[U+00CC] [u8 C3 8C] Latin Capital Letter I with Grave
			const int Í;	//[U+00CD] [u8 C3 8D] Latin Capital Letter I with Acute
			const int Î;	//[U+00CE] [u8 C3 8E] Latin Capital Letter I with Circumflex
			const int Ï;	//[U+00CF] [u8 C3 8F] Latin Capital Letter I with Diaeresis
			const int ì;	//[U+00EC] [u8 C3 AC] Latin Small Letter I with Grave
			const int í;	//[U+00ED] [u8 C3 AD] Latin Small Letter I with Acute
			const int î;	//[U+00EE] [u8 C3 AE] Latin Small Letter I with Circumflex
			const int ï;	//[U+00EF] [u8 C3 AF] Latin Small Letter I with Diaeresis
		}
		I;

		//Latin Letter Eth
		const union
		{
			const int Ð;	//[U+00D0] [u8 C3 90] Latin Capital Letter Eth
			const int ð;	//[U+00F0] [u8 C3 B0] Latin Small Letter Eth
		}
		Eth;

		//Latin Letter N
		const union
		{
			const int Ñ;	//[U+00D1] [u8 C3 91] Latin Capital Letter N with Tilde
			const int ñ;	//[U+00F1] [u8 C3 B1] Latin Small Letter N with Tilde
		}
		N;

		//Latin Letter O
		const union
		{
			const int Ò;	//[U+00D2] [u8 C3 92] Latin Capital Letter O with Grave
			const int Ó;	//[U+00D3] [u8 C3 93] Latin Capital Letter O with Acute
			const int Ô;	//[U+00D4] [u8 C3 94] Latin Capital Letter O with Circumflex
			const int Õ;	//[U+00D5] [u8 C3 95] Latin Capital Letter O with Tilde
			const int Ö;	//[U+00D6] [u8 C3 96] Latin Capital Letter O with Diaeresis
			const int Ø;	//[U+00D8] [u8 C3 98] Latin Capital letter O with Stroke
			const int ò;	//[U+00F2] [u8 C3 B2] Latin Small Letter O with Grave
			const int ó;	//[U+00F3] [u8 C3 B3] Latin Small Letter O with Acute
			const int ô;	//[U+00F4] [u8 C3 B4] Latin Small Letter O with Circumflex
			const int õ;	//[U+00F5] [u8 C3 B5] Latin Small Letter O with Tilde
			const int ö;	//[U+00F6] [u8 C3 B6] Latin Small Letter O with Diaeresis
			const int ø;	//[U+00F8] [u8 C3 B8] Latin Small Letter O with Stroke
		}
		O;

		//Latin Letter U
		const union
		{
			const int Ù;	//[U+00D9] [u8 C3 99] Latin Capital letter U with Grave
			const int Ú;	//[U+00DA] [u8 C3 9A] Latin Capital letter U with Acute
			const int Û;	//[U+00DB] [u8 C3 9B] Latin Capital Letter U with Circumflex
			const int Ü;	//[U+00DC] [u8 C3 9C] Latin Capital Letter U with Diaeresis
			const int ù;	//[U+00F9] [u8 C3 B9] Latin Small Letter U with Grave
			const int ú;	//[U+00FA] [u8 C3 BA] Latin Small Letter U with Acute
			const int û;	//[U+00FB] [u8 C3 BB] Latin Small Letter U with Circumflex
			const int ü;	//[U+00FC] [u8 C3 BC] Latin Small Letter U with Diaeresis
		}
		U;

		//Latin Letter Y
		const union
		{
			const int Ý;	//[U+00DD] [u8 C3 9D] Latin Capital Letter Y with Acute
			const int ý;	//[U+00FD] [u8 C3 BD] Latin Small Letter Y with Acute
			const int ÿ;	//[U+00FF] [u8 C3 BF] \xC3\xBF Latin Small Letter Y with Diaeresis
		}
		Y;

		//Latin Letter Thorn
		const union
		{
			const int Þ;	//[U+00DE] [u8 C3 9E] Latin Capital Letter Thorn
			const int þ;	//[U+00FE] [u8 C3 BE] Latin Small Letter Thorn
		}
		Thorn;

		//Latin Letter S
		const union
		{
			const int ß;	//[U+00DF] [u8 C3 9F] Latin Small Letter Sharp S
		}
		S;
	}
	Let;
}
uUNINAVI_LET_LATIN_1_SUPPLEMENT_;
#endif

#endif
