/*
* Generated on Thursday, January 14, 2021 at 2:28:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsKit.framework/UserNotificationsKit
*/


@protocol NCNotificationAlertDestination <NCNotificationDestination>
@property (assign,nonatomic,__weak) id<NCNotificationAlertDestinationDelegate> delegate; 
@property (getter=isAlertDestination,nonatomic,readonly) BOOL alertDestination; 
@optional
-(void)prepareDestinationToReceiveCriticalNotificationRequest:(id)arg1;

@required
-(BOOL)isAlertDestination;
-(id<NCNotificationAlertDestinationDelegate>)delegate;
-(void)setDelegate:(id)arg1;

@end

