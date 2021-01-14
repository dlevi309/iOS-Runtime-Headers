/*
* Generated on Thursday, January 14, 2021 at 2:24:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/


@protocol HKCalendarScrollViewControllerDelegate <NSObject>
@optional
-(void)calendarScrollViewController:(id)arg1 accessoryViewForDate:(id)arg2 accessoryViewCompletion:(/*^block*/id)arg3;

@required
-(void)calendarScrollViewController:(id)arg1 didSelectDate:(id)arg2;
-(void)calendarScrollViewController:(id)arg1 didUpdateCenteredMonth:(id)arg2;

@end

