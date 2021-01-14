/*
* Generated on Thursday, January 14, 2021 at 2:25:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
*/


@class NSString;

@interface PRLanguage : NSObject {

	NSString* _identifier;
	NSString* _localization;
	NSString* _fallbackLocalization;
	unsigned long long _orthoIndex;
	unsigned _encoding;
	unsigned char _languageCode;
	unsigned char _languageDialect;
	unsigned char _languageMode;

}
+(id)textInputModeForLanguage:(id)arg1 ;
+(id)languageModelLocalizationForLanguage:(id)arg1 ;
+(id)supportedEnglishLocalizationAdditions;
+(id)transliterationLocalizationForLanguage:(id)arg1 ;
+(id)languageWithIdentifier:(id)arg1 ;
+(unsigned long long)orthographyIndexForLanguageCode:(unsigned char)arg1 ;
+(id)supportedAssetLanguages;
+(unsigned long long)orthographyIndexForForOtherLanguage:(id)arg1 ;
+(unsigned)encodingForOrthographyIndex:(unsigned long long)arg1 ;
+(id)localizationForLanguage:(id)arg1 ;
+(id)supportedCyrillicLanguages;
+(void)getCodesForLanguage:(id)arg1 languageCode:(char*)arg2 languageDialect:(char*)arg3 languageMode:(char*)arg4 orthographyIndex:(unsigned long long*)arg5 encoding:(unsigned*)arg6 ;
+(id)fallbackLocalizationForLanguage:(id)arg1 ;
+(id)dataBundle;
+(id)localizationsForLanguage:(id)arg1 ;
+(id)supportedLatinLanguages;
+(id)supportedLanguages;
+(id)languageModelFallbackLocalizationForLanguage:(id)arg1 ;
+(id)supportedNonLatinLanguages;
+(id)supportedLocalizations;
+(id)supportedTransliterationLanguages;
+(id)englishLocalizationAdditionForLanguage:(id)arg1 ;
-(BOOL)isHindi;
-(unsigned char)languageMode;
-(BOOL)isThai;
-(unsigned char)languageDialect;
-(BOOL)isRussian;
-(BOOL)isPunjabi;
-(unsigned)encoding;
-(id)fallbackLocalization;
-(unsigned char)languageCode;
-(BOOL)isKorean;
-(BOOL)isArabic;
-(BOOL)isIndonesian;
-(BOOL)isVietnamese;
-(BOOL)isIrishGaelic;
-(BOOL)isBicameral;
-(BOOL)isItalian;
-(BOOL)isFrench;
-(unsigned long long)orthographyIndex;
-(BOOL)isCzech;
-(BOOL)isNorwegian;
-(BOOL)isPolish;
-(BOOL)isRomanian;
-(BOOL)isGerman;
-(BOOL)isSwedish;
-(const char*)twoLetterWords;
-(BOOL)isGreek;
-(BOOL)isEnglish;
-(BOOL)isUkrainian;
-(BOOL)isHungarian;
-(const char*)accents;
-(BOOL)isTurkish;
-(BOOL)isFinnish;
-(BOOL)isNynorsk;
-(id)identifier;
-(const char*)oneLetterWords;
-(id)localization;
-(BOOL)isDanish;
-(BOOL)isPortuguese;
-(BOOL)isTelugu;
-(id)initWithIdentifier:(id)arg1 ;
-(BOOL)isDutch;
-(BOOL)isSpanish;
-(BOOL)isBulgarian;
-(void)dealloc;
-(BOOL)isHebrew;
@end

