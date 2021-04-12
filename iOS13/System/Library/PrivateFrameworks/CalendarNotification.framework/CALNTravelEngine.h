/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/


@protocol CALNTravelEngine <NSObject>
@property (assign,nonatomic,__weak) id<CALNTravelEngineDelegate> delegate; 
@required
-(id<CALNTravelEngineDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)sendFeedbackForPostingLeaveByNotificationForEventWithExternalURL:(id)arg1;
-(void)sendFeedbackForPostingLeaveNowNotificationForEventWithExternalURL:(id)arg1;
-(void)cancelHypothesisRefreshRequestForEventWithExternalURL:(id)arg1;
-(void)requestHypothesisRefreshAtDate:(id)arg1 forEventWithExternalURL:(id)arg2;
-(void)ceaseMonitoringForEventWithExternalURL:(id)arg1;

@end

