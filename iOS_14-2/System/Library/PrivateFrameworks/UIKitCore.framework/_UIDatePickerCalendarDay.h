/*
* Generated on Thursday, January 14, 2021 at 2:20:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIDatePickerCalendarDateComponent.h>

@class _UIDatePickerCalendarMonth;

@interface _UIDatePickerCalendarDay : _UIDatePickerCalendarDateComponent {

	_UIDatePickerCalendarMonth* _month;
	_UIDatePickerCalendarMonth* _assignedMonth;

}

@property (nonatomic,readonly) _UIDatePickerCalendarMonth * month;                      //@synthesize month=_month - In the implementation block
@property (nonatomic,readonly) _UIDatePickerCalendarMonth * assignedMonth;              //@synthesize assignedMonth=_assignedMonth - In the implementation block
@property (nonatomic,readonly) BOOL isToday; 
+(unsigned long long)representedCalendarUnits;
-(id)initWithDate:(id)arg1 calendar:(id)arg2 ;
-(_UIDatePickerCalendarMonth *)month;
-(BOOL)isToday;
-(id)initWithDate:(id)arg1 calendar:(id)arg2 month:(id)arg3 assignedMonth:(id)arg4 ;
-(id)description;
-(unsigned long long)hash;
-(id)copyWithAssignedMonth:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(_UIDatePickerCalendarMonth *)assignedMonth;
@end

