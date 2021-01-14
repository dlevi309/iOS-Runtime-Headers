/*
* Generated on Thursday, January 14, 2021 at 2:26:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/


@protocol CALNUserNotificationCenter <CalActivatable>
@property (assign,nonatomic,__weak) id<CALNUserNotificationCenterDelegate> delegate; 
@required
-(void)removeDeliveredNotificationsWithIdentifiers:(id)arg1;
-(id<CALNUserNotificationCenterDelegate>)delegate;
-(void)setNotificationCategories:(id)arg1;
-(void)setDelegate:(id)arg1;
-(BOOL)replaceNotificationRequest:(id)arg1 error:(id*)arg2;
-(id)notificationCategories;
-(BOOL)addNotificationRequest:(id)arg1 error:(id*)arg2;
-(void)removeAllDeliveredNotifications;
-(id)deliveredNotifications;
-(void)collectSettingsStats:(id)arg1;

@end

