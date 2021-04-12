/*
* Generated on Monday, March 1, 2021 at 2:33:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
*/


@protocol NCNotificationGroupListDelegate <NCNotificationListComponentDelegate>
@required
-(void)notificationGroupListDidRemoveAllNotificationRequests:(id)arg1;
-(void)notificationGroupList:(id)arg1 didRemoveNotificationRequest:(id)arg2;
-(id)notificationGroupList:(id)arg1 requestsAuxiliaryOptionsContentProviderForNotificationRequest:(id)arg2 isLongLook:(BOOL)arg3;
-(void)notificationGroupList:(id)arg1 requestsScrollToTopOfGroupWithCompletion:(/*^block*/id)arg2;
-(BOOL)notificationGroupListShouldScrollToTop:(id)arg1;
-(BOOL)isViewVisibleForNotificationGroupList:(id)arg1;

@end

