/*
* Generated on Thursday, January 14, 2021 at 2:28:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSUtility.framework/TSUtility
*/


#import <TSUtility/TSUtility-Structs.h>
@class NSLocale, NSString, NSMutableArray, TSUDateParserLibrary, NSLock, TSUDecimalFormatter, NSMutableDictionary, NSCache, TSUFormattingSymbols, NSArray, NSTimeZone;

@interface TSULocale : NSObject {

	NSLocale* _locale;
	NSLocale* _gregorianCalendarLocale;
	NSString* _languageCode;
	NSString* _localeIdentifier;
	NSString* _documentLanguageIdentifier;
	NSString* _cacheKey;
	BOOL _isAutoUpdating;
	long long _dateComponentOrdering;
	opaque_pthread_mutex_t _formattersMutex;
	NSMutableArray* _numberFormatters;
	NSMutableArray* _scientificNumberFormatters;
	TSUDateParserLibrary* _dateParserLibrary;
	NSLock* _numberFormatterStringFromDoubleWithFormatLock;
	TSUDecimalFormatter* _plainFormatter;
	TSUDecimalFormatter* _noMinusSignPlainFormatter;
	TSUDecimalFormatter* _currencyFormatter;
	TSUDecimalFormatter* _noMinusSignCurrencyFormatter;
	NSString* _activeCurrencyCode;
	NSString* _activeNoMinusSignCurrencyCode;
	NSLock* _localeSpecificStorageLock;
	NSMutableDictionary* _localeSpecificStorage;
	NSCache* _cachedLocalizedStrings;
	BOOL _uses24HourTimeCycle;
	TSUFormattingSymbols* _formattingSymbols;
	NSString* _trueString;
	NSString* _falseString;

}

