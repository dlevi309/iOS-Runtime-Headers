/*
* Generated on Thursday, January 14, 2021 at 2:23:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/


@class NSTimer;

@interface TodayInvalidationTimerWrapper : NSObject {

	NSTimer* _tzSupportDayRolloverTimer;

}
-(void)invalidateTodayAndNotifyIfChanged;
-(void)_killTimeZoneTimer;
-(BOOL)todayChangedAfterInvalidation;
-(void)_setupTimeZoneTimerWithCalendar:(id)arg1 ;
-(id)initWithCalendar:(id)arg1 ;
-(void)dealloc;
@end

