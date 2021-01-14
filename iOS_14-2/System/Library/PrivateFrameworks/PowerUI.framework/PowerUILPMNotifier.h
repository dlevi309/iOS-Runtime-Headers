/*
* Generated on Thursday, January 14, 2021 at 2:26:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PowerUI.framework/PowerUI
*/

#import <libobjc.A.dylib/UNUserNotificationCenterDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, UNUserNotificationCenter, NSBundle, NSString;

@interface PowerUILPMNotifier : NSObject <UNUserNotificationCenterDelegate> {

	NSObject*<OS_dispatch_queue> _firstUseQueue;
	UNUserNotificationCenter* _userNotificationCenter;
	NSBundle* _bundle;
	int _bsmToken;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)displayAutoDisabledNotification;
-(id)init;
-(void)displayFirstUseNotification;
-(void)removeAutoDisabledNotification;
-(id)autoDisabledNotificationRequest;
-(void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
@end

