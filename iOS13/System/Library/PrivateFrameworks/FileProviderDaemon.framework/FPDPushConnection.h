/*
* Generated on Monday, March 1, 2021 at 2:34:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/PKFileProviderXPCServer.h>
#import <libobjc.A.dylib/APSConnectionDelegate.h>
#import <libobjc.A.dylib/FPProviderObserver.h>

@protocol OS_dispatch_queue;
@class FPDExtensionManager, NSXPCListener, NSObject, NSMutableDictionary, FPProviderMonitor, NSString;

@interface FPDPushConnection : NSObject <NSXPCListenerDelegate, PKFileProviderXPCServer, APSConnectionDelegate, FPProviderObserver> {

	FPDExtensionManager* _manager;
	NSXPCListener* _xpcListener;
	NSObject*<OS_dispatch_queue> _pushQueue;
	NSObject*<OS_dispatch_queue> _payloadDeliveryQueue;
	NSMutableDictionary* _pushConnectionsByEnvironment;
	NSMutableDictionary* _messageDelegates;
	NSMutableDictionary* _bundleIdentifierForTopic;
	NSMutableDictionary* _topicsForBundleIdentifier;
	NSMutableDictionary* _clientConnections;
	FPProviderMonitor* _providerMonitor;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)start;
-(void)connection:(id)arg1 didReceivePublicToken:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4 ;
-(void)fileProviderRegister;
-(void)fileProviderUnregister;
-(void)providerDidEnterForeground:(id)arg1 ;
-(void)providerDidEnterBackground:(id)arg1 ;
-(id)initWithExtensionManager:(id)arg1 ;
-(id)_debugTopicsForApplicationIdentifier:(id)arg1 ;
-(void)setMessageDelegate:(id)arg1 forApplicationBundleIdentifier:(id)arg2 ;
-(void)updateTopicsForBundleIdentifier:(id)arg1 ;
-(id)clientConnectionsForApplicationBundleIdentifier:(id)arg1 ;
-(void)addClientConnection:(id)arg1 forApplicationBundleIdentifier:(id)arg2 ;
-(void)updateTopicsForApplicationBundleIdentifier:(id)arg1 providerIdentifier:(id)arg2 requestToken:(BOOL)arg3 environment:(id)arg4 ;
-(void)performWithConnection:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)removeClientConnection:(id)arg1 forApplicationBundleIdentifier:(id)arg2 ;
-(id)_pushConnectionWithEnvironmentName:(id)arg1 ;
-(id)topicsForApplicationBundleIdentifier:(id)arg1 ;
-(void)updateTopicsForProvider:(id)arg1 ;
@end

