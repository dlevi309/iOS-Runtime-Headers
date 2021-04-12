/*
* Generated on Thursday, January 14, 2021 at 2:27:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HAENotifications.framework/HAENotifications
*/

#import <libobjc.A.dylib/UNUserNotificationCenterDelegate.h>

@class UNUserNotificationCenter, NSString;

@interface NotificationCenter : NSObject <UNUserNotificationCenterDelegate> {

	UNUserNotificationCenter* _userNotificationCenter;
	NSString* _title;
	NSString* _subtitle;
	NSString* _body;
	BOOL _hasHealthApp;
	BOOL _hasHaptics;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_healthAppHidden;
-(id)init;
-(void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)sendNotificationWithExposureLevel:(double)arg1 duration:(double)arg2 eventType:(unsigned)arg3 volumeLoweringAction:(unsigned)arg4 ;
-(void)handleNotificationAction:(id)arg1 ;
@end

