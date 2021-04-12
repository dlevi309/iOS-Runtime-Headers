/*
* Generated on Monday, March 1, 2021 at 2:34:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)resume;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(id)_currentConnection;
-(void)didReceiveDeviceToken:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)_queue_didReceiveDeviceToken:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)requestTokenForRemoteNotificationsForBundleIdentifier:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)invalidateTokenForRemoteNotificationsForBundleIdentifier:(id)arg1 ;
-(void)getAllowsRemoteNotificationsForBundleIdentifier:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)initWithRemoteNotificationService:(id)arg1 ;
-(void)_removeConnectionForAllBundleIdentifiers:(id)arg1 ;
-(void)_queue_addConnection:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)_requestTokenForRemoteNotificationsForBundleIdentifier:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_invalidateTokenForRemoteNotificationsForBundleIdentifier:(id)arg1 ;
-(void)_queue_removeConnection:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(BOOL)_allowsRemoteNotificationsForBundleIdentifier:(id)arg1 ;
-(void)_queue_removeConnectionForAllBundleIdentifiers:(id)arg1 ;
-(id)_queue_observerConnectionsForBundleIdentifier:(id)arg1 ;
@end

