/*
* Generated on Thursday, January 14, 2021 at 2:28:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsKit.framework/UserNotificationsKit
*/


@protocol NCNotificationAlertDestinationDelegate <NCNotificationDestinationDelegate>
@optional
-(void)destination:(id)arg1 didDismissNotificationRequest:(id)arg2;
-(void)destination:(id)arg1 willPresentNotificationRequest:(id)arg2 suppressAlerts:(BOOL)arg3;
-(void)destination:(id)arg1 didPresentNotificationRequest:(id)arg2;
-(void)destination:(id)arg1 willPresentNotificationRequest:(id)arg2;
-(void)destination:(id)arg1 willDismissNotificationRequest:(id)arg2;

@required
-(void)destination:(id)arg1 didBecomeReadyToReceiveNotificationsPassingTest:(/*^block*/id)arg2;
-(void)destination:(id)arg1 didBecomeReadyToReceiveNotificationsCoalescedWith:(id)arg2;
-(void)destinationDidBecomeReadyToReceiveNotifications:(id)arg1;

@end

