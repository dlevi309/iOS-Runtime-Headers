/*
* Generated on Thursday, January 14, 2021 at 2:25:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
*/

#import <CalendarUIKit/CUIKDescriptionGenerator.h>

@protocol OS_dispatch_queue;
@class NSObject, NSDateFormatter, NSMutableDictionary;

@interface CUIKDateDescriptionGenerator : CUIKDescriptionGenerator {

	NSObject*<OS_dispatch_queue> _serialFormatterEditQueue;
	NSDateFormatter* _dayFormatter;
	NSDateFormatter* _abbrevDayFormatter;
	NSDateFormatter* _timeFormatter;
	NSDateFormatter* _standardTimeFormatter;
	NSDateFormatter* _customFormatter;
	NSDateFormatter* _fullStyleDateFormatter;
	NSDateFormatter* _dayOfWeekFormatter;
	NSMutableDictionary* _longFormatters;

}
+(id)_dateAfterTodayThisWeekFormatStringForDayOfWeek:(long long)arg1 generateLowercaseString:(BOOL)arg2 ;
+(id)_dateBeforeTodayThisWeekFormatStringForDayOfWeek:(long long)arg1 generateLowercaseString:(BOOL)arg2 ;
+(id)_dateAfterTodayNextWeekFormatStringForDayOfWeek:(long long)arg1 generateLowercaseString:(BOOL)arg2 ;
+(id)sharedGenerator;
+(id)_dateBeforeTodayLastWeekFormatStringForDayOfWeek:(long long)arg1 generateLowercaseString:(BOOL)arg2 ;
-(id)dateStringForDate:(id)arg1 relativeToReferenceDate:(id)arg2 allDay:(BOOL)arg3 standalone:(BOOL)arg4 shortFormat:(BOOL)arg5 ;
-(id)init;
-(id)dateStringForDate:(id)arg1 allDay:(BOOL)arg2 shortFormat:(BOOL)arg3 ;
-(id)dayOfWeekFormatter;
-(id)dayFormatter;
-(id)abbreviatedDayFormatter;
-(id)_dateFormatterWithLongFormat:(id)arg1 ;
-(id)timeStringForDate:(id)arg1 inTimeZone:(id)arg2 ;
-(id)_stringForDate:(id)arg1 relativeToReferenceDate:(id)arg2 withLongFormatString:(id)arg3 useAbbreviatedFormats:(BOOL)arg4 lowerCase:(BOOL)arg5 ;
-(id)timeFormatter;
-(id)formatterForLongFormat:(id)arg1 ;
-(id)fullStyleDateFormatter;
-(void)_initializeFormatters;
-(id)_timeStringForDate:(id)arg1 ;
-(id)stringForDate:(id)arg1 withLongFormatString:(id)arg2 useAbbreviatedFormats:(BOOL)arg3 lowerCase:(BOOL)arg4 ;
-(id)_customFormatter;
-(id)_dateStringForDate:(id)arg1 relativeToReferenceDate:(id)arg2 allDay:(BOOL)arg3 shortFormat:(BOOL)arg4 lowercase:(BOOL)arg5 ;
-(id)standardTimeFormatter;
-(id)dateStringForDate:(id)arg1 allDay:(BOOL)arg2 standalone:(BOOL)arg3 shortFormat:(BOOL)arg4 ;
@end

