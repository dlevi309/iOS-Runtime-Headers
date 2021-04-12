/*
* Generated on Thursday, January 14, 2021 at 2:25:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

