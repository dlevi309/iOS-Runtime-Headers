/*
* Generated on Thursday, January 14, 2021 at 2:26:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TipsDaemon.framework/TipsDaemon
*/


@class UNUserNotificationCenter;

@interface TPSUserNotification : NSObject {

	UNUserNotificationCenter* _userNotificationCenter;

}
+(id)sharedInstance;
-(void)remove;
-(id)init;
-(void)removeAllDeliveredNotifications;
-(id)notificationSettings;
-(void)showNotificationForNotificationCache:(id)arg1 attachmentURL:(id)arg2 ;
@end

