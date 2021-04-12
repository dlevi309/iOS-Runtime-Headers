/*
* Generated on Thursday, January 14, 2021 at 2:26:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/


@protocol CALNUNUserNotificationCenterProtocol <NSObject>
@property (assign,nonatomic,__weak) id<UNUserNotificationCenterDelegate> delegate; 
@required
-(void)removeDeliveredNotificationsWithIdentifiers:(id)arg1;
-(id<UNUserNotificationCenterDelegate>)delegate;
-(void)setNotificationCategories:(id)arg1;
-(id)notificationSettingsForTopics;
-(void)setDelegate:(id)arg1;
-(id)notificationCategories;
-(BOOL)addNotificationRequest:(id)arg1 error:(id*)arg2;
-(void)removeAllDeliveredNotifications;
-(void)setWantsNotificationResponsesDelivered;
-(BOOL)replaceContentForRequestWithIdentifier:(id)arg1 replacementContent:(id)arg2 error:(id*)arg3;
-(id)notificationSettings;
-(id)deliveredNotifications;

@end

