/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol NCNotificationDispatcherDelegate <NSObject>
@required
-(void)dispatcher:(id)arg1 requestPermissionToExecuteAction:(id)arg2 forDestination:(id)arg3 notificationRequest:(id)arg4 withParameters:(id)arg5 completionBlock:(/*^block*/id)arg6;
-(void)dispatcher:(id)arg1 didExecuteAction:(id)arg2 forNotificationRequest:(id)arg3;
-(void)dispatcher:(id)arg1 willExecuteAction:(id)arg2 forDestination:(id)arg3 notificationRequest:(id)arg4 requestAuthentication:(BOOL)arg5 withParameters:(id)arg6 completionBlock:(/*^block*/id)arg7;
-(void)dispatcher:(id)arg1 launchForegroundApplicationForAction:(id)arg2 notificationRequest:(id)arg3 fromDestination:(id)arg4 withParameters:(id)arg5;
-(void)dispatcher:(id)arg1 launchBackgroundApplicationForAction:(id)arg2 notificationRequest:(id)arg3 fromDestination:(id)arg4 withParameters:(id)arg5;

@end

