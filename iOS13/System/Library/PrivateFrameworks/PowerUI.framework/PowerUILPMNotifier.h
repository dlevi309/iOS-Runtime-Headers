/*
* Generated on Monday, March 1, 2021 at 2:33:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(id)autoDisabledNotificationRequest;
-(void)displayAutoDisabledNotification;
-(void)removeAutoDisabledNotification;
-(void)displayFirstUseNotification;
@end

