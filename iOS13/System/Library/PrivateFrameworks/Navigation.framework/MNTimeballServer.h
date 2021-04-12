/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol OS_dispatch_queue;
@class NSXPCListener, NSObject, MNTimeballCache, MNRouteRefreshPolicyScheduler, MNTimeballRoutingProvider, MNTimeballLocationManager, NSLock, NSMutableSet, NSString;

@interface MNTimeballServer : NSObject <NSXPCListenerDelegate> {

	NSXPCListener* _listener;
	NSObject*<OS_dispatch_queue> _xpcQueue;
	MNTimeballCache* _cache;
	MNRouteRefreshPolicyScheduler* _scheduler;
	MNTimeballRoutingProvider* _routingProvider;
	MNTimeballLocationManager* _locationManager;
	NSLock* _proxyLock;
	NSMutableSet* _proxies;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultServer;
-(id)init;
-(void)dealloc;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(id)_cache;
-(id)_scheduler;
-(id)_routingProvider;
-(id)_navd_localProxyForClient:(id)arg1 ;
-(void)_navd_addProxy:(id)arg1 ;
-(void)_navd_removeProxy:(id)arg1 ;
-(id)_localProxyForPeer:(id)arg1 ;
-(void)_peerDidConnectWithProxy:(id)arg1 ;
-(void)_peerDidDisconnectWithProxy:(id)arg1 ;
@end

