/*
* Generated on Monday, March 1, 2021 at 2:33:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
*/


@protocol NCNotificationCustomContentDelegate <NSObject>
@optional
-(void)customContentDidLoadExtension:(id)arg1;
-(void)customContentDidUpdateTitle:(id)arg1;
-(void)customContent:(id)arg1 didUpdateUserNotificationActions:(id)arg2;

@required
-(void)customContent:(id)arg1 requestPermissionToExecuteAction:(id)arg2 forNotification:(id)arg3 withUserInfo:(id)arg4 completionHandler:(/*^block*/id)arg5;
-(void)customContent:(id)arg1 forwardAction:(id)arg2 forNotification:(id)arg3 withUserInfo:(id)arg4;
-(void)customContentRequestsDefaultAction:(id)arg1;
-(void)customContentRequestsDismiss:(id)arg1;

@end

