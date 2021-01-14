/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@class NSLocale, NSCalendar, NSDate, NSString, NSDateFormatter;

@interface PXFeedDateFormatter : NSObject {

	BOOL _prepared;
	NSLocale* _locale;
	BOOL _ignoreWhitelist;
	NSCalendar* _calendar;
	NSDate* _today;
	NSDate* _yesterday;
	NSString* _todayString;
	NSString* _yesterdayString;
	NSDateFormatter* _dateFormatterForCurrentYear;
	NSDateFormatter* _dateFormatterForNoncurrentYears;

}
+(id)defaultFeedSectionDateFormatter;
-(BOOL)isDateInToday:(id)arg1 ;
-(void)_invalidate;
-(id)init;
-(void)_prepare;
-(void)_currentLocaleChanged:(id)arg1 ;
-(id)stringFromDate:(id)arg1 ;
-(void)dealloc;
-(id)initWithLocale:(id)arg1 ignoreWhitelist:(BOOL)arg2 ;
-(BOOL)isDateInFuture:(id)arg1 ;
-(id)_completeRelativeStringForDate:(id)arg1 dateFormatter:(id)arg2 ;
-(BOOL)_canSubstitueDateStringsWithLocale:(id)arg1 ;
-(void)_calendarDayChanged:(id)arg1 ;
@end

