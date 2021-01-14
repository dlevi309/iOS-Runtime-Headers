/*
* Generated on Thursday, January 14, 2021 at 2:28:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)didChangeSettings:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)didReceiveNotificationResponse:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(id)init;
-(void)_queue_interruptedConnectionForBundleIdentifier:(id)arg1 ;
-(void)didOpenApplicationForResponse:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(id)_queue_ensureConnectionForBundleIdentifier:(id)arg1 ;
-(void)_queue_invalidatedConnectionForBundleIdentifier:(id)arg1 ;
@end

