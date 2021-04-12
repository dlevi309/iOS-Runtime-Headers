/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)sharedGenerator;
+(id)_dateBeforeTodayLastWeekFormatStringForDayOfWeek:(long long)arg1 generateLowercaseString:(BOOL)arg2 ;
+(id)_dateBeforeTodayThisWeekFormatStringForDayOfWeek:(long long)arg1 generateLowercaseString:(BOOL)arg2 ;
+(id)_dateAfterTodayNextWeekFormatStringForDayOfWeek:(long long)arg1 generateLowercaseString:(BOOL)arg2 ;
+(id)_dateAfterTodayThisWeekFormatStringForDayOfWeek:(long long)arg1 generateLowercaseString:(BOOL)arg2 ;
-(id)init;
-(id)timeFormatter;
-(id)dateStringForDate:(id)arg1 allDay:(BOOL)arg2 standalone:(BOOL)arg3 shortFormat:(BOOL)arg4 ;
-(void)_invalidateFormatters;
-(id)timeStringForDate:(id)arg1 inTimeZone:(id)arg2 ;
-(id)dateStringForDate:(id)arg1 allDay:(BOOL)arg2 shortFormat:(BOOL)arg3 ;
-(id)_customFormatter;
-(id)standardTimeFormatter;
-(id)stringForDate:(id)arg1 withLongFormatString:(id)arg2 useAbbreviatedFormats:(BOOL)arg3 lowerCase:(BOOL)arg4 ;
-(id)dayFormatter;
-(void)_initializeFormatters;
-(id)_dateFormatterWithLongFormat:(id)arg1 ;
-(id)_stringForDate:(id)arg1 relativeToReferenceDate:(id)arg2 withLongFormatString:(id)arg3 useAbbreviatedFormats:(BOOL)arg4 lowerCase:(BOOL)arg5 ;
-(id)abbreviatedDayFormatter;
-(id)formatterForLongFormat:(id)arg1 ;
-(id)fullStyleDateFormatter;
-(id)_timeStringForDate:(id)arg1 ;
-(id)dateStringForDate:(id)arg1 relativeToReferenceDate:(id)arg2 allDay:(BOOL)arg3 standalone:(BOOL)arg4 shortFormat:(BOOL)arg5 ;
-(id)_dateStringForDate:(id)arg1 relativeToReferenceDate:(id)arg2 allDay:(BOOL)arg3 shortFormat:(BOOL)arg4 lowercase:(BOOL)arg5 ;
-(id)dayOfWeekFormatter;
@end

