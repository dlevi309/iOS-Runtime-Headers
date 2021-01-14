/*
* Generated on Thursday, January 14, 2021 at 2:25:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
*/


@protocol NCNotificationStructuredSectionListDelegate <NCNotificationListComponentDelegate>
@required
-(id)notificationStructuredSectionList:(id)arg1 requestsAuxiliaryOptionsContentProviderForNotificationRequest:(id)arg2 isLongLook:(BOOL)arg3;
-(BOOL)notificationStructuredSectionList:(id)arg1 shouldScrollToTopForGroupList:(id)arg2;
-(BOOL)notificationStructuredSectionList:(id)arg1 shouldFilterNotificationRequest:(id)arg2;
-(void)notificationStructuredSectionList:(id)arg1 requestsScrollingToContentOffset:(double)arg2 withCompletion:(/*^block*/id)arg3;

@end

