/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HKCalendarDayCell.h>

@interface HKMonthDayCell : HKCalendarDayCell {

	long long _dayOfWeek;
	long long _circleState;

}

@property (nonatomic,readonly) long long circleState;              //@synthesize circleState=_circleState - In the implementation block
+(double)dayLabelFontSize;
-(void)dealloc;
-(void)setSelected:(BOOL)arg1 ;
-(id)initWithDateCache:(id)arg1 ;
-(void)updateWithDate:(id)arg1 dayOfMonth:(long long)arg2 ;
-(void)_updateFontAndCircle;
-(void)_setCircleState:(long long)arg1 ;
-(BOOL)_representsWeekendDay;
-(long long)circleState;
-(void)pressToTransition:(BOOL)arg1 ;
@end

