/*
* Generated on Thursday, January 14, 2021 at 2:25:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
*/


@protocol NCNotificationListViewDataSource <NSObject>
@optional
-(id)headerViewForNotificationList:(id)arg1;
-(void)recycleView:(id)arg1;
-(double)headerViewHeightForNotificationList:(id)arg1;
-(id)footerViewForNotificationList:(id)arg1;
-(double)footerViewHeightForNotificationList:(id)arg1;

@required
-(id)notificationListView:(id)arg1 viewForItemAtIndex:(unsigned long long)arg2;
-(double)notificationListView:(id)arg1 heightForItemAtIndex:(unsigned long long)arg2;
-(BOOL)notificationListViewIsGroup:(id)arg1;
-(unsigned long long)notificationListViewNumberOfItems:(id)arg1;

@end

