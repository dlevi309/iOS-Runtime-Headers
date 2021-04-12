/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSFormatter.h>
#import <libobjc.A.dylib/NSObservable.h>
#import <libobjc.A.dylib/NSObserver.h>

@class NSMutableDictionary, NSString, NSLocale, NSTimeZone, NSCalendar, NSDate, NSArray;

@interface NSDateFormatter : NSFormatter <NSObservable, NSObserver> {

	NSMutableDictionary* _attributes;
	CFDateFormatterRef _formatter;
	unsigned long long _counter;
	long long _cacheGeneration;
	os_unfair_lock_s _lock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) long long formattingContext; 
@property (copy) NSString * dateFormat; 
@property (assign) unsigned long long dateStyle; 
@property (assign) unsigned long long timeStyle; 
@property (copy) NSLocale * locale; 
@property (assign) BOOL generatesCalendarDates; 
@property (assign) unsigned long long formatterBehavior; 
@property (copy) NSTimeZone * timeZone; 
@property (copy) NSCalendar * calendar; 
@property (getter=isLenient) BOOL lenient; 
@property (copy) NSDate * twoDigitStartDate; 
@property (copy) NSDate * defaultDate; 
@property (copy) NSArray * eraSymbols; 
@property (copy) NSArray * monthSymbols; 
@property (copy) NSArray * shortMonthSymbols; 
@property (copy) NSArray * weekdaySymbols; 
@property (copy) NSArray * shortWeekdaySymbols; 
@property (copy) NSString * AMSymbol; 
@property (copy) NSString * PMSymbol; 
@property (copy) NSArray * longEraSymbols; 
@property (copy) NSArray * veryShortMonthSymbols; 
@property (copy) NSArray * standaloneMonthSymbols; 
@property (copy) NSArray * shortStandaloneMonthSymbols; 
@property (copy) NSArray * veryShortStandaloneMonthSymbols; 
@property (copy) NSArray * veryShortWeekdaySymbols; 
@property (copy) NSArray * standaloneWeekdaySymbols; 
@property (copy) NSArray * shortStandaloneWeekdaySymbols; 
@property (copy) NSArray * veryShortStandaloneWeekdaySymbols; 
@property (copy) NSArray * quarterSymbols; 
@property (copy) NSArray * shortQuarterSymbols; 
@property (copy) NSArray * standaloneQuarterSymbols; 
@property (copy) NSArray * shortStandaloneQuarterSymbols; 
@property (copy) NSDate * gregorianStartDate; 
@property (assign) BOOL doesRelativeDateFormatting; 
+(void)initialize;
+(void)setDefaultFormatterBehavior:(unsigned long long)arg1 ;
+(unsigned long long)defaultFormatterBehavior;
+(id)localizedStringFromDate:(id)arg1 dateStyle:(unsigned long long)arg2 timeStyle:(unsigned long long)arg3 ;
+(id)dateFormatFromTemplate:(id)arg1 options:(unsigned long long)arg2 locale:(id)arg3 ;
+(id)_componentsFromFormatString:(id)arg1 ;
+(id)_formatStringFromComponents:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setLocale:(NSLocale *)arg1 ;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(NSCalendar *)calendar;
-(void)setCalendar:(NSCalendar *)arg1 ;
-(NSTimeZone *)timeZone;
-(NSLocale *)locale;
-(NSDate *)gregorianStartDate;
-(void)setGregorianStartDate:(NSDate *)arg1 ;
-(NSArray *)eraSymbols;
-(NSArray *)monthSymbols;
-(NSArray *)shortMonthSymbols;
-(NSArray *)weekdaySymbols;
-(NSArray *)shortWeekdaySymbols;
-(NSString *)AMSymbol;
-(NSString *)PMSymbol;
-(NSArray *)longEraSymbols;
-(NSArray *)veryShortMonthSymbols;
-(NSArray *)standaloneMonthSymbols;
-(NSArray *)shortStandaloneMonthSymbols;
-(NSArray *)veryShortStandaloneMonthSymbols;
-(NSArray *)veryShortWeekdaySymbols;
-(NSArray *)standaloneWeekdaySymbols;
-(NSArray *)shortStandaloneWeekdaySymbols;
-(NSArray *)veryShortStandaloneWeekdaySymbols;
-(NSArray *)quarterSymbols;
-(NSArray *)shortQuarterSymbols;
-(NSArray *)standaloneQuarterSymbols;
-(NSArray *)shortStandaloneQuarterSymbols;
-(void)setFormattingContext:(long long)arg1 ;
-(id)stringForObjectValue:(id)arg1 ;
-(long long)formattingContext;
-(void)receiveObservedValue:(id)arg1 ;
-(unsigned long long)dateStyle;
-(void)setDateStyle:(unsigned long long)arg1 ;
-(unsigned long long)timeStyle;
-(void)setTimeStyle:(unsigned long long)arg1 ;
-(BOOL)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3 ;
-(NSString *)dateFormat;
-(BOOL)getObjectValue:(out id*)arg1 forString:(id)arg2 range:(inout NSRange*)arg3 error:(out id*)arg4 ;
-(id)stringFromDate:(id)arg1 ;
-(id)dateFromString:(id)arg1 ;
-(BOOL)_mayDecorateAttributedStringForObjectValue:(id)arg1 ;
-(long long)_cacheGenerationCount;
-(BOOL)_tracksCacheGenerationCount;
-(void)_invalidateCache;
-(void)_clearFormatter;
-(void)_regenerateFormatter;
-(void)setFormatterBehavior:(unsigned long long)arg1 ;
-(void)_reset;
-(unsigned long long)formatterBehavior;
-(BOOL)isLenient;
-(void)setLenient:(BOOL)arg1 ;
-(BOOL)_usesCharacterDirection;
-(void)_setUsesCharacterDirection:(BOOL)arg1 ;
-(id)_timeZone_forOldMethods;
-(id)_locale_forOldMethods;
-(void)_regenerateFormatterIfAbsent;
-(id)_getLocaleAlreadyLocked:(BOOL)arg1 ;
-(void)_setDateFormat:(id)arg1 alreadyLocked:(BOOL)arg2 ;
-(void)setLocalizedDateFormatFromTemplate:(id)arg1 ;
-(BOOL)generatesCalendarDates;
-(void)setGeneratesCalendarDates:(BOOL)arg1 ;
-(void)setDateFormat:(NSString *)arg1 ;
-(id)_dateFormat;
-(void)_setDateFormat:(id)arg1 ;
-(void)_setIsLenient:(BOOL)arg1 ;
-(NSDate *)twoDigitStartDate;
-(void)setTwoDigitStartDate:(NSDate *)arg1 ;
-(NSDate *)defaultDate;
-(void)setDefaultDate:(NSDate *)arg1 ;
-(void)setEraSymbols:(NSArray *)arg1 ;
-(void)setMonthSymbols:(NSArray *)arg1 ;
-(void)setShortMonthSymbols:(NSArray *)arg1 ;
-(void)setWeekdaySymbols:(NSArray *)arg1 ;
-(void)setShortWeekdaySymbols:(NSArray *)arg1 ;
-(void)setAMSymbol:(NSString *)arg1 ;
-(void)setPMSymbol:(NSString *)arg1 ;
-(void)setLongEraSymbols:(NSArray *)arg1 ;
-(void)setVeryShortMonthSymbols:(NSArray *)arg1 ;
-(void)setStandaloneMonthSymbols:(NSArray *)arg1 ;
-(void)setShortStandaloneMonthSymbols:(NSArray *)arg1 ;
-(void)setVeryShortStandaloneMonthSymbols:(NSArray *)arg1 ;
-(void)setVeryShortWeekdaySymbols:(NSArray *)arg1 ;
-(void)setStandaloneWeekdaySymbols:(NSArray *)arg1 ;
-(void)setShortStandaloneWeekdaySymbols:(NSArray *)arg1 ;
-(void)setVeryShortStandaloneWeekdaySymbols:(NSArray *)arg1 ;
-(void)setQuarterSymbols:(NSArray *)arg1 ;
-(void)setShortQuarterSymbols:(NSArray *)arg1 ;
-(void)setStandaloneQuarterSymbols:(NSArray *)arg1 ;
-(void)setShortStandaloneQuarterSymbols:(NSArray *)arg1 ;
-(BOOL)doesRelativeDateFormatting;
-(void)setDoesRelativeDateFormatting:(BOOL)arg1 ;
-(id)_attributedStringWithFieldsFromDate:(id)arg1 ;
@end

