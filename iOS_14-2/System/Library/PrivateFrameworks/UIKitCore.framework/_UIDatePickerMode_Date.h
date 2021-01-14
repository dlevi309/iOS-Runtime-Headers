/*
* Generated on Thursday, January 14, 2021 at 2:20:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIDatePickerMode.h>

@class NSString;

@interface _UIDatePickerMode_Date : _UIDatePickerMode {

	double _dateYearWidth;
	double _dateMonthWidth;
	double _dateDayWidth;
	NSString* _yearFormat;
	NSString* _monthFormat;
	NSString* _dayFormat;

}
+(unsigned long long)extractableCalendarUnits;
+(long long)datePickerMode;
-(void)_shouldReset:(id)arg1 ;
-(void)noteCalendarChanged;
-(void)resetComponentWidths;
-(id)dateFormatForCalendarUnit:(unsigned long long)arg1 ;
-(double)widthForCalendarUnit:(unsigned long long)arg1 font:(id)arg2 maxWidth:(double)arg3 ;
-(id)localizedFormatString;
-(long long)numberOfRowsForCalendarUnit:(unsigned long long)arg1 ;
-(id)_dateForYearRow:(long long)arg1 ;
-(unsigned long long)nextUnitLargerThanUnit:(unsigned long long)arg1 ;
-(unsigned long long)nextUnitSmallerThanUnit:(unsigned long long)arg1 ;
-(long long)displayedCalendarUnits;
-(long long)rowForDate:(id)arg1 dateComponents:(id)arg2 component:(long long)arg3 currentRow:(long long)arg4 ;
-(BOOL)_shouldEnableValueForRow:(long long)arg1 inComponent:(long long)arg2 calendarUnit:(unsigned long long)arg3 ;
@end

