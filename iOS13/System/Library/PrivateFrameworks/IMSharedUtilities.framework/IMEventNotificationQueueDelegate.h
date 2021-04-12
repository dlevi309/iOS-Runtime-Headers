/*
* Generated on Monday, March 1, 2021 at 2:30:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
*/


@protocol IMEventNotificationQueueDelegate <NSObject>
@optional
-(void)eventNotificationQueue:(id)arg1 didChangeBusyState:(BOOL)arg2;
-(void)eventNotificationQueue:(id)arg1 didChangePausedState:(BOOL)arg2;
-(void)eventNotificationQueueWillSendNotifications:(id)arg1;
-(void)eventNotificationQueueDidSendNotifications:(id)arg1;

@end

