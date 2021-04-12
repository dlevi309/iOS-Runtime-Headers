/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/

#import <Foundation/NSFormatter.h>

@class NSLocale, NSArray, NSString;

@interface CNDateComponentsFormatter : NSFormatter {

	NSLocale* _locale;
	NSArray* _lazyFormatterFutures;
	NSString* _dateFormatPlaceholderString;

}

@property (nonatomic,retain) NSLocale * locale;              //@synthesize locale=_locale - In the implementation block
+(id)os_log;
+(id)shortDayMonthYearDateFormatterWithLocale:(id)arg1 ;
+(id)formatterFuturesWithLocale:(id)arg1 ;
+(id)chineseMonthDayFormatter;
+(BOOL)shouldUseChinaSpecificFormattersForLocale:(id)arg1 ;
+(id)chineseRelatedGregorianYearMonthDayFormatter;
+(id)chineseMonthDayHanidayFormatter;
+(id)chineseCyclicYearMonthDayFormatter;
+(id)longDayMonthYearDateFormatterWithLocale:(id)arg1 ;
+(id)chineseRelatedGregorianYearMonthDayHanidayFormatter;
+(id)chineseLongStyleRelatedGregorianYearMonthDayFormatter;
+(id)shortDayMonthYearlessDateFormatterWithLocale:(id)arg1 ;
+(id)longDayMonthYearlessDateFormatterWithLocale:(id)arg1 ;
+(BOOL)shouldUseIslamicSpecificFormattersForLocale:(id)arg1 ;
+(id)dateFormatterWithYearFormat:(id)arg1 hasLongFormat:(BOOL)arg2 locale:(id)arg3 ;
-(id)stringForObjectValue:(id)arg1 ;
-(NSLocale *)locale;
-(void)setLocale:(NSLocale *)arg1 ;
-(id)init;
-(BOOL)getObjectValue:(id*)arg1 forString:(id)arg2 errorDescription:(id*)arg3 ;
-(id)stringFromDateComponents:(id)arg1 ;
-(id)dmyFormatString;
-(void)regenerateFormatterFutures;
-(unsigned long long)componentsToExtract;
-(id)dateFormatPlaceholderStringForLanguage:(id)arg1 ;
-(BOOL)shouldUseArabicGregorianPlaceholderStringForLanguage:(id)arg1 ;
-(id)arabicGregorianPlaceholderString;
-(BOOL)shouldUseArabicIslamicPlaceholderStringForLanguage:(id)arg1 ;
-(id)arabicIslamicPlaceholderString;
-(id)placeholderStringWithLocalizedDay:(id)arg1 month:(id)arg2 year:(id)arg3 ;
-(BOOL)shouldUseChinesePlaceholderString;
-(id)dateComponentsFromString:(id)arg1 ;
-(id)chinesePlaceholderStringWithDay:(id)arg1 month:(id)arg2 year:(id)arg3 ;
-(id)placeholderSubstitutionStringWithDay:(unsigned long long)arg1 month:(unsigned long long)arg2 year:(unsigned long long)arg3 ;
-(id)displayFormatterForComponents:(id)arg1 ;
-(id)normalizedComponentsFromDate:(id)arg1 calendar:(id)arg2 timeZone:(id)arg3 ;
-(id)dateFormatPlaceholderString;
@end

