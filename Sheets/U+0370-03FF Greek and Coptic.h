#ifndef oUNINAVI_INC_GREEK_AND_COPTIC_
#define oUNINAVI_INC_GREEK_AND_COPTIC_ "Date:2020.03.14"
/*------------------------------------------------------------------+
|	UniNavi's Navigator for the Greek and Coptic Sheet				|
|																	|
|	Written by Ranny Clover											|
+-------------------------------------------------------------------+
|	References														|
|																	|
|	http://www.utf8-chartable.de/									|
|	http://en.wikipedia.org/wiki/Greek_and_Coptic					|
+------------------------------------------------------------------*/

#ifdef uUNINAVI_LET_GREEK_AND_COPTIC_
//UniNavi : [U+0370-03FF] Greek and Coptic
extern const union
{
	//Greek Letter Heta
	const union
	{
		const int Ͱ;	//[U+0370] [u8 CD B0] Greek Capital Letter Heta
		const int ͱ;	//[U+0371] [u8 CD B1] Greek Small Letter Heta
	}
	Heta;

	//Greek Letter Sampi
	const union
	{
		const int Ͳ;	//[U+0372] [u8 CD B2] Greek Capital Letter Archaic Sampi
		const int ͳ;	//[U+0373] [u8 CD B3] Greek Small Letter Archaic Sampi
		const int Ϡ;	//[U+03E0] [u8 CF A0] Greek Letter Sampi
		const int ϡ;	//[U+03E1] [u8 CF A1] Greek Small Letter Sampi
	}
	Sampi;

	//Greek Marks
	const union
	{
		const int ʹ;	//[U+0374] [u8 CD B4] Greek Numeral Sign
		const int ͵;	//[U+0375] [u8 CD B5] Greek Lower Numeral Sign
		const int ͺ;	//[U+037A] [u8 CD BA] Greek Ypogegrammeni
		const int ;;	//[U+037E] [u8 CD BE] Greek Question Mark
		const int ΄;	//[U+0384] [u8 CE 84] Greek Tonos
		const int ΅;	//[U+0385] [u8 CE 85] Greek Dialytika Tonos
		const int ·;	//[U+0387] [u8 CE 87] Greek Ano Teleia
	}
	Mark;

	//Greek Letter Digamma
	const union
	{
		const int Ͷ;	//[U+0376] [u8 CD B6] Greek Capital Letter Pamphylian Digamma
		const int ͷ;	//[U+0377] [u8 CD B7] Greek Small Letter Pamphylian Digamma
		const int Ϝ;	//[U+03DC] [u8 CF 9C] Greek Letter Digamma
		const int ϝ;	//[U+03DD] [u8 CF 9D] Greek Small Letter Digamma
	}
	Digamma;

	//Greek Letter Sigma
	const union
	{
		const int ͻ;	//[U+037B] [u8 CD BB] Greek Small Reversed Lunate Sigma Symbol
		const int ͼ;	//[U+037C] [u8 CD BC] Greek Small Dotted Lunate Sigma Symbol
		const int ͽ;	//[U+037D] [u8 CD BD] Greek Small Reversed Dotted Lunate Sigma Symbol
		const int Σ;	//[U+03A3] [u8 CE A3] Greek Capital Letter Sigma
		const int ς;	//[U+03C2] [u8 CF 82] Greek Small Letter Final Sigma
		const int σ;	//[U+03C3] [u8 CF 83] Greek Small Letter Sigma
		const int ϲ;	//[U+03F2] [u8 CF B2] Greek Lunate Sigma Symbol
		const int Ϲ;	//[U+03F9] [u8 CF B9] Greek Capital Lunate Sigma Symbol
		const int Ͻ;	//[U+03FD] [u8 CF BD] Greek Capital Reversed Lunate Sigma Symbol
		const int Ͼ;	//[U+03FE] [u8 CF BE] Greek Capital Dotted Lunate Sigma Symbol
		const int Ͽ;	//[U+03FF] [u8 CF BF] Greek Capital Reversed Dotted Lunate Sigma Symbol
	}
	Sigma;

	//Greek Letter Yot
	const union
	{
		const int Ϳ;	//[U+037F] [u8 CD BF] Greek Capital Letter Yot
		const int ϳ;	//[U+03F3] [u8 CF B3] Greek Letter Yot
	}
	Yot;

	//Greek Letter Alpha
	const union
	{
		const int Ά;	//[U+0386] [u8 CE 86] Greek Capital Letter Alpha with Tonos
		const int Α;	//[U+0391] [u8 CE 91] Greek Capital Letter Alpha
		const int ά;	//[U+03AC] [u8 CE AC] Greek Small Letter Alpha with Tonos
		const int α;	//[U+03B1] [u8 CE B1] Greek Small Letter Alpha
	}
	Alpha;

	//Greek Letter Epsilon
	const union
	{
		const int Έ;	//[U+0388] [u8 CE 88] Greek Capital Letter Epsilon with Tonos
		const int Ε;	//[U+0395] [u8 CE 95] Greek Capital Letter Epsilon
		const int έ;	//[U+03AD] [u8 CE AD] Greek Small Letter Epsilon with Tonos
		const int ε;	//[U+03B5] [u8 CE B5] Greek Small Letter Epsilon
		const int ϵ;	//[U+03F5] [u8 CF B5] Greek Lunate Epsilon Symbol
		const int ϶;	//[U+03F6] [u8 CF B6] Greek Reversed Lunate Epsilon Symbol
	}
	Epsilon;

	//Greek Letter Eta
	const union
	{
		const int Ή;	//[U+0389] [u8 CE 89] Greek Capital Letter Eta with Tonos
		const int Η;	//[U+0397] [u8 CE 97] Greek Capital Letter Eta
		const int ή;	//[U+03AE] [u8 CE AE] Greek Small Letter Eta with Tonos
		const int η;	//[U+03B7] [u8 CE B7] Greek Small Letter Eta
	}
	Eta;

	//Greek Letter Iota
	const union
	{
		const int Ί;	//[U+038A] [u8 CE 8A] Greek Capital Letter Iota with Tonos
		const int ΐ;	//[U+0390] [u8 CE 90] Greek Small Letter Iota with Dialytika and Tonos
		const int Ι;	//[U+0399] [u8 CE 99] Greek Capital Letter Iota
		const int Ϊ;	//[U+03AA] [u8 CE AA] Greek Capital Letter Iota with Dialytika
		const int ί;	//[U+03AF] [u8 CE AF] Greek Small Letter Iota with Tonos
		const int ι;	//[U+03B9] [u8 CE B9] Greek Small Letter Iota
		const int ϊ;	//[U+03CA] [u8 CF 8A] Greek Small Letter Iota with Dialytika
	}
	Iota;

	//Greek Letter Omicron
	const union
	{
		const int Ό;	//[U+038C] [u8 CE 8C] Greek Capital Letter Omicron with Tonos
		const int Ο;	//[U+039F] [u8 CE 9F] Greek Capital Letter Omicron
		const int ο;	//[U+03BF] [u8 CE BF] Greek Small Letter Omicron
		const int ό;	//[U+03CC] [u8 CF 8C] Greek Small Letter Omicron with Tonos
	}
	Omicron;

	//Greek Letter Upsilon
	const union
	{
		const int Ύ;	//[U+038E] [u8 CE 8E] Greek Capital Letter Upsilon with Tonos
		const int Υ;	//[U+03A5] [u8 CE A5] Greek Capital Letter Upsilon
		const int Ϋ;	//[U+03AB] [u8 CE AB] Greek Capital Letter Upsilon with Dialytika
		const int ΰ;	//[U+03B0] [u8 CE B0] Greek Small Letter Upsilon with Dialytika and Tonos
		const int υ;	//[U+03C5] [u8 CF 85] Greek Small Letter Upsilon
		const int ϋ;	//[U+03CB] [u8 CF 8B] Greek Small Letter Upsilon with Dialytika
		const int ύ;	//[U+03CD] [u8 CF 8D] Greek Small Letter Upsilon with Tonos
		const int ϒ;	//[U+03D2] [u8 CF 92] Greek Upsilon with Hook Symbol
		const int ϓ;	//[U+03D3] [u8 CF 93] Greek Upsilon with Acute and Hook Symbol
		const int ϔ;	//[U+03D4] [u8 CF 94] Greek Upsilon with Diaeresis and Hook Symbol
	}
	Upsilon;

	//Greek Letter Omega
	const union
	{
		const int Ώ;	//[U+038F] [u8 CE 8F] Greek Capital Letter Omega with Tonos
		const int Ω;	//[U+03A9] [u8 CE A9] Greek Capital Letter Omega
		const int ω;	//[U+03C9] [u8 CF 89] Greek Small Letter Omega
		const int ώ;	//[U+03CE] [u8 CF 8E] Greek Small Letter Omega with Tonos
	}
	Omega;

	//Greek Letter Beta
	const union
	{
		const int Β;	//[U+0392] [u8 CE 92] Greek Capital Letter Beta
		const int β;	//[U+03B2] [u8 CE B2] Greek Small Letter Beta
		const int ϐ;	//[U+03D0] [u8 CF 90] Greek Beta Symbol
	}
	Beta;

	//Greek Letter Gamma
	const union
	{
		const int Γ;	//[U+0393] [u8 CE 93] Greek Capital Letter Gamma
		const int γ;	//[U+03B3] [u8 CE B3] Greek Small Letter Gamma
	}
	Gamma;

	//Greek Letter Delta
	const union
	{
		const int Δ;	//[U+0394] [u8 CE 94] Greek Capital Letter Delta
		const int δ;	//[U+03B4] [u8 CE B4] Greek Small Letter Delta
	}
	Delta;

	//Greek Letter Zeta
	const union
	{
		const int Ζ;	//[U+0396] [u8 CE 96] Greek Capital Letter Zeta
		const int ζ;	//[U+03B6] [u8 CE B6] Greek Small Letter Zeta
	}
	Zeta;

	//Greek Letter Theta
	const union
	{
		const int Θ;	//[U+0398] [u8 CE 98] Greek Capital Letter Theta
		const int θ;	//[U+03B8] [u8 CE B8] Greek Small Letter Theta
		const int ϑ;	//[U+03D1] [u8 CF 91] Greek Theta Symbol
		const int ϴ;	//[U+03F4] [u8 CF B4] Greek Capital Theta Symbol
	}
	Theta;

	//Greek Letter Kappa
	const union
	{
		const int Κ;	//[U+039A] [u8 CE 9A] Greek Capital Letter Kappa
		const int κ;	//[U+03BA] [u8 CE BA] Greek Small Letter Kappa
		const int ϰ;	//[U+03F0] [u8 CF B0] Greek Kappa Symbol
	}
	Kappa;

	//Greek Letter Lamda
	const union
	{
		const int Λ;	//[U+039B] [u8 CE 9B] Greek Capital Letter Lamda
		const int λ;	//[U+03BB] [u8 CE BB] Greek Small Letter Lamda
	}
	Lamda;

	//Greek Letter Mu
	const union
	{
		const int Μ;	//[U+039C] [u8 CE 9C] Greek Capital Letter Mu
		const int μ;	//[U+03BC] [u8 CE BC] Greek Small Letter Mu
	}
	Mu;

	//Greek Letter Nu
	const union
	{
		const int Ν;	//[U+039D] [u8 CE 9D] Greek Capital Letter Nu
		const int ν;	//[U+03BD] [u8 CE BD] Greek Small Letter Nu
	}
	Nu;

	//Greek Letter Xi
	const union
	{
		const int Ξ;	//[U+039E] [u8 CE 9E] Greek Capital Letter Xi
		const int ξ;	//[U+03BE] [u8 CE BE] Greek Small Letter Xi
	}
	Xi;

	//Greek Letter Pi
	const union
	{
		const int Π;	//[U+03A0] [u8 CE A0] Greek Capital Letter Pi
		const int π;	//[U+03C0] [u8 CF 80] Greek Small Letter Pi
		const int ϖ;	//[U+03D6] [u8 CF 96] Greek Pi Symbol
	}
	Pi;

	//Greek Letter Rho
	const union
	{
		const int Ρ;	//[U+03A1] [u8 CE A1] Greek Capital Letter Rho
		const int ρ;	//[U+03C1] [u8 CF 81] Greek Small Letter Rho
		const int ϱ;	//[U+03F1] [u8 CF B1] Greek Rho Symbol
		const int ϼ;	//[U+03FC] [u8 CF BC] Greek Rho with Stroke Symbol
	}
	Rho;

	//Greek Letter Tau
	const union
	{
		const int Τ;	//[U+03A4] [u8 CE A4] Greek Capital Letter Tau
		const int τ;	//[U+03C4] [u8 CF 84] Greek Small Letter Tau
	}
	Tau;

	//Greek Letter Phi
	const union
	{
		const int Φ;	//[U+03A6] [u8 CE A6] Greek Capital Letter Phi
		const int φ;	//[U+03C6] [u8 CF 86] Greek Small Letter Phi
		const int ϕ;	//[U+03D5] [u8 CF 95] Greek Phi Symbol
	}
	Phi;

	//Greek Letter Chi
	const union
	{
		const int Χ;	//[U+03A7] [u8 CE A7] Greek Capital Letter Chi
		const int χ;	//[U+03C7] [u8 CF 87] Greek Small Letter Chi
	}
	Chi;

	//Greek Letter Psi
	const union
	{
		const int Ψ;	//[U+03A8] [u8 CE A8] Greek Capital Letter Psi
		const int ψ;	//[U+03C8] [u8 CF 88] Greek Small Letter Psi
	}
	Psi;

	//Greek Letter Kai
	const union
	{
		const int Ϗ;	//[U+03CF] [u8 CF 8F] Greek Capital Kai Symbol
		const int ϗ;	//[U+03D7] [u8 CF 97] Greek Kai Symbol
	}
	Kai;

	//Greek Letter Koppa
	const union
	{
		const int Ϙ;	//[U+03D8] [u8 CF 98] Greek Letter Archaic Koppa
		const int ϙ;	//[U+03D9] [u8 CF 99] Greek Small Letter Archaic Koppa
		const int Ϟ;	//[U+03DE] [u8 CF 9E] Greek Letter Koppa
		const int ϟ;	//[U+03DF] [u8 CF 9F] Greek Small Letter Koppa
	}
	Koppa;

	//Greek Letter Stigma
	const union
	{
		const int Ϛ;	//[U+03DA] [u8 CF 9A] Greek Letter Stigma
		const int ϛ;	//[U+03DB] [u8 CF 9B] Greek Small Letter Stigma
	}
	Stigma;

	//Greek Letter Shei
	const union
	{
		const int Ϣ;	//[U+03E2] [u8 CF A2] Coptic Capital Letter Shei
		const int ϣ;	//[U+03E3] [u8 CF A3] Coptic Small Letter Shei
	}
	Shei;

	//Greek Letter Fei
	const union
	{
		const int Ϥ;	//[U+03E4] [u8 CF A4] Coptic Capital Letter Fei
		const int ϥ;	//[U+03E5] [u8 CF A5] Coptic Small Letter Fei
	}
	Fei;

	//Greek Letter Khei
	const union
	{
		const int Ϧ;	//[U+03E6] [u8 CF A6] Coptic Capital Letter Khei
		const int ϧ;	//[U+03E7] [u8 CF A7] Coptic Small Letter Khei
	}
	Khei;

	//Greek Letter Hori
	const union
	{
		const int Ϩ;	//[U+03E8] [u8 CF A8] Coptic Capital Letter Hori
		const int ϩ;	//[U+03E9] [u8 CF A9] Coptic Small Letter Hori
	}
	Hori;

	//Greek Letter Gangia
	const union
	{
		const int Ϫ;	//[U+03EA] [u8 CF AA] Coptic Capital Letter Gangia
		const int ϫ;	//[U+03EB] [u8 CF AB] Coptic Small Letter Gangia
	}
	Gangia;

	//Greek Letter Shima
	const union
	{
		const int Ϭ;	//[U+03EC] [u8 CF AC] Coptic Capital Letter Shima
		const int ϭ;	//[U+03ED] [u8 CF AD] Coptic Small Letter Shima
	}
	Shima;

	//Greek Letter Dei
	const union
	{
		const int Ϯ;	//[U+03EE] [u8 CF AE] Coptic Capital Letter Dei
		const int ϯ;	//[U+03EF] [u8 CF AF] Coptic Small Letter Dei
	}
	Dei;

	//Greek Letter Sho
	const union
	{
		const int Ϸ;	//[U+03F7] [u8 CF B7] Greek Capital Letter Sho
		const int ϸ;	//[U+03F8] [u8 CF B8] Greek Small Letter Sho
	}
	Sho;

	//Greek Letter San
	const union
	{
		const int Ϻ;	//[U+03FA] [u8 CF BA] Greek Capital Letter San
		const int ϻ;	//[U+03FB] [u8 CF BB] Greek Small Letter San
	}
	San;
}
uUNINAVI_LET_GREEK_AND_COPTIC_;
#endif

#endif
