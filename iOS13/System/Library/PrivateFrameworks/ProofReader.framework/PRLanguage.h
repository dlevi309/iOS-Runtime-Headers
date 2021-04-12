/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)languageWithIdentifier:(id)arg1 ;
+(id)dataBundle;
+(id)localizationForLanguage:(id)arg1 ;
+(id)fallbackLocalizationForLanguage:(id)arg1 ;
+(id)localizationsForLanguage:(id)arg1 ;
+(unsigned long long)orthographyIndexForLanguageCode:(unsigned char)arg1 ;
+(unsigned long long)orthographyIndexForForOtherLanguage:(id)arg1 ;
+(unsigned)encodingForOrthographyIndex:(unsigned long long)arg1 ;
+(void)getCodesForLanguage:(id)arg1 languageCode:(char*)arg2 languageDialect:(char*)arg3 languageMode:(char*)arg4 orthographyIndex:(unsigned long long*)arg5 encoding:(unsigned*)arg6 ;
-(void)dealloc;
-(unsigned char)languageCode;
-(id)identifier;
-(id)initWithIdentifier:(id)arg1 ;
-(unsigned)encoding;
-(id)localization;
-(id)fallbackLocalization;
-(unsigned long long)orthographyIndex;
-(unsigned char)languageDialect;
-(unsigned char)languageMode;
-(const char*)oneLetterWords;
-(const char*)twoLetterWords;
-(const char*)accents;
-(BOOL)isArabic;
-(BOOL)isBulgarian;
-(BOOL)isCzech;
-(BOOL)isDanish;
-(BOOL)isDutch;
-(BOOL)isEnglish;
-(BOOL)isFinnish;
-(BOOL)isFrench;
-(BOOL)isGerman;
-(BOOL)isGreek;
-(BOOL)isHebrew;
-(BOOL)isHindi;
-(BOOL)isHungarian;
-(BOOL)isIndonesian;
-(BOOL)isItalian;
-(BOOL)isKorean;
-(BOOL)isNorwegian;
-(BOOL)isPolish;
-(BOOL)isPortuguese;
-(BOOL)isRussian;
-(BOOL)isSpanish;
-(BOOL)isSwedish;
-(BOOL)isThai;
-(BOOL)isTurkish;
-(BOOL)isUkrainian;
-(BOOL)isVietnamese;
@end

