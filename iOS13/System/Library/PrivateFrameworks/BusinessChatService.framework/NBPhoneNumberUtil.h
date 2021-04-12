/*
* Generated on Monday, March 1, 2021 at 2:34:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
*/


@class NSBundle, NSLock, NSMutableDictionary, NSRegularExpression, CTTelephonyNetworkInfo, NSDictionary;

@interface NBPhoneNumberUtil : NSObject {

	NSBundle* _libPhoneBundle;
	NSLock* _entireStringCacheLock;
	NSMutableDictionary* _entireStringRegexCache;
	NSLock* _lockPatternCache;
	NSMutableDictionary* _regexPatternCache;
	NSMutableDictionary* _i18nNumberFormat;
	NSMutableDictionary* _i18nPhoneNumberDesc;
	NSMutableDictionary* _i18nPhoneMetadata;
	NSRegularExpression* _PLUS_CHARS_PATTERN;
	NSRegularExpression* _CAPTURING_DIGIT_PATTERN;
	NSRegularExpression* _VALID_ALPHA_PHONE_PATTERN;
	CTTelephonyNetworkInfo* _telephonyNetworkInfo;

}

@property (nonatomic,retain) NSLock * entireStringCacheLock;                               //@synthesize entireStringCacheLock=_entireStringCacheLock - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * entireStringRegexCache;                 //@synthesize entireStringRegexCache=_entireStringRegexCache - In the implementation block
@property (nonatomic,retain) NSLock * lockPatternCache;                                    //@synthesize lockPatternCache=_lockPatternCache - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * regexPatternCache;                      //@synthesize regexPatternCache=_regexPatternCache - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * i18nNumberFormat;                       //@synthesize i18nNumberFormat=_i18nNumberFormat - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * i18nPhoneNumberDesc;                    //@synthesize i18nPhoneNumberDesc=_i18nPhoneNumberDesc - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * i18nPhoneMetadata;                      //@synthesize i18nPhoneMetadata=_i18nPhoneMetadata - In the implementation block
@property (nonatomic,retain) NSRegularExpression * PLUS_CHARS_PATTERN;                     //@synthesize PLUS_CHARS_PATTERN=_PLUS_CHARS_PATTERN - In the implementation block
@property (nonatomic,retain) NSRegularExpression * CAPTURING_DIGIT_PATTERN;                //@synthesize CAPTURING_DIGIT_PATTERN=_CAPTURING_DIGIT_PATTERN - In the implementation block
@property (nonatomic,retain) NSRegularExpression * VALID_ALPHA_PHONE_PATTERN;              //@synthesize VALID_ALPHA_PHONE_PATTERN=_VALID_ALPHA_PHONE_PATTERN - In the implementation block
@property (nonatomic,retain) CTTelephonyNetworkInfo * telephonyNetworkInfo;                //@synthesize telephonyNetworkInfo=_telephonyNetworkInfo - In the implementation block
@property (nonatomic,readonly) NSDictionary * DIGIT_MAPPINGS; 
@property (nonatomic,readonly) NSBundle * libPhoneBundle;                                  //@synthesize libPhoneBundle=_libPhoneBundle - In the implementation block
+(id)sharedInstance;
-(id)init;
-(id)regularExpressionWithPattern:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)errorWithObject:(id)arg1 withDomain:(id)arg2 ;
-(id)entireRegularExpressionWithPattern:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)componentsSeparatedByRegex:(id)arg1 regex:(id)arg2 ;
-(int)stringPositionByRegex:(id)arg1 regex:(id)arg2 ;
-(int)indexOfStringByString:(id)arg1 target:(id)arg2 ;
-(id)replaceFirstStringByRegex:(id)arg1 regex:(id)arg2 withTemplate:(id)arg3 ;
-(id)replaceStringByRegex:(id)arg1 regex:(id)arg2 withTemplate:(id)arg3 ;
-(id)matcheFirstByRegex:(id)arg1 regex:(id)arg2 ;
-(id)matchesByRegex:(id)arg1 regex:(id)arg2 ;
-(id)matchedStringByRegex:(id)arg1 regex:(id)arg2 ;
-(BOOL)isStartingStringByRegex:(id)arg1 regex:(id)arg2 ;
-(id)stringByReplacingOccurrencesString:(id)arg1 withMap:(id)arg2 removeNonMatches:(BOOL)arg3 ;
-(BOOL)isAllDigits:(id)arg1 ;
-(BOOL)isNumeric:(id)arg1 ;
-(BOOL)isNaN:(id)arg1 ;
-(id)getNationalSignificantNumber:(id)arg1 ;
-(void)initRegularExpressionSet;
-(NSDictionary *)DIGIT_MAPPINGS;
-(void)initNormalizationMappings;
-(id)extractPossibleNumber:(id)arg1 ;
-(BOOL)isViablePhoneNumber:(id)arg1 ;
-(id)normalizePhoneNumber:(id)arg1 ;
-(void)normalizeSB:(id*)arg1 ;
-(id)normalizeDigitsOnly:(id)arg1 ;
-(id)convertAlphaCharactersInNumber:(id)arg1 ;
-(int)getLengthOfGeographicalAreaCode:(id)arg1 error:(id*)arg2 ;
-(int)getLengthOfGeographicalAreaCode:(id)arg1 ;
-(int)getLengthOfNationalDestinationCode:(id)arg1 error:(id*)arg2 ;
-(int)getLengthOfNationalDestinationCode:(id)arg1 ;
-(id)normalizeHelper:(id)arg1 normalizationReplacements:(id)arg2 removeNonMatches:(BOOL)arg3 ;
-(BOOL)formattingRuleHasFirstGroupOnly:(id)arg1 ;
-(BOOL)isNumberGeographical:(id)arg1 ;
-(BOOL)isValidRegionCode:(id)arg1 ;
-(BOOL)hasValidCountryCallingCode:(id)arg1 ;
-(id)format:(id)arg1 numberFormat:(int)arg2 error:(id*)arg3 ;
-(id)format:(id)arg1 numberFormat:(int)arg2 ;
-(id)formatByPattern:(id)arg1 numberFormat:(int)arg2 userDefinedFormats:(id)arg3 error:(id*)arg4 ;
-(id)formatByPattern:(id)arg1 numberFormat:(int)arg2 userDefinedFormats:(id)arg3 ;
-(id)formatNationalNumberWithCarrierCode:(id)arg1 carrierCode:(id)arg2 error:(id*)arg3 ;
-(id)formatNationalNumberWithCarrierCode:(id)arg1 carrierCode:(id)arg2 ;
-(id)getMetadataForRegionOrCallingCode:(id)arg1 regionCode:(id)arg2 ;
-(id)formatNationalNumberWithPreferredCarrierCode:(id)arg1 fallbackCarrierCode:(id)arg2 error:(id*)arg3 ;
-(id)formatNationalNumberWithPreferredCarrierCode:(id)arg1 fallbackCarrierCode:(id)arg2 ;
-(id)formatNumberForMobileDialing:(id)arg1 regionCallingFrom:(id)arg2 withFormatting:(BOOL)arg3 error:(id*)arg4 ;
-(id)formatNumberForMobileDialing:(id)arg1 regionCallingFrom:(id)arg2 withFormatting:(BOOL)arg3 ;
-(id)formatOutOfCountryCallingNumber:(id)arg1 regionCallingFrom:(id)arg2 error:(id*)arg3 ;
-(id)formatOutOfCountryCallingNumber:(id)arg1 regionCallingFrom:(id)arg2 ;
-(id)prefixNumberWithCountryCallingCode:(id)arg1 phoneNumberFormat:(int)arg2 formattedNationalNumber:(id)arg3 formattedExtension:(id)arg4 ;
-(id)formatInOriginalFormat:(id)arg1 regionCallingFrom:(id)arg2 error:(id*)arg3 ;
-(id)formatInOriginalFormat:(id)arg1 regionCallingFrom:(id)arg2 ;
-(BOOL)rawInputContainsNationalPrefix:(id)arg1 nationalPrefix:(id)arg2 regionCode:(id)arg3 ;
-(BOOL)hasUnexpectedItalianLeadingZero:(id)arg1 ;
-(BOOL)hasFormattingPatternForNumber:(id)arg1 ;
-(id)formatOutOfCountryKeepingAlphaChars:(id)arg1 regionCallingFrom:(id)arg2 error:(id*)arg3 ;
-(id)formatOutOfCountryKeepingAlphaChars:(id)arg1 regionCallingFrom:(id)arg2 ;
-(id)formatNsn:(id)arg1 metadata:(id)arg2 phoneNumberFormat:(int)arg3 carrierCode:(id)arg4 ;
-(id)chooseFormattingPatternForNumber:(id)arg1 nationalNumber:(id)arg2 ;
-(id)formatNsnUsingPattern:(id)arg1 formattingPattern:(id)arg2 numberFormat:(int)arg3 carrierCode:(id)arg4 ;
-(id)getExampleNumber:(id)arg1 error:(id*)arg2 ;
-(id)getExampleNumberForType:(id)arg1 type:(int)arg2 error:(id*)arg3 ;
-(id)getExampleNumberForNonGeoEntity:(id)arg1 error:(id*)arg2 ;
-(id)maybeGetFormattedExtension:(id)arg1 metadata:(id)arg2 numberFormat:(int)arg3 ;
-(id)getNumberDescByType:(id)arg1 type:(int)arg2 ;
-(int)getNumberType:(id)arg1 ;
-(int)getNumberTypeHelper:(id)arg1 metadata:(id)arg2 ;
-(BOOL)isNumberMatchingDesc:(id)arg1 numberDesc:(id)arg2 ;
-(BOOL)isValidNumber:(id)arg1 ;
-(BOOL)isValidNumberForRegion:(id)arg1 regionCode:(id)arg2 ;
-(id)getRegionCodeForNumber:(id)arg1 ;
-(id)getRegionCodeForNumberFromRegionList:(id)arg1 regionCodes:(id)arg2 ;
-(id)getRegionCodeForCountryCode:(id)arg1 ;
-(id)getRegionCodesForCountryCode:(id)arg1 ;
-(id)getCountryCodeForRegion:(id)arg1 ;
-(id)getCountryCodeForValidRegion:(id)arg1 error:(id*)arg2 ;
-(id)getNddPrefixForRegion:(id)arg1 stripNonDigits:(BOOL)arg2 ;
-(BOOL)isNANPACountry:(id)arg1 ;
-(BOOL)isLeadingZeroPossible:(id)arg1 ;
-(BOOL)isAlphaNumber:(id)arg1 ;
-(BOOL)isPossibleNumber:(id)arg1 error:(id*)arg2 ;
-(BOOL)isPossibleNumber:(id)arg1 ;
-(int)testNumberLengthAgainstPattern:(id)arg1 number:(id)arg2 ;
-(int)isPossibleNumberWithReason:(id)arg1 error:(id*)arg2 ;
-(int)isPossibleNumberWithReason:(id)arg1 ;
-(BOOL)isPossibleNumberString:(id)arg1 regionDialingFrom:(id)arg2 error:(id*)arg3 ;
-(BOOL)truncateTooLongNumber:(id)arg1 ;
-(id)extractCountryCode:(id)arg1 nationalNumber:(id*)arg2 ;
-(id)getSupportedRegions;
-(id)maybeExtractCountryCode:(id)arg1 metadata:(id)arg2 nationalNumber:(id*)arg3 keepRawInput:(BOOL)arg4 phoneNumber:(id*)arg5 error:(id*)arg6 ;
-(BOOL)parsePrefixAsIdd:(id)arg1 sourceString:(id*)arg2 ;
-(int)maybeStripInternationalPrefixAndNormalize:(id*)arg1 possibleIddPrefix:(id)arg2 ;
-(BOOL)maybeStripNationalPrefixAndCarrierCode:(id*)arg1 metadata:(id)arg2 carrierCode:(id*)arg3 ;
-(id)maybeStripExtension:(id*)arg1 ;
-(BOOL)checkRegionForParsing:(id)arg1 defaultRegion:(id)arg2 ;
-(id)parse:(id)arg1 defaultRegion:(id)arg2 error:(id*)arg3 ;
-(id)parseWithPhoneCarrierRegion:(id)arg1 error:(id*)arg2 ;
-(id)countryCodeByCarrier;
-(id)parseAndKeepRawInput:(id)arg1 defaultRegion:(id)arg2 error:(id*)arg3 ;
-(id)parseHelper:(id)arg1 defaultRegion:(id)arg2 keepRawInput:(BOOL)arg3 checkRegion:(BOOL)arg4 error:(id*)arg5 ;
-(void)buildNationalNumberForParsing:(id)arg1 nationalNumber:(id*)arg2 ;
-(int)isNumberMatch:(id)arg1 second:(id)arg2 error:(id*)arg3 ;
-(int)isNumberMatch:(id)arg1 second:(id)arg2 ;
-(BOOL)isNationalNumberSuffixOfTheOther:(id)arg1 second:(id)arg2 ;
-(BOOL)canBeInternationallyDialled:(id)arg1 error:(id*)arg2 ;
-(BOOL)canBeInternationallyDialled:(id)arg1 ;
-(BOOL)matchesEntirely:(id)arg1 string:(id)arg2 ;
-(NSBundle *)libPhoneBundle;
-(NSLock *)entireStringCacheLock;
-(void)setEntireStringCacheLock:(NSLock *)arg1 ;
-(NSMutableDictionary *)entireStringRegexCache;
-(void)setEntireStringRegexCache:(NSMutableDictionary *)arg1 ;
-(NSLock *)lockPatternCache;
-(void)setLockPatternCache:(NSLock *)arg1 ;
-(NSMutableDictionary *)regexPatternCache;
-(void)setRegexPatternCache:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)i18nNumberFormat;
-(void)setI18nNumberFormat:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)i18nPhoneNumberDesc;
-(void)setI18nPhoneNumberDesc:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)i18nPhoneMetadata;
-(void)setI18nPhoneMetadata:(NSMutableDictionary *)arg1 ;
-(NSRegularExpression *)PLUS_CHARS_PATTERN;
-(void)setPLUS_CHARS_PATTERN:(NSRegularExpression *)arg1 ;
-(NSRegularExpression *)CAPTURING_DIGIT_PATTERN;
-(void)setCAPTURING_DIGIT_PATTERN:(NSRegularExpression *)arg1 ;
-(NSRegularExpression *)VALID_ALPHA_PHONE_PATTERN;
-(void)setVALID_ALPHA_PHONE_PATTERN:(NSRegularExpression *)arg1 ;
-(CTTelephonyNetworkInfo *)telephonyNetworkInfo;
-(void)setTelephonyNetworkInfo:(CTTelephonyNetworkInfo *)arg1 ;
@end

