/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsKit.framework/UserNotificationsKit
*/


@protocol NCNotificationAlertDestination <NCNotificationDestination>
@property (assign,nonatomic,__weak) id<NCNotificationAlertDestinationDelegate> delegate; 
@optional
-(void)prepareDestinationToReceiveCriticalNotificationRequest:(id)arg1;

@required
-(id<NCNotificationAlertDestinationDelegate>)delegate;
-(void)setDelegate:(id)arg1;

@end

