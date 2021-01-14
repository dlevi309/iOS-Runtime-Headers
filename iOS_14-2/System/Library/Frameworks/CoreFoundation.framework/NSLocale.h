/*
* Generated on Thursday, January 14, 2021 at 2:20:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface NSLocale : NSObject <NSCopying, NSSecureCoding>

@property (readonly) long long _calendarDirection; 
+(id)mostPreferredLanguageOf:(id)arg1 withPreferredLanguages:(id)arg2 forUsage:(unsigned long long)arg3 options:(unsigned long long)arg4 ;
+(id)mostPreferredLanguageOf:(id)arg1 forUsage:(unsigned long long)arg2 options:(unsigned long long)arg3 ;
+(void)registerPreferredLanguage:(id)arg1 usage:(unsigned long long)arg2 confidence:(float)arg3 ;
+(void)_setPreferredMeasurementSystem:(id)arg1 ;
+(id)autoupdatingCurrentLocale;
+(id)__effectiveLanguageForBundle:(id)arg1 ;
+(void)_setPreferredTemperatureUnit:(id)arg1 ;
+(id)_preferredTemperatureUnit;
+(id)_preferredMeasurementSystem;
+(id)_deviceLanguage;
+(id)preferredLocale;
+(id)systemLanguages;
+(void)setPreferredLanguages:(id)arg1 ;
+(id)currentLocale;
+(id)systemLocale;
+(id)ISOCountryCodes;
+(id)ISOLanguageCodes;
+(id)ISOCurrencyCodes;
+(BOOL)supportsSecureCoding;
+(id)canonicalLanguageIdentifierFromString:(id)arg1 ;
+(id)localeIdentifierFromWindowsLocaleCode:(unsigned)arg1 ;
+(unsigned)windowsLocaleCodeFromLocaleIdentifier:(id)arg1 ;
+(id)commonISOCurrencyCodes;
+(id)internetServicesRegion;
+(id)canonicalLocaleIdentifierFromString:(id)arg1 ;
+(id)componentsFromLocaleIdentifier:(id)arg1 ;
+(unsigned long long)characterDirectionForLanguage:(id)arg1 ;
+(id)availableLocaleIdentifiers;
+(id)localeIdentifierFromComponents:(id)arg1 ;
+(unsigned long long)lineDirectionForLanguage:(id)arg1 ;
+(id)localeWithLocaleIdentifier:(id)arg1 ;
+(id)preferredLanguages;
+(id)allocWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(Class)classForCoder;
-(long long)_calendarDirection;
-(id)initWithCoder:(id)arg1 ;
-(id)scriptCode;
-(id)localeIdentifier;
-(id)variantCode;
-(id)currencyCode;
-(id)currencySymbol;
-(id)groupingSeparator;
-(id)_copyDisplayNameForKey:(id)arg1 value:(id)arg2 ;
-(id)localizedStringForCurrencySymbol:(id)arg1 ;
-(id)localizedStringForAlternateQuotationEndDelimiter:(id)arg1 ;
-(id)localizedStringForQuotationBeginDelimiter:(id)arg1 ;
-(id)localizedStringForQuotationEndDelimiter:(id)arg1 ;
-(id)decimalSeparator;
-(BOOL)usesMetricSystem;
-(id)quotationEndDelimiter;
-(id)alternateQuotationBeginDelimiter;
-(id)collationIdentifier;
-(id)localizedStringForLocaleIdentifier:(id)arg1 ;
-(id)exemplarCharacterSet;
-(id)localizedStringForCalendarIdentifier:(id)arg1 ;
-(id)localizedStringForCollatorIdentifier:(id)arg1 ;
-(id)localizedStringForDecimalSeparator:(id)arg1 ;
-(id)localizedStringForAlternateQuotationBeginDelimiter:(id)arg1 ;
-(id)collatorIdentifier;
-(id)localizedStringForGroupingSeparator:(id)arg1 ;
-(id)localizedStringForCollationIdentifier:(id)arg1 ;
-(id)localizedStringForCountryCode:(id)arg1 ;
-(id)quotationBeginDelimiter;
-(id)localizedStringForVariantCode:(id)arg1 ;
-(id)alternateQuotationEndDelimiter;
-(id)localizedStringForScriptCode:(id)arg1 ;
-(id)localizedStringForLanguageCode:(id)arg1 ;
-(id)localizedStringForCurrencyCode:(id)arg1 ;
-(id)countryCode;
-(unsigned long long)_cfTypeID;
-(id)initWithLocaleIdentifier:(id)arg1 ;
-(id)displayNameForKey:(id)arg1 value:(id)arg2 ;
-(id)init;
-(unsigned char)_nullLocale;
-(id)calendarIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(id)languageCode;
-(id)objectForKey:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)_prefs;
-(void)_setNullLocale;
-(id)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

