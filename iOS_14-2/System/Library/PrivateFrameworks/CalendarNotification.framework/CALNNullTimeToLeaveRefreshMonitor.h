/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/

#import <libobjc.A.dylib/CALNTimeToLeaveRefreshMonitor.h>

@protocol CALNTimeToLeaveRefreshMonitorDelegate;
@interface CALNNullTimeToLeaveRefreshMonitor : NSObject <CALNTimeToLeaveRefreshMonitor> {

	id<CALNTimeToLeaveRefreshMonitorDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CALNTimeToLeaveRefreshMonitorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)sharedInstance;
-(id<CALNTimeToLeaveRefreshMonitorDelegate>)delegate;
-(void)setDelegate:(id<CALNTimeToLeaveRefreshMonitorDelegate>)arg1 ;
-(void)removeRefreshTimerForEventExternalURL:(id)arg1 ;
-(void)setUpRefreshTimerWithTriggerDate:(id)arg1 eventExternalURL:(id)arg2 ;
@end

