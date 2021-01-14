/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/UNUserNotificationCenterDelegateServiceProtocol.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject, NSString;

@interface UNUserNotificationCenterDelegateConnectionListener : NSObject <NSXPCListenerDelegate, UNUserNotificationCenterDelegateServiceProtocol> {

	NSMutableDictionary* _listenerByBundleIdentifier;
	NSMutableDictionary* _delegateByBundleIdentifier;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _callOutQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)didChangeSettings:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)didReceiveNotificationResponse:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(id)init;
-(void)didOpenApplicationForResponse:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)_queue_didOpenApplicationForResponse:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)_queue_didReceiveNotificationResponse:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)_queue_setDelegate:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)_queue_ensureListenerForBundleIdentifier:(id)arg1 ;
-(void)_queue_didChangeSettings:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)setDelegate:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)_queue_invalidateListenerForBundleIdentifier:(id)arg1 ;
@end

