/*
* Generated on Thursday, January 14, 2021 at 2:22:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
*/


@protocol IMEventNotificationQueueDelegate <NSObject>
@optional
-(void)eventNotificationQueue:(id)arg1 didChangeBusyState:(BOOL)arg2;
-(void)eventNotificationQueue:(id)arg1 didChangePausedState:(BOOL)arg2;
-(void)eventNotificationQueueWillSendNotifications:(id)arg1;
-(void)eventNotificationQueueDidSendNotifications:(id)arg1;

@end

