/*
* Generated on Monday, March 1, 2021 at 2:33:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
*/


@protocol NCNotificationMasterListDelegate <NCNotificationListComponentDelegate>
@required
-(BOOL)notificationMasterList:(id)arg1 shouldFilterNotificationRequest:(id)arg2;
-(BOOL)notificationMasterListShouldAllowNotificationHistoryReveal:(id)arg1;
-(void)notificationMasterListDidScrollToRevealNotificationHistory:(id)arg1;
-(void)notificationMasterList:(id)arg1 scrollViewWillBeginDragging:(id)arg2;
-(void)notificationMasterList:(id)arg1 scrollViewDidScroll:(id)arg2;
-(void)notificationMasterList:(id)arg1 scrollViewWillEndDragging:(id)arg2 withVelocity:(CGPoint)arg3 targetContentOffset:(inout CGPoint*)arg4;
-(BOOL)notificationMasterList:(id)arg1 shouldDelayDeliveryOfNotificationRequest:(id)arg2;
-(void)notificationMasterList:(id)arg1 requestsClearingFromIncomingSectionNotificationRequests:(id)arg2;

@end

