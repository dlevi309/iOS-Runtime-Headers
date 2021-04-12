/*
* Generated on Thursday, January 14, 2021 at 2:28:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/PKUserNotificationServerRemoteNotificationXPCServer.h>

@protocol OS_dispatch_queue;
@class NSObject, NSXPCListener, NSMutableDictionary, NSMapTable, UNSRemoteNotificationServer, NSString;

@interface UNSUserNotificationServerRemoteNotificationConnectionListener : NSObject <NSXPCListenerDelegate, PKUserNotificationServerRemoteNotificationXPCServer> {

	NSObject*<OS_dispatch_queue> _queue;
	NSXPCListener* _listener;
	NSMutableDictionary* _connectionsByBundleIdentifier;
	NSMapTable* _bundleIdentifiersByConnection;
	UNSRemoteNotificationServer* _remoteNotificationService;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_queue_addConnection:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)invalidateTokenForRemoteNotificationsForBundleIdentifier:(id)arg1 ;
-(void)didReceiveDeviceToken:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)_removeConnectionForAllBundleIdentifiers:(id)arg1 ;
-(BOOL)_allowsRemoteNotificationsForBundleIdentifier:(id)arg1 ;
-(void)_queue_didReceiveDeviceToken:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)_requestTokenForRemoteNotificationsForBundleIdentifier:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)requestTokenForRemoteNotificationsForBundleIdentifier:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)_currentConnection;
-(id)initWithRemoteNotificationService:(id)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)_invalidateTokenForRemoteNotificationsForBundleIdentifier:(id)arg1 ;
-(void)_queue_removeConnectionForAllBundleIdentifiers:(id)arg1 ;
-(void)getAllowsRemoteNotificationsForBundleIdentifier:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)_queue_observerConnectionsForBundleIdentifier:(id)arg1 ;
-(void)resume;
-(void)dealloc;
-(void)_queue_removeConnection:(id)arg1 forBundleIdentifier:(id)arg2 ;
@end

