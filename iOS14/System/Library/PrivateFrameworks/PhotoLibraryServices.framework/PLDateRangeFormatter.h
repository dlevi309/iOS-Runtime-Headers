/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSLocale, NSTimeZone, NSDateFormatter;

@interface PLDateRangeFormatter : NSObject {

	os_unfair_lock_s _lock;
	long long _preset;
	NSLocale* _locale;
	BOOL _useLocalDates;
	NSTimeZone* _timeZone;
	BOOL _includeDayNumbers;
	BOOL _includeDayNumbersWhenMonthsDiffer;
	BOOL _useRelativeDayFormatting;
	BOOL _useShortMonths;
	BOOL _useShortDaysInRanges;
	BOOL _useTime;
	BOOL _yearOnly;
	BOOL _monthOnly;
	BOOL _timeOnly;
	BOOL _omitYear;
	BOOL _monthWithDelimiterAndYear;
	NSDateFormatter* _sameDayDateFormatter;
	NSDateFormatter* _sameDayNoYearDateFormatter;
	NSDateFormatter* _dayOfTheWeekDateFormatter;
	NSDateFormatter* _yearDateFormatter;
	NSDateFormatter* _monthDateFormatter;
	NSDateFormatter* _monthYearDateFormatter;
	NSDateFormatter* _relativeDateFormatter;
	UDateIntervalFormatRef _monthDayIntervalFormat;
	UDateIntervalFormatRef _monthDayNoYearIntervalFormat;
	UDateIntervalFormatRef _differentMonthDayIntervalFormat;
	UDateIntervalFormatRef _differentMonthDayNoYearIntervalFormat;
	UDateIntervalFormatRef _dayOfTheWeekIntervalFormat;
	UDateIntervalFormatRef _timeIntervalFormat;
	UDateIntervalFormatRef _monthIntervalFormat;
	UDateIntervalFormatRef _monthYearIntervalFormat;
	UDateIntervalFormatRef _yearIntervalFormat;

}

@property (assign,nonatomic) long long preset; 
@property (nonatomic,retain) NSLocale * locale; 
@property (assign,nonatomic) BOOL useLocalDates; 
+(id)autoupdatingFormatterWithPreset:(long long)arg1 ;
-(NSLocale *)locale;
-(void)_currentLocaleDidChange:(id)arg1 ;
-(void)setLocale:(NSLocale *)arg1 ;
-(id)init;
-(void)_handlePresetDidChange;
-(UDateIntervalFormatRef)_yearIntervalFormat;
-(void)_significantTimeChange:(id)arg1 ;
-(void)_systemTimeZoneDidChange:(id)arg1 ;
-(id)localTimeZone;
-(void)_resetFormatters;
-(UDateIntervalFormatRef)_monthDayNoYearIntervalFormat;
-(id)_sameMonthTemplate;
-(id)_stringFromDate:(id)arg1 toDate:(id)arg2 currentDate:(id)arg3 ;
-(UDateIntervalFormatRef)_differentMonthDayIntervalFormat;
-(id)_dayDifferentMonthsTemplate;
-(void)setPreset:(long long)arg1 ;
-(id)_relativeDateFormatter;
-(UDateIntervalFormatRef)_monthIntervalFormat;
-(id)_yearDateFormatter;
-(UDateIntervalFormatRef)_dayOfTheWeekIntervalFormat;
-(id)_monthDateFormatter;
-(id)_sameDayNoYearDateFormatter;
-(BOOL)useLocalDates;
-(void)setUseLocalDates:(BOOL)arg1 ;
-(id)_sameDayDateFormatter;
-(long long)preset;
-(id)stringFromDate:(id)arg1 toDate:(id)arg2 currentDate:(id)arg3 ;
-(id)initWithPreset:(long long)arg1 ;
-(id)stringFromDate:(id)arg1 ;
-(id)stringFromDate:(id)arg1 toDate:(id)arg2 ;
-(id)_monthYearDateFormatter;
-(id)_dayTemplate;
-(UDateIntervalFormatRef)_timeIntervalFormat;
-(id)_dayOfTheWeekDateFormatter;
-(UDateIntervalFormatRef)_monthDayIntervalFormat;
-(void)dealloc;
-(UDateIntervalFormatRef)_monthYearIntervalFormat;
-(void)_handleUseLocalDatesDidChange;
-(UDateIntervalFormatRef)_differentMonthDayNoYearIntervalFormat;
@end

