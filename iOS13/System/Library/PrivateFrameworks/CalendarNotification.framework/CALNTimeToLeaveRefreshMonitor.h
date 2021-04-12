/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/


@protocol CALNTimeToLeaveRefreshMonitor
@property (assign,nonatomic,__weak) id<CALNTimeToLeaveRefreshMonitorDelegate> delegate; 
@required
-(id<CALNTimeToLeaveRefreshMonitorDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)setUpRefreshTimerWithTriggerDate:(id)arg1 eventExternalURL:(id)arg2;
-(void)removeRefreshTimerForEventExternalURL:(id)arg1;

@end

