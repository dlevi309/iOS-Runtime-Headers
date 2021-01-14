/*
* Generated on Thursday, January 14, 2021 at 2:20:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIDatePickerCalendarDateComponent.h>

@interface _UIDatePickerCalendarMonth : _UIDatePickerCalendarDateComponent {

	_UIDatePickerCalendarMonth* _previousMonth;
	_UIDatePickerCalendarMonth* _nextMonth;

}

@property (nonatomic,readonly) _UIDatePickerCalendarMonth * previousMonth; 
@property (nonatomic,readonly) _UIDatePickerCalendarMonth * nextMonth; 
+(unsigned long long)representedCalendarUnits;
-(_UIDatePickerCalendarMonth *)nextMonth;
-(id)_monthWithOffset:(long long)arg1 ;
-(id)dayWithDate:(id)arg1 assignedMonth:(id)arg2 ;
-(_UIDatePickerCalendarMonth *)previousMonth;
-(id)dayMatchingOrdinalDay:(id)arg1 ;
@end

