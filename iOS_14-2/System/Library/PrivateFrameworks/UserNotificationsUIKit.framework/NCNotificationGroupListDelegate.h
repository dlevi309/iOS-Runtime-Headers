/*
* Generated on Thursday, January 14, 2021 at 2:25:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
*/


@protocol NCNotificationGroupListDelegate <NCNotificationListComponentDelegate>
@required
-(void)notificationGroupList:(id)arg1 requestsScrollToTopOfGroupWithCompletion:(/*^block*/id)arg2;
-(BOOL)notificationGroupListShouldScrollToTop:(id)arg1;
-(BOOL)isViewVisibleForNotificationGroupList:(id)arg1;
-(id)notificationGroupList:(id)arg1 requestsAuxiliaryOptionsContentProviderForNotificationRequest:(id)arg2 isLongLook:(BOOL)arg3;
-(void)notificationGroupListDidRemoveAllNotificationRequests:(id)arg1;
-(void)notificationGroupList:(id)arg1 didRemoveNotificationRequest:(id)arg2;

@end

