/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/


@protocol CALNTimeToLeaveRefreshMonitor
@property (assign,nonatomic,__weak) id<CALNTimeToLeaveRefreshMonitorDelegate> delegate; 
@required
-(id<CALNTimeToLeaveRefreshMonitorDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)removeRefreshTimerForEventExternalURL:(id)arg1;
-(void)setUpRefreshTimerWithTriggerDate:(id)arg1 eventExternalURL:(id)arg2;

@end

