/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <libobjc.A.dylib/NEAgentSessionDelegate.h>
#import <libobjc.A.dylib/NEExtensionProviderHostDelegate.h>
#import <libobjc.A.dylib/NEPluginDriver.h>

@protocol NEPluginManagerObjectFactory, OS_dispatch_queue, OS_dispatch_source;
@class NSArray, NSXPCInterface, NEExtensionProviderHostContext, NSObject, NSString, NSUUID, NSExtension;

@interface NEAgentExtension : NSObject <NEAgentSessionDelegate, NEExtensionProviderHostDelegate, NEPluginDriver> {

	BOOL _appsUpdateStarted;
	BOOL _appsUpdateEnding;
	BOOL _isAppExtensionHost;
	id<NEPluginManagerObjectFactory> _managerObjectFactory;
	NEExtensionProviderHostContext* _sessionContext;
	NSObject*<OS_dispatch_queue> _queue;
	NSString* _pluginType;
	NSString* _extensionIdentifier;
	NSXPCInterface* _managerProtocol;
	NSXPCInterface* _driverProtocol;
	NSObject*<OS_dispatch_source> _sendFailedTimer;
	NSUUID* _sessionRequestIdentifier;
	NSExtension* _extension;
	NSArray* _extensionUUIDs;
	/*^block*/id _pendingDisposeCompletion;

}

@property (nonatomic,retain) NSUUID * sessionRequestIdentifier;                                 //@synthesize sessionRequestIdentifier=_sessionRequestIdentifier - In the implementation block
@property (nonatomic,retain) NSExtension * extension;                                           //@synthesize extension=_extension - In the implementation block
@property (nonatomic,readonly) NSArray * extensionUUIDs;                                        //@synthesize extensionUUIDs=_extensionUUIDs - In the implementation block
@property (copy) id pendingDisposeCompletion;                                                   //@synthesize pendingDisposeCompletion=_pendingDisposeCompletion - In the implementation block
@property (nonatomic,readonly) BOOL isAppExtensionHost;                                         //@synthesize isAppExtensionHost=_isAppExtensionHost - In the implementation block
@property (__weak,readonly) id<NEPluginManagerObjectFactory> managerObjectFactory;              //@synthesize managerObjectFactory=_managerObjectFactory - In the implementation block
@property (nonatomic,retain) NEExtensionProviderHostContext * sessionContext;                   //@synthesize sessionContext=_sessionContext - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> queue;                                          //@synthesize queue=_queue - In the implementation block
@property (readonly) int requiredEntitlement; 
@property (nonatomic,readonly) NSString * pluginType;                                           //@synthesize pluginType=_pluginType - In the implementation block
@property (nonatomic,readonly) NSString * extensionIdentifier;                                  //@synthesize extensionIdentifier=_extensionIdentifier - In the implementation block
@property (readonly) NSXPCInterface * managerProtocol;                                          //@synthesize managerProtocol=_managerProtocol - In the implementation block
@property (readonly) NSXPCInterface * driverProtocol;                                           //@synthesize driverProtocol=_driverProtocol - In the implementation block
@property (assign) BOOL appsUpdateStarted;                                                      //@synthesize appsUpdateStarted=_appsUpdateStarted - In the implementation block
@property (assign) BOOL appsUpdateEnding;                                                       //@synthesize appsUpdateEnding=_appsUpdateEnding - In the implementation block
@property (retain) NSObject*<OS_dispatch_source> sendFailedTimer;                               //@synthesize sendFailedTimer=_sendFailedTimer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * uuids; 
@property (nonatomic,readonly) NSXPCInterface * driverInterface; 
@property (nonatomic,readonly) NSXPCInterface * managerInterface; 
-(void)dealloc;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)wakeup;
-(void)updateConfiguration:(id)arg1 ;
-(void)setExtension:(NSExtension *)arg1 ;
-(NSExtension *)extension;
-(NSString *)extensionIdentifier;
-(NSString *)pluginType;
-(void)sleepWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)startWithConfiguration:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NEExtensionProviderHostContext *)sessionContext;
-(NSXPCInterface *)driverInterface;
-(int)requiredEntitlement;
-(void)extension:(id)arg1 didFailWithError:(id)arg2 ;
-(void)extensionDidStop:(id)arg1 ;
-(void)extension:(id)arg1 didStartWithError:(id)arg2 ;
-(BOOL)appsUpdateStarted;
-(void)setAppsUpdateStarted:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_source>)sendFailedTimer;
-(void)setSendFailedTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(BOOL)appsUpdateEnding;
-(void)setAppsUpdateEnding:(BOOL)arg1 ;
-(void)handleDisposeWithCompletionHandler:(/*^block*/id)arg1 ;
-(id<NEPluginManagerObjectFactory>)managerObjectFactory;
-(void)handleCancel;
-(void)handleAppsUninstalled:(id)arg1 ;
-(void)handleAppsUpdateBegins:(id)arg1 ;
-(void)handleAppsUpdateEnding:(id)arg1 ;
-(void)handleAppsUpdateEnds:(id)arg1 ;
-(NSXPCInterface *)managerInterface;
-(void)handleExtensionStartedWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)sendExtensionFailed;
-(BOOL)shouldAllowUnentitledExtension:(id)arg1 ;
-(NSUUID *)sessionRequestIdentifier;
-(void)handleExtensionExit:(id)arg1 ;
-(void)cleanupExtensionWithRequestIdentifier:(id)arg1 ;
-(void)setPendingDisposeCompletion:(id)arg1 ;
-(BOOL)isAppExtensionHost;
-(BOOL)isSignedWithDeveloperID:(id)arg1 ;
-(void)setSessionRequestIdentifier:(NSUUID *)arg1 ;
-(void)setSessionContext:(NEExtensionProviderHostContext *)arg1 ;
-(id)pendingDisposeCompletion;
-(id)initWithPluginType:(id)arg1 pluginClass:(long long)arg2 pluginInfo:(id)arg3 queue:(id)arg4 factory:(id)arg5 ;
-(void)handleInitWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSArray *)uuids;
-(id)initWithPluginType:(id)arg1 pluginClass:(long long)arg2 pluginEndpoint:(id)arg3 pluginUUID:(id)arg4 queue:(id)arg5 factory:(id)arg6 ;
-(NSXPCInterface *)managerProtocol;
-(NSXPCInterface *)driverProtocol;
-(NSArray *)extensionUUIDs;
@end

