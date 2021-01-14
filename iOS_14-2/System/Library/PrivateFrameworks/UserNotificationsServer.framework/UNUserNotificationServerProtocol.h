/*
* Generated on Thursday, January 14, 2021 at 2:28:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
*/


@protocol UNUserNotificationServerProtocol <NSObject>
@optional
-(void)requestRemoveAuthorizationForBundleIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)getClearedInfoForDataProviderMigrationWithBundleIdentifier:(id)arg1 withCompletionHandler:(/*^block*/id)arg2;

@required
-(void)getNotificationSettingsForBundleIdentifier:(id)arg1 withCompletionHandler:(/*^block*/id)arg2;
-(void)setBadgeNumber:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(/*^block*/id)arg3;
-(void)removeAllPendingNotificationRequestsForBundleIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)getDeliveredNotificationsForBundleIdentifier:(id)arg1 withCompletionHandler:(/*^block*/id)arg2;
-(void)removePendingNotificationRequestsWithIdentifiers:(id)arg1 forBundleIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)getPendingNotificationRequestsForBundleIdentifier:(id)arg1 withCompletionHandler:(/*^block*/id)arg2;
-(void)setBadgeString:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(/*^block*/id)arg3;
-(void)removeSimilarNotificationRequests:(id)arg1 forBundleIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)getNotificationCategoriesForBundleIdentifier:(id)arg1 withCompletionHandler:(/*^block*/id)arg2;
-(void)setObservingUserNotifications:(BOOL)arg1 forBundleIdentifier:(id)arg2;
-(void)setNotificationRequests:(id)arg1 forBundleIdentifier:(id)arg2;
-(void)getNotificationTopicsForBundleIdentifier:(id)arg1 withCompletionHandler:(/*^block*/id)arg2;
-(void)addNotificationRequest:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(/*^block*/id)arg3;
-(void)removeDeliveredNotificationsWithIdentifiers:(id)arg1 forBundleIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)getNotificationSettingsForTopicsWithBundleIdentifier:(id)arg1 withCompletionHandler:(/*^block*/id)arg2;
-(void)requestAuthorizationWithOptions:(unsigned long long)arg1 forBundleIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)replaceContentForRequestWithIdentifier:(id)arg1 bundleIdentifier:(id)arg2 replacementContent:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)removeAllDeliveredNotificationsForBundleIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)getBadgeNumberForBundleIdentifier:(id)arg1 withCompletionHandler:(/*^block*/id)arg2;
-(void)setNotificationTopics:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(/*^block*/id)arg3;
-(void)setNotificationCategories:(id)arg1 forBundleIdentifier:(id)arg2;

@end

