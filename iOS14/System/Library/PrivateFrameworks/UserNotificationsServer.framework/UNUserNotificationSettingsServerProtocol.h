/*
* Generated on Thursday, January 14, 2021 at 2:28:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
*/


@protocol UNUserNotificationSettingsServerProtocol <NSObject>
@required
-(void)replaceNotificationSettings:(id)arg1 forNotificationSourceIdentifier:(id)arg2;
-(void)replaceNotificationTopicSettings:(id)arg1 forNotificationSourceIdentifier:(id)arg2 topicIdentifier:(id)arg3;
-(void)getAllNotificationSourcesWithCompletionHandler:(/*^block*/id)arg1;
-(void)getNotificationSystemSettingsWithCompletionHandler:(/*^block*/id)arg1;
-(void)getNotificationSources:(id)arg1 withCompletionHandler:(/*^block*/id)arg2;
-(void)getNotificationSource:(id)arg1 withCompletionHandler:(/*^block*/id)arg2;
-(void)setNotificationSystemSettings:(id)arg1;

@end

