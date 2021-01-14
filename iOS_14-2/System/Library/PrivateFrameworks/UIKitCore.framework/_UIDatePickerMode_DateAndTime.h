/*
* Generated on Thursday, January 14, 2021 at 2:20:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(unsigned long long)extractableCalendarUnits;
+(long long)datePickerMode;
-(unsigned long long*)elements;
-(double)weekdayWidth;
-(void)_shouldReset:(id)arg1 ;
-(void)noteCalendarChanged;
-(void)resetComponentWidths;
-(id)baseDateComponents;
-(id)dateFormatForCalendarUnit:(unsigned long long)arg1 ;
-(double)widthForCalendarUnit:(unsigned long long)arg1 font:(id)arg2 maxWidth:(double)arg3 ;
-(id)localizedFormatString;
-(long long)numberOfRowsForCalendarUnit:(unsigned long long)arg1 ;
-(unsigned long long)nextUnitLargerThanUnit:(unsigned long long)arg1 ;
-(unsigned long long)nextUnitSmallerThanUnit:(unsigned long long)arg1 ;
-(id)dateForRow:(long long)arg1 inCalendarUnit:(unsigned long long)arg2 ;
-(long long)displayedCalendarUnits;
-(long long)rowForDate:(id)arg1 dateComponents:(id)arg2 component:(long long)arg3 currentRow:(long long)arg4 ;
-(id)titleForRow:(long long)arg1 inComponent:(long long)arg2 ;
-(BOOL)_shouldEnableValueForRow:(long long)arg1 inComponent:(long long)arg2 calendarUnit:(unsigned long long)arg3 ;
-(void)loadDate:(id)arg1 animated:(BOOL)arg2 ;
-(id)viewForRow:(long long)arg1 inComponent:(long long)arg2 reusingView:(id)arg3 ;
-(void)updateEnabledStateOfViewForRow:(long long)arg1 inComponent:(long long)arg2 ;
-(void)_takeBaseDateComponentsFromDate:(id)arg1 ;
-(void)_resetBaseDateComponentsIfNecessaryFromDate:(id)arg1 ;
-(id)weekdayFormatter;
-(double)componentWidthForDateTimeCalendarUnit:(unsigned long long)arg1 font:(id)arg2 maxWidth:(double)arg3 ;
-(BOOL)isWeekdayLast;
-(id)_dateForWeekMonthDayRow:(long long)arg1 ;
-(BOOL)_shouldEnableWeekMonthDayForRow:(long long)arg1 ;
-(id)relativeFormatter;
@end

