/*
* Generated on Thursday, January 14, 2021 at 2:26:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)didReceiveNotificationResponse:(id)arg1 ;
-(void)_configureUserNotificationCenter;
-(void)_addRequestForNotification:(id)arg1 codeType:(long long)arg2 ;
-(id)_userNotificationCenterForCodeType:(long long)arg1 ;
-(id)_notificationWithIdentifier:(id)arg1 ;
-(void)scheduleNotification:(id)arg1 codeType:(long long)arg2 ;
-(void)withdrawNotificationsWithProcessID:(int)arg1 codeType:(long long)arg2 ;
@end

