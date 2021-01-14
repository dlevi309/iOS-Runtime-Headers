/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HKCalendarDayCell.h>

@interface HKMonthDayCell : HKCalendarDayCell {

	long long _dayOfWeek;
	long long _circleState;

}

@property (nonatomic,readonly) long long circleState;              //@synthesize circleState=_circleState - In the implementation block
+(double)dayLabelFontSize;
-(void)setSelected:(BOOL)arg1 ;
-(void)dealloc;
-(id)initWithDateCache:(id)arg1 ;
-(void)updateWithDate:(id)arg1 dayOfMonth:(long long)arg2 ;
-(void)_updateFontAndCircle;
-(void)_setCircleState:(long long)arg1 ;
-(BOOL)_representsWeekendDay;
-(long long)circleState;
-(void)pressToTransition:(BOOL)arg1 ;
@end