@property (readonly) NSLocale * locale;                                                    //@synthesize locale=_locale - In the implementation block
@property (readonly) CFLocaleRef cfLocale; 
@property (readonly) NSLocale * gregorianCalendarLocale;                                   //@synthesize gregorianCalendarLocale=_gregorianCalendarLocale - In the implementation block
@property (readonly) CFLocaleRef cfGregorianCalendarLocale; 
@property (readonly) NSString * languageCode;                                              //@synthesize languageCode=_languageCode - In the implementation block
@property (readonly) NSString * localeIdentifier;                                          //@synthesize localeIdentifier=_localeIdentifier - In the implementation block
@property (readonly) NSString * documentLanguageIdentifier;                                //@synthesize documentLanguageIdentifier=_documentLanguageIdentifier - In the implementation block
@property (nonatomic,readonly) TSUFormattingSymbols * formattingSymbols;                   //@synthesize formattingSymbols=_formattingSymbols - In the implementation block
@property (readonly) NSString * cacheKey; 
@property (readonly) BOOL isAutoUpdating;                                                  //@synthesize isAutoUpdating=_isAutoUpdating - In the implementation block
@property (readonly) NSString * numberingSystem; 
@property (readonly) NSString * decimalSeparator; 
@property (readonly) NSString * groupingSeparator; 
@property (readonly) NSString * minusSign; 
@property (readonly) NSString * listSeparator; 
@property (readonly) NSString * percentSymbol; 
@property (readonly) unsigned long long groupingSize; 
@property (readonly) NSString * currencyCode; 
@property (readonly) long long dateComponentOrdering;                                      //@synthesize dateComponentOrdering=_dateComponentOrdering - In the implementation block
@property (readonly) NSArray * standaloneMonthSymbols; 
@property (readonly) NSArray * standaloneWeekdaySymbols; 
@property (readonly) NSArray * shortStandaloneMonthSymbols; 
@property (readonly) NSArray * shortStandaloneWeekdaySymbols; 
@property (readonly) NSString * amString; 
@property (readonly) NSString * pmString; 
@property (readonly) BOOL uses24HourTimeCycle;                                             //@synthesize uses24HourTimeCycle=_uses24HourTimeCycle - In the implementation block
@property (readonly) NSString * trueString;                                                //@synthesize trueString=_trueString - In the implementation block
@property (readonly) NSString * falseString;                                               //@synthesize falseString=_falseString - In the implementation block
@property (readonly) TSUDateParserLibrary * dateParserLibrary;                             //@synthesize dateParserLibrary=_dateParserLibrary - In the implementation block
@property (readonly) NSTimeZone * timeZone; 
@property (nonatomic,readonly) const TSUNumberOrDateLexer* numberOrDateLexer; 
+(id)currentLocale;
+(void)initialize;
+(id)preferredLanguages;
+(id)preferredLocale;
+(id)canonicalizeLocaleIdentifierWithLanguageScriptAndRegionOnly:(id)arg1 ;
+(id)canonicalizeLocaleIdentifierWithLanguageOnly:(id)arg1 ;
+(id)deducedScriptForLocale:(id)arg1 ;
+(BOOL)localeIsAutoUpdating:(id)arg1 ;
+(id)localeIDWithDefaultRegionCode:(id)arg1 ;
+(id)localeIDWithoutDefaultRegionCode:(id)arg1 avoidAmbiguousCases:(BOOL)arg2 ;
+(id)displayNameForCode:(id)arg1 ofType:(id)arg2 displayStandalone:(BOOL)arg3 ;
+(id)applicationLocale;
+(id)allSupportedTier3Languages;
+(id)canonicalizeLocaleIdentifier:(id)arg1 ;
+(void)saveLocaleForReuse:(id)arg1 ;
+(id)canonicalizeLocaleIdentifierWithLanguageAndRegionOnly:(id)arg1 ;
+(id)simplifiedDisplayNameForLocaleID:(id)arg1 displayStandalone:(BOOL)arg2 ;
+(void)setLocalizedStringBundle:(CFBundleRef)arg1 ;
+(unsigned long long)autoupdatingCurrentLocaleChangeCount;
+(id)canonicalizeLocaleIdentifierWithLanguageAndScriptOnly:(id)arg1 ;
+(id)allSupportedTier1Languages;
+(id)allSupportedTemplatePickerLanguages;
+(id)currentLocaleCurrencyCode;
+(id)currencySymbolForCurrencyCode:(id)arg1 ;
+(id)userVisibleCurrencyCodes;
+(id)displayNameForCurrencyCode:(id)arg1 ;
+(id)availableCurrencyCodes;
+(unsigned short)defaultDecimalPlacesForCurrencyCode:(id)arg1 ;
+(id)usEnglishLocale;
+(id)localeForLocaleIdentifier:(id)arg1 documentLanguageIdentifier:(id)arg2 formattingSymbolsVersion:(id)arg3 ;
+(BOOL)isValidCurrencyCode:(id)arg1 ;
-(NSString *)localeIdentifier;
-(NSString *)cacheKey;
-(NSString *)currencyCode;
-(id)initWithLocale:(id)arg1 ;
-(NSArray *)standaloneWeekdaySymbols;
-(NSString *)groupingSeparator;
-(NSString *)decimalSeparator;
-(NSArray *)standaloneMonthSymbols;
-(NSTimeZone *)timeZone;
-(NSArray *)shortStandaloneWeekdaySymbols;
-(NSArray *)shortStandaloneMonthSymbols;
-(id)URLForResource:(id)arg1 withExtension:(id)arg2 subdirectory:(id)arg3 inBundleWithURL:(id)arg4 ;
-(NSLocale *)locale;
-(NSString *)minusSign;
-(id)URLForResource:(id)arg1 withExtension:(id)arg2 subdirectory:(id)arg3 ;
-(NSString *)languageCode;
-(NSString *)pmString;
-(unsigned long long)groupingSize;
-(NSString *)percentSymbol;
-(id)localizedStringWithFormat:(id)arg1 ;
-(id)description;
-(NSString *)numberingSystem;
-(NSString *)amString;
-(id)localizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3 ;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(NSLocale *)gregorianCalendarLocale;
-(id)localeSpecificStorageForKey:(id)arg1 ;
-(void)setLocaleSpecificStorage:(id)arg1 forKey:(id)arg2 ;
-(CFLocaleRef)cfGregorianCalendarLocale;
-(TSUDateParserLibrary *)dateParserLibrary;
-(id)numberFormatterStringFromDouble:(double)arg1 withFormat:(id)arg2 useDecimalPlaces:(BOOL)arg3 minDecimalPlaces:(unsigned short)arg4 decimalPlaces:(unsigned short)arg5 showThousandsSeparator:(BOOL)arg6 currencyCode:(id)arg7 suppressMinusSign:(BOOL)arg8 ;
-(NSString *)documentLanguageIdentifier;
-(BOOL)isAutoUpdating;
-(void)_initializeNumberFormatterStringFromDoubleCache;
-(long long)localizedCaseInsensitiveCompare:(id)arg1 toString:(id)arg2 ;
-(id)URLForResource:(id)arg1 withExtension:(id)arg2 subdirectory:(id)arg3 inBundle:(CFBundleRef)arg4 ;
-(id)localeIdentifierWithLanguageAndRegionOnly;
-(unsigned long long)autoupdatingCurrentLocaleChangeCount;
-(id)initWithLocale:(id)arg1 documentLanguageIdentifier:(id)arg2 ;
-(id)localeIdentifierWithLanguageScriptAndRegionOnly;
-(id)copyWithDocumentLanguageIdentifier:(id)arg1 ;
-(id)simplifiedDisplayNameWithStandalone:(BOOL)arg1 ;
-(id)displayLanguageNameWithStandalone:(BOOL)arg1 ;
-(CFLocaleRef)cfLocale;
-(id)checkoutNumberFormatter;
-(void)returnNumberFormatter:(id)arg1 ;
-(id)checkoutScientificNumberFormatter;
-(void)returnScientificNumberFormatter:(id)arg1 ;
-(long long)localizedCompare:(id)arg1 toString:(id)arg2 ;
-(BOOL)localizedCaseInsensitiveIsEqual:(id)arg1 toString:(id)arg2 ;
-(long long)dateComponentOrdering;
-(NSString *)trueString;
-(NSString *)falseString;
-(id)currencySymbolForCurrencyCode:(id)arg1 ;
-(id)displayNameForCurrencyCode:(id)arg1 ;
-(NSString *)listSeparator;
-(id)createHarmonizedDecimalFormatterOfStyle:(long long)arg1 ;
-(BOOL)isEqualViaFormattingAsDouble:(double)arg1 :(double)arg2 ;
-(TSUFormattingSymbols *)formattingSymbols;
-(BOOL)isLanguageCharacterDirectionRightToLeft;
-(id)initWithLocale:(id)arg1 formattingSymbols:(id)arg2 ;
-(BOOL)isLanguageFormulasDirectionRightToLeft;
-(id)currencyCodeForCurrencySymbol:(id)arg1 ;
-(id)copyWithGregorianCalendar;
-(id)localeIdentifierWithCalendarAndNumberingSystem;
-(id)initWithLocale:(id)arg1 documentLanguageIdentifier:(id)arg2 useAutoupdating:(BOOL)arg3 formattingSymbols:(id)arg4 ;
-(id)initWithLocale:(id)arg1 documentLanguageIdentifier:(id)arg2 formattingSymbols:(id)arg3 ;
-(id)languageIdentifierWithLanguageAndRegionOnly;
-(const TSUNumberOrDateLexer*)numberOrDateLexer;
-(BOOL)uses24HourTimeCycle;
@end

