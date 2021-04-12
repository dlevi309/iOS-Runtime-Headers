/*
* Generated on Monday, March 1, 2021 at 2:34:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
*/


@protocol UNUserNotificationSettingsServerProtocol <NSObject>
@required
-(void)replaceNotificationSettings:(id)arg1 forNotificationSourceIdentifier:(id)arg2;
-(void)replaceNotificationTopicSettings:(id)arg1 forNotificationSourceIdentifier:(id)arg2 topicIdentifier:(id)arg3;
-(void)setNotificationSystemSettings:(id)arg1;
-(void)getNotificationSource:(id)arg1 withCompletionHandler:(/*^block*/id)arg2;
-(void)getNotificationSources:(id)arg1 withCompletionHandler:(/*^block*/id)arg2;
-(void)getAllNotificationSourcesWithCompletionHandler:(/*^block*/id)arg1;
-(void)getNotificationSystemSettingsWithCompletionHandler:(/*^block*/id)arg1;

@end

