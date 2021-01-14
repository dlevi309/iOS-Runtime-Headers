/*
* Generated on Thursday, January 14, 2021 at 2:27:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4 ;
-(void)connection:(id)arg1 didReceivePublicToken:(id)arg2 ;
-(void)addClientConnection:(id)arg1 forApplicationBundleIdentifier:(id)arg2 ;
-(id)init;
-(id)_pushConnectionWithEnvironmentName:(id)arg1 ;
-(void)updateTopicsForApplicationBundleIdentifier:(id)arg1 providerIdentifier:(id)arg2 requestToken:(BOOL)arg3 environment:(id)arg4 ;
-(void)start;
-(void)fileProviderRegister;
-(void)updateTopicsForBundleIdentifier:(id)arg1 ;
-(id)topicsForApplicationBundleIdentifier:(id)arg1 ;
-(id)_debugTopicsForApplicationIdentifier:(id)arg1 ;
-(id)clientConnectionsForApplicationBundleIdentifier:(id)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)providerDidEnterForeground:(id)arg1 ;
-(void)fileProviderUnregister;
-(void)updateTopicsForProvider:(id)arg1 ;
-(void)setMessageDelegate:(id)arg1 forApplicationBundleIdentifier:(id)arg2 ;
-(void)removeClientConnection:(id)arg1 forApplicationBundleIdentifier:(id)arg2 ;
-(void)providerDidEnterBackground:(id)arg1 ;
-(void)performWithConnection:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)initWithExtensionManager:(id)arg1 ;
@end

