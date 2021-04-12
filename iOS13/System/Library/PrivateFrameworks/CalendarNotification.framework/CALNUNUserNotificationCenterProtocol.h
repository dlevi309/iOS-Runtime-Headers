/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/


@protocol CALNUNUserNotificationCenterProtocol <NSObject>
@property (assign,nonatomic,__weak) id<UNUserNotificationCenterDelegate> delegate; 
@required
-(id<UNUserNotificationCenterDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(id)notificationSettings;
-(void)setNotificationCategories:(id)arg1;
-(id)notificationCategories;
-(void)setWantsNotificationResponsesDelivered;
-(void)removeDeliveredNotificationsWithIdentifiers:(id)arg1;
-(id)deliveredNotifications;
-(void)removeAllDeliveredNotifications;
-(id)notificationSettingsForTopics;
-(BOOL)addNotificationRequest:(id)arg1 error:(id*)arg2;
-(BOOL)replaceContentForRequestWithIdentifier:(id)arg1 replacementContent:(id)arg2 error:(id*)arg3;

@end

