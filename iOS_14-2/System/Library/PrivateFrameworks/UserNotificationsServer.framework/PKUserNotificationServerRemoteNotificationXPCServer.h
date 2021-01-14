/*
* Generated on Thursday, January 14, 2021 at 2:28:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
*/


@protocol PKUserNotificationServerRemoteNotificationXPCServer <NSObject>
@required
-(void)invalidateTokenForRemoteNotificationsForBundleIdentifier:(id)arg1;
-(void)requestTokenForRemoteNotificationsForBundleIdentifier:(id)arg1 withCompletionHandler:(/*^block*/id)arg2;
-(void)getAllowsRemoteNotificationsForBundleIdentifier:(id)arg1 withCompletionHandler:(/*^block*/id)arg2;

@end

