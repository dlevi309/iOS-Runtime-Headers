/*
* Generated on Monday, March 1, 2021 at 2:34:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
*/

#import <libobjc.A.dylib/UNUserNotificationCenterDelegateServiceProtocol.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSString;

@interface UNSDaemonLauncher : NSObject <UNUserNotificationCenterDelegateServiceProtocol> {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _callOutQueue;
	NSMutableDictionary* _connectionByBundleIdentifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)didReceiveNotificationResponse:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)didChangeSettings:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)didOpenApplicationForResponse:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(id)_queue_ensureConnectionForBundleIdentifier:(id)arg1 ;
-(void)_queue_interruptedConnectionForBundleIdentifier:(id)arg1 ;
-(void)_queue_invalidatedConnectionForBundleIdentifier:(id)arg1 ;
@end

