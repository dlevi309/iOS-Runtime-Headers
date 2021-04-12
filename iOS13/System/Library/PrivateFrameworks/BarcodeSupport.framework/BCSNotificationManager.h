/*
* Generated on Monday, March 1, 2021 at 2:34:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport
*/

#import <libobjc.A.dylib/UNUserNotificationCenterDelegate.h>

@class UNUserNotificationCenter, NSMutableSet, NSString;

@interface BCSNotificationManager : NSObject <UNUserNotificationCenterDelegate> {

	UNUserNotificationCenter* _qrCodeUserNotificationCenter;
	UNUserNotificationCenter* _nfcUserNotificationCenter;
	NSMutableSet* _notifications;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
-(id)init;
-(void)invalidate;
-(void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)_configureUserNotificationCenter;
-(id)_userNotificationCenterForCodeType:(long long)arg1 ;
-(id)_notificationWithIdentifier:(id)arg1 ;
-(void)didReceiveNotificationResponse:(id)arg1 ;
-(void)scheduleNotification:(id)arg1 codeType:(long long)arg2 ;
-(void)withdrawNotificationsWithProcessID:(int)arg1 codeType:(long long)arg2 ;
@end

