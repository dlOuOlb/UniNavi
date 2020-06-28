#ifndef oUNINAVI_INC_SUPERSCRIPTS_AND_SUBSCRIPTS_
#define oUNINAVI_INC_SUPERSCRIPTS_AND_SUBSCRIPTS_ "Date:2020.03.14"
/*------------------------------------------------------------------+
|	UniNavi's Navigator for the Superscripts and Subscripts Sheet	|
|																	|
|	Written by Ranny Clover											|
+-------------------------------------------------------------------+
|	References														|
|																	|
|	http://www.utf8-chartable.de/									|
|	http://en.wikipedia.org/wiki/Superscripts_and_Subscripts		|
+------------------------------------------------------------------*/

#ifdef uUNINAVI_LET_SUPERSCRIPTS_AND_SUBSCRIPTS_
//UniNavi : [U+2070-209F] Superscripts and Subscripts
extern const union
{
	//UniNavi : Superscripts
	const union
	{
		//UniNavi : Superscripts of Number
		//＊Superscripts of One Two Three are from the Latin-1 Supplement sheet.
		const union
		{
			const int ²;	//[U+00B2] [u8 C2 B2] Superscript Two
			const int ³;	//[U+00B3] [u8 C2 B3] Superscript Three
			const int ¹;	//[U+00B9] [u8 C2 B9] Superscript One

			const int ⁰;	//[U+2070] [u8 E2 81 B0] Superscript Zero
			const int ⁴;	//[U+2074] [u8 E2 81 B4] Superscript Four
			const int ⁵;	//[U+2075] [u8 E2 81 B5] Superscript Five
			const int ⁶;	//[U+2076] [u8 E2 81 B6] Superscript Six
			const int ⁷;	//[U+2077] [u8 E2 81 B7] Superscript Seven
			const int ⁸;	//[U+2078] [u8 E2 81 B8] Superscript Eight
			const int ⁹;	//[U+2079] [u8 E2 81 B9] Superscript Nine
		}
		Num;

		//UniNavi : Superscripts of Letter
		const union
		{
			const int ⁱ;	//[U+2071] [u8 E2 81 B1] Superscript Latin Small Letter I
			const int ⁿ;	//[U+207F] [u8 E2 81 BF] Superscript Latin Small Letter N
		}
		Let;

		//UniNavi : Superscripts of Symbol
		const union
		{
			const int ⁺;	//[U+207A] [u8 E2 81 BA] Superscript Plus Sign
			const int ⁻;	//[U+207B] [u8 E2 81 BB] Superscript Minus
			const int ⁼;	//[U+207C] [u8 E2 81 BC] Superscript Equals Sign
			const int ⁽;	//[U+207D] [u8 E2 81 BD] Superscript Left Parenthesis
			const int ⁾;	//[U+207E] [u8 E2 81 BE] Superscript Right Parenthesis
		}
		Sym;
	}
	Super;

	//UniNavi : Subscripts
	const union
	{
		//UniNavi : Subscripts of Number
		const union
		{
			const int ₀;	//[U+2080] [u8 E2 82 80] Subscript Zero
			const int ₁;	//[U+2081] [u8 E2 82 81] Subscript One
			const int ₂;	//[U+2082] [u8 E2 82 82] Subscript Two
			const int ₃;	//[U+2083] [u8 E2 82 83] Subscript Three
			const int ₄;	//[U+2084] [u8 E2 82 84] Subscript Four
			const int ₅;	//[U+2085] [u8 E2 82 85] Subscript Five
			const int ₆;	//[U+2086] [u8 E2 82 86] Subscript Six
			const int ₇;	//[U+2087] [u8 E2 82 87] Subscript Seven
			const int ₈;	//[U+2088] [u8 E2 82 88] Subscript Eight
			const int ₉;	//[U+2089] [u8 E2 82 89] Subscript Nine
		}
		Num;

		//UniNavi : Subscripts of Symbol
		const union
		{
			const int ₊;	//[U+208A] [u8 E2 82 8A] Subscript Plus Sign
			const int ₋;	//[U+208B] [u8 E2 82 8B] Subscript Minus
			const int ₌;	//[U+208C] [u8 E2 82 8C] Subscript Equals Sign
			const int ₍;	//[U+208D] [u8 E2 82 8D] Subscript Left Parenthesis
			const int ₎;	//[U+208E] [u8 E2 82 8E] Subscript Right Parenthesis
		}
		Sym;

		//UniNavi : Subscripts of Letter
		const union
		{
			const int ₐ;	//[U+2090] [u8 E2 82 90] Latin Subscript Small Letter A
			const int ₑ;	//[U+2091] [u8 E2 82 91] Latin Subscript Small Letter E
			const int ₒ;	//[U+2092] [u8 E2 82 92] Latin Subscript Small Letter O
			const int ₓ;	//[U+2093] [u8 E2 82 93] Latin Subscript Small Letter X
			const int ₔ;	//[U+2094] [u8 E2 82 94] Latin Subscript Small Letter Schwa
			const int ₕ;	//[U+2095] [u8 E2 82 95] Latin Subscript Small Letter H
			const int ₖ;	//[U+2096] [u8 E2 82 96] Latin Subscript Small Letter K
			const int ₗ;	//[U+2097] [u8 E2 82 97] Latin Subscript Small Letter L
			const int ₘ;	//[U+2098] [u8 E2 82 98] Latin Subscript Small Letter M
			const int ₙ;	//[U+2099] [u8 E2 82 99] Latin Subscript Small Letter N
			const int ₚ;	//[U+209A] [u8 E2 82 9A] Latin Subscript Small Letter P
			const int ₛ;	//[U+209B] [u8 E2 82 9B] Latin Subscript Small Letter S
			const int ₜ;	//[U+209C] [u8 E2 82 9C] Latin Subscript Small Letter T
		}
		Let;
	}
	Sub;
}
uUNINAVI_LET_SUPERSCRIPTS_AND_SUBSCRIPTS_;
#endif

#endif
