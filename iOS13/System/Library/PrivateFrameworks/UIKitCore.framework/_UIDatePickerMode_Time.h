/*
* Generated on Monday, March 1, 2021 at 2:30:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIDatePickerMode.h>

@class NSString;

@interface _UIDatePickerMode_Time : _UIDatePickerMode {

	double _timeHourWidth;
	double _timeMinuteWidth;
	double _timeAMPMWidth;
	NSString* _hourFormat;
	NSString* _minuteFormat;

}
+(long long)datePickerMode;
+(unsigned long long)extractableCalendarUnits;
-(id)font;
-(double)rowHeight;
-(void)noteCalendarChanged;
-(void)_shouldReset:(id)arg1 ;
-(void)resetComponentWidths;
-(id)dateFormatForCalendarUnit:(unsigned long long)arg1 ;
-(double)widthForCalendarUnit:(unsigned long long)arg1 font:(id)arg2 maxWidth:(double)arg3 ;
-(id)localizedFormatString;
-(long long)numberOfRowsForCalendarUnit:(unsigned long long)arg1 ;
-(unsigned long long)nextUnitSmallerThanUnit:(unsigned long long)arg1 ;
-(unsigned long long)nextUnitLargerThanUnit:(unsigned long long)arg1 ;
-(long long)displayedCalendarUnits;
-(BOOL)_shouldEnableValueForRow:(long long)arg1 inComponent:(long long)arg2 calendarUnit:(unsigned long long)arg3 ;
@end

