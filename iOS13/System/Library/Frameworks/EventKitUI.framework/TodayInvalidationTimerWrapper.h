/*
* Generated on Monday, March 1, 2021 at 2:31:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/


@class NSTimer;

@interface TodayInvalidationTimerWrapper : NSObject {

	NSTimer* _tzSupportDayRolloverTimer;

}
-(void)dealloc;
-(id)initWithCalendar:(id)arg1 ;
-(BOOL)todayChangedAfterInvalidation;
-(void)_setupTimeZoneTimerWithCalendar:(id)arg1 ;
-(void)_killTimeZoneTimer;
-(void)invalidateTodayAndNotifyIfChanged;
@end

