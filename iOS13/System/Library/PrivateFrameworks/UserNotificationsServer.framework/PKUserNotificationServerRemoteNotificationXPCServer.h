/*
* Generated on Monday, March 1, 2021 at 2:34:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
*/


@protocol PKUserNotificationServerRemoteNotificationXPCServer <NSObject>
@required
-(void)requestTokenForRemoteNotificationsForBundleIdentifier:(id)arg1 withCompletionHandler:(/*^block*/id)arg2;
-(void)invalidateTokenForRemoteNotificationsForBundleIdentifier:(id)arg1;
-(void)getAllowsRemoteNotificationsForBundleIdentifier:(id)arg1 withCompletionHandler:(/*^block*/id)arg2;

@end

