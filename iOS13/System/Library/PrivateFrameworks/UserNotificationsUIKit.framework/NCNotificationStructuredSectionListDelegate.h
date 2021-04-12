/*
* Generated on Monday, March 1, 2021 at 2:33:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
*/


@protocol NCNotificationStructuredSectionListDelegate <NCNotificationListComponentDelegate>
@required
-(id)notificationStructuredSectionList:(id)arg1 requestsAuxiliaryOptionsContentProviderForNotificationRequest:(id)arg2 isLongLook:(BOOL)arg3;
-(BOOL)notificationStructuredSectionList:(id)arg1 shouldFilterNotificationRequest:(id)arg2;
-(void)notificationStructuredSectionList:(id)arg1 requestsScrollingToContentOffset:(double)arg2 withCompletion:(/*^block*/id)arg3;
-(BOOL)notificationStructuredSectionList:(id)arg1 shouldScrollToTopForGroupList:(id)arg2;

@end

