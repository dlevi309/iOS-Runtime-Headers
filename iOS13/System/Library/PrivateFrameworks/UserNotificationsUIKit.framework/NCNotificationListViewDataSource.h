/*
* Generated on Monday, March 1, 2021 at 2:33:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
*/


@protocol NCNotificationListViewDataSource <NSObject>
@optional
-(void)recycleView:(id)arg1;
-(id)headerViewForNotificationList:(id)arg1;
-(id)footerViewForNotificationList:(id)arg1;
-(double)headerViewHeightForNotificationList:(id)arg1;
-(double)footerViewHeightForNotificationList:(id)arg1;

@required
-(double)notificationListView:(id)arg1 heightForItemAtIndex:(unsigned long long)arg2;
-(id)notificationListView:(id)arg1 viewForItemAtIndex:(unsigned long long)arg2;
-(unsigned long long)notificationListViewNumberOfItems:(id)arg1;
-(BOOL)notificationListViewIsGroup:(id)arg1;

@end

