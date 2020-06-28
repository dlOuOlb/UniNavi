#ifndef oUNINAVI_INC_CURRENCY_SYMBOLS_
#define oUNINAVI_INC_CURRENCY_SYMBOLS_ "Date:2020.03.15"
/*------------------------------------------------------------------+
|	UniNavi's Navigator for the Currency Symbols Sheet				|
|																	|
|	Written by Ranny Clover											|
+-------------------------------------------------------------------+
|	References														|
|																	|
|	http://www.utf8-chartable.de/									|
|	http://en.wikipedia.org/wiki/Currency_Symbols_(Unicode_block)	|
+------------------------------------------------------------------*/

#ifdef uUNINAVI_LET_CURRENCY_SYMBOLS_
//UniNavi : [U+20A0-20CF] Currency Symbols
extern const union
{
	const union
	{
		const int ₠;	//[U+20A0] [u8 E2 82 A0] Euro-Currency Sign
		const int €;	//[U+20AC] [u8 E2 82 AC] Euro Sign
	}
	Euro;

	const union
	{
		const int ₡;	//[U+20A1] [u8 E2 82 A1] Colon Sign
	}
	Colon;

	const union
	{
		const int ₢;	//[U+20A2] [u8 E2 82 A2] Cruzeiro Sign
	}
	Cruzeiro;

	const union
	{
		const int ₣;	//[U+20A3] [u8 E2 82 A3] French Franc Sign
	}
	Franc;

	const union
	{
		const int ₤;	//[U+20A4] [u8 E2 82 A4] Lira Sign
		const int ₺;	//[U+20BA] [u8 E2 82 BA] Turkish Lira Sign
	}
	Lira;

	const union
	{
		const int ₥;	//[U+20A5] [u8 E2 82 A5] Mill Sign
	}
	Mill;

	const union
	{
		const int ₦;	//[U+20A6] [u8 E2 82 A6] Naira Sign
	}
	Naira;

	const union
	{
		const int ₧;	//[U+20A7] [u8 E2 82 A7] Peseta Sign
	}
	Peseta;

	const union
	{
		const int ₨;	//[U+20A8] [u8 E2 82 A8] Rupee Sign
		const int ₹;	//[U+20B9] [u8 E2 82 B9] Indian Rupee Sign
	}
	Rupee;

	const union
	{
		const int ₩;	//[U+20A9] [u8 E2 82 A9] Won Sign
	}
	Won;

	const union
	{
		const int ₪;	//[U+20AA] [u8 E2 82 AA] New Sheqel Sign
	}
	Sheqel;

	const union
	{
		const int ₫;	//[U+20AB] [u8 E2 82 AB] Dong Sign
	}
	Dong;

	const union
	{
		const int ₭;	//[U+20AD] [u8 E2 82 AD] Kip Sign
	}
	Kip;

	const union
	{
		const int ₮;	//[U+20AE] [u8 E2 82 AE] Tugrik Sign
	}
	Tugrik;

	const union
	{
		const int ₯;	//[U+20AF] [u8 E2 82 AF] Drachma Sign
	}
	Drachma;

	const union
	{
		const int ₰;	//[U+20B0] [u8 E2 82 B0] German Penny Sign
	}
	Penny;

	const union
	{
		const int ₱;	//[U+20B1] [u8 E2 82 B1] Peso Sign
	}
	Peso;

	const union
	{
		const int ₲;	//[U+20B2] [u8 E2 82 B2] Guarani Sign
	}
	Guarani;

	const union
	{
		const int ₳;	//[U+20B3] [u8 E2 82 B3] Austral Sign
	}
	Austral;

	const union
	{
		const int ₴;	//[U+20B4] [u8 E2 82 B4] Hryvnia Sign
	}
	Hryvnia;

	const union
	{
		const int ₵;	//[U+20B5] [u8 E2 82 B5] Cedi Sign
	}
	Cedi;

	const union
	{
		const int ₶;	//[U+20B6] [u8 E2 82 B6] Livre Tournois Sign
	}
	Tournois;

	const union
	{
		const int ₷;	//[U+20B7] [u8 E2 82 B7] Spesmilo Sign
	}
	Spesmilo;

	const union
	{
		const int ₸;	//[U+20B8] [u8 E2 82 B8] Tenge Sign
	}
	Tenge;

	const union
	{
		const int ₻;	//[U+20BB] [u8 E2 82 BB] Nordic Mark Sign
	}
	Mark;

	const union
	{
		const int ₼;	//[U+20BC] [u8 E2 82 BC] Manat Sign
	}
	Manat;

	const union
	{
		const int ₽;	//[U+20BD] [u8 E2 82 BD] Ruble Sign
	}
	Ruble;

	const union
	{
		const int ₾;	//[U+20BE] [u8 E2 82 BE] Lari Sign
	}
	Lari;

	const union
	{
		const int ₿;	//[U+20BF] [u8 E2 82 BF] Bitcoin Sign
	}
	Bitcoin;
}
uUNINAVI_LET_CURRENCY_SYMBOLS_;
#endif

#endif
