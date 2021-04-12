/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsKit.framework/UserNotificationsKit
*/


@protocol NCNotificationAlertDestinationDelegate <NCNotificationDestinationDelegate>
@optional
-(void)destination:(id)arg1 willPresentNotificationRequest:(id)arg2 suppressAlerts:(BOOL)arg3;
-(void)destination:(id)arg1 didPresentNotificationRequest:(id)arg2;
-(void)destination:(id)arg1 willDismissNotificationRequest:(id)arg2;
-(void)destination:(id)arg1 didDismissNotificationRequest:(id)arg2;
-(void)destination:(id)arg1 willPresentNotificationRequest:(id)arg2;

@required
-(void)destinationDidBecomeReadyToReceiveNotifications:(id)arg1;
-(void)destination:(id)arg1 didBecomeReadyToReceiveNotificationsPassingTest:(/*^block*/id)arg2;
-(void)destination:(id)arg1 didBecomeReadyToReceiveNotificationsCoalescedWith:(id)arg2;

@end

