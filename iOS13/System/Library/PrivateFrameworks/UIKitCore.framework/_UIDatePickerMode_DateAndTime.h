/*
* Generated on Monday, March 1, 2021 at 2:30:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIDatePickerMode.h>

@class NSString, NSDateFormatter;

@interface _UIDatePickerMode_DateAndTime : _UIDatePickerMode {

	BOOL _weekdayLast;
	double _wmdWeekMonthDayWidth;
	double _wmdHourWidth;
	double _wmdMinuteWidth;
	double _wmdAMPMWidth;
	double _wmdWeekdayWidth;
	NSString* _weekdayFormat;
	NSString* _monthDayFormat;
	NSString* _hourFormat;
	NSString* _minuteFormat;
	NSDateFormatter* _relativeFormatter;
	NSDateFormatter* _weekdayFormatter;

}
+(long long)datePickerMode;
+(unsigned long long)extractableCalendarUnits;
-(unsigned long long*)elements;
-(double)weekdayWidth;
-(void)noteCalendarChanged;
-(void)_shouldReset:(id)arg1 ;
-(void)resetComponentWidths;
-(id)dateFormatForCalendarUnit:(unsigned long long)arg1 ;
-(id)baseDateComponents;
-(double)widthForCalendarUnit:(unsigned long long)arg1 font:(id)arg2 maxWidth:(double)arg3 ;
-(id)localizedFormatString;
-(long long)numberOfRowsForCalendarUnit:(unsigned long long)arg1 ;
-(unsigned long long)nextUnitSmallerThanUnit:(unsigned long long)arg1 ;
-(unsigned long long)nextUnitLargerThanUnit:(unsigned long long)arg1 ;
-(id)dateForRow:(long long)arg1 inCalendarUnit:(unsigned long long)arg2 ;
-(long long)displayedCalendarUnits;
-(long long)rowForDate:(id)arg1 dateComponents:(id)arg2 component:(long long)arg3 currentRow:(long long)arg4 ;
-(id)titleForRow:(long long)arg1 inComponent:(long long)arg2 ;
-(BOOL)_shouldEnableValueForRow:(long long)arg1 inComponent:(long long)arg2 calendarUnit:(unsigned long long)arg3 ;
-(void)loadDate:(id)arg1 animated:(BOOL)arg2 ;
-(id)viewForRow:(long long)arg1 inComponent:(long long)arg2 reusingView:(id)arg3 ;
-(void)updateEnabledStateOfViewForRow:(long long)arg1 inComponent:(long long)arg2 ;
-(void)_resetBaseDateComponentsIfNecessaryFromDate:(id)arg1 ;
-(void)_takeBaseDateComponentsFromDate:(id)arg1 ;
-(id)weekdayFormatter;
-(double)componentWidthForDateTimeCalendarUnit:(unsigned long long)arg1 font:(id)arg2 maxWidth:(double)arg3 ;
-(id)_dateForWeekMonthDayRow:(long long)arg1 ;
-(BOOL)_shouldEnableWeekMonthDayForRow:(long long)arg1 ;
-(id)relativeFormatter;
-(BOOL)isWeekdayLast;
@end

