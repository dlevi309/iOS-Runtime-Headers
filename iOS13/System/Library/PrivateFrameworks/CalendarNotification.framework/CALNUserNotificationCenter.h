/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/


@protocol CALNUserNotificationCenter <CalActivatable>
@property (assign,nonatomic,__weak) id<CALNUserNotificationCenterDelegate> delegate; 
@required
-(id<CALNUserNotificationCenterDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)setNotificationCategories:(id)arg1;
-(id)notificationCategories;
-(void)removeDeliveredNotificationsWithIdentifiers:(id)arg1;
-(id)deliveredNotifications;
-(void)removeAllDeliveredNotifications;
-(BOOL)addNotificationRequest:(id)arg1 error:(id*)arg2;
-(BOOL)replaceNotificationRequest:(id)arg1 error:(id*)arg2;
-(void)collectSettingsStats:(id)arg1;

@end

