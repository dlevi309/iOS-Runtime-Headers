/*
* Generated on Monday, March 1, 2021 at 2:31:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PlugInKit.framework/PlugInKit
*/

#import <PlugInKit/PKPlugInCore.h>
#import <libobjc.A.dylib/PKPlugInPrivate.h>
#import <libobjc.A.dylib/NSXPCConnectionDelegate.h>

@protocol OS_dispatch_queue, PKCorePlugInProtocol, PKPlugIn;
@class NSUUID, NSDate, NSXPCConnection, NSDictionary, NSUserDefaults, NSObject, NSString, NSArray, Protocol, NSBundle, NSURL;

@interface PKHostPlugIn : PKPlugInCore <PKPlugInPrivate, NSXPCConnectionDelegate> {

	BOOL _terminating;
	unsigned _useCount;
	NSUserDefaults* _defaults;
	/*^block*/id _notificationBlock;
	NSXPCConnection* _pluginConnection;
	NSObject*<OS_dispatch_queue> __replyQueue;
	NSObject*<OS_dispatch_queue> __syncQueue;
	NSObject*<OS_dispatch_queue> __startQueue;
	id<PKCorePlugInProtocol> _service;
	id<PKCorePlugInProtocol> _syncService;
	NSUUID* _supersedingUUID;
	id<PKPlugIn> _supersededBy;
	NSUUID* _multipleInstanceUUID;
	NSString* _serviceExtension;
	NSDictionary* _discoveryExtensions;
	NSArray* _sandboxExtensions;
	id _queuedHostPrincipal;
	Protocol* _queuedHostProtocol;
	unsigned long long _state;
	id _plugInPrincipal;
	id _embeddedPrincipal;
	NSBundle* _embeddedBundle;
	NSDate* _beganUsingAt;
	NSDictionary* _sourceForm;
	NSDictionary* _environment;

}

@property (retain) NSXPCConnection * pluginConnection;                             //@synthesize pluginConnection=_pluginConnection - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> _replyQueue;                       //@synthesize _replyQueue=__replyQueue - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> _syncQueue;                        //@synthesize _syncQueue=__syncQueue - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> _startQueue;                       //@synthesize _startQueue=__startQueue - In the implementation block
@property (retain) id<PKCorePlugInProtocol> service;                               //@synthesize service=_service - In the implementation block
@property (retain) id<PKCorePlugInProtocol> syncService;                           //@synthesize syncService=_syncService - In the implementation block
@property (retain) NSUUID * supersedingUUID;                                       //@synthesize supersedingUUID=_supersedingUUID - In the implementation block
@property (__weak) id<PKPlugIn> supersededBy;                                      //@synthesize supersededBy=_supersededBy - In the implementation block
@property (retain) NSUUID * multipleInstanceUUID;                                  //@synthesize multipleInstanceUUID=_multipleInstanceUUID - In the implementation block
@property (readonly) NSUUID * effectiveUUID; 
@property (retain) NSString * serviceExtension;                                    //@synthesize serviceExtension=_serviceExtension - In the implementation block
@property (retain) NSDictionary * discoveryExtensions;                             //@synthesize discoveryExtensions=_discoveryExtensions - In the implementation block
@property (retain) NSArray * sandboxExtensions;                                    //@synthesize sandboxExtensions=_sandboxExtensions - In the implementation block
@property (retain) id queuedHostPrincipal;                                         //@synthesize queuedHostPrincipal=_queuedHostPrincipal - In the implementation block
@property (retain) Protocol * queuedHostProtocol;                                  //@synthesize queuedHostProtocol=_queuedHostProtocol - In the implementation block
@property (assign) unsigned long long state;                                       //@synthesize state=_state - In the implementation block
@property (assign) unsigned useCount;                                              //@synthesize useCount=_useCount - In the implementation block
@property (retain) id plugInPrincipal;                                             //@synthesize plugInPrincipal=_plugInPrincipal - In the implementation block
@property (retain) id embeddedPrincipal;                                           //@synthesize embeddedPrincipal=_embeddedPrincipal - In the implementation block
@property (retain) NSBundle * embeddedBundle;                                      //@synthesize embeddedBundle=_embeddedBundle - In the implementation block
@property (readonly) NSUserDefaults * defaults;                                    //@synthesize defaults=_defaults - In the implementation block
@property (assign) BOOL terminating;                                               //@synthesize terminating=_terminating - In the implementation block
@property (retain) NSDate * beganUsingAt;                                          //@synthesize beganUsingAt=_beganUsingAt - In the implementation block
@property (retain) NSDictionary * sourceForm;                                      //@synthesize sourceForm=_sourceForm - In the implementation block
@property (retain) NSDictionary * environment;                                     //@synthesize environment=_environment - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSString * identifier; 
@property (readonly) NSString * version; 
@property (readonly) NSURL * url; 
@property (readonly) NSURL * containingUrl; 
@property (readonly) BOOL onSystemVolume; 
@property (readonly) NSDictionary * bundleInfoDictionary; 
@property (readonly) NSDictionary * plugInDictionary; 
@property (readonly) NSDictionary * attributes; 
@property (readonly) NSDictionary * entitlements; 
@property (readonly) NSString * localizedName; 
@property (readonly) NSString * localizedShortName; 
@property (readonly) NSString * localizedContainingName; 
@property (readonly) NSDictionary * localizedFileProviderActionNames; 
@property (assign) long long userElection; 
@property (readonly) BOOL spent; 
@property (readonly) BOOL active; 
@property (copy) id notificationBlock;                                             //@synthesize notificationBlock=_notificationBlock - In the implementation block
@property (readonly) NSUUID * uuid; 
@property (readonly) NSDate * timestamp; 
@property (retain) NSDictionary * extensionState; 
-(NSString *)description;
-(void)resume;
-(NSDictionary *)extensionState;
-(void)setExtensionState:(NSDictionary *)arg1 ;
-(long long)userElection;
-(unsigned long long)state;
-(NSDictionary *)environment;
-(id)createInstanceWithUUID:(id)arg1 ;
-(void)setUserElection:(long long)arg1 ;
-(BOOL)useBundle:(id)arg1 error:(id*)arg2 ;
-(NSXPCConnection *)pluginConnection;
-(BOOL)spent;
-(BOOL)beginUsingWithError:(id*)arg1 ;
-(void)beginUsing:(/*^block*/id)arg1 ;
-(void)endUsing:(/*^block*/id)arg1 ;
-(void)setEnvironment:(NSDictionary *)arg1 ;
-(void)suspend;
-(void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(BOOL)arg3 ;
-(void)setState:(unsigned long long)arg1 ;
-(NSUserDefaults *)defaults;
-(id<PKCorePlugInProtocol>)service;
-(NSObject*<OS_dispatch_queue>)_syncQueue;
-(NSObject*<OS_dispatch_queue>)_replyQueue;
-(BOOL)active;
-(NSUUID *)multipleInstanceUUID;
-(void)setService:(id<PKCorePlugInProtocol>)arg1 ;
-(void)setReplyQueue:(id)arg1 ;
-(unsigned)useCount;
-(void)setUseCount:(unsigned)arg1 ;
-(id)notificationBlock;
-(void)setNotificationBlock:(id)arg1 ;
-(id<PKPlugIn>)supersededBy;
-(NSString *)serviceExtension;
-(id)initWithForm:(id)arg1 ;
-(void)setSourceForm:(NSDictionary *)arg1 ;
-(void)setSupersedingUUID:(NSUUID *)arg1 ;
-(void)set_syncQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)set_startQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setDiscoveryExtensions:(NSDictionary *)arg1 ;
-(void)setServiceExtension:(NSString *)arg1 ;
-(void)updateFromForm:(id)arg1 ;
-(NSDictionary *)sourceForm;
-(void)set_replyQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)plugInPrincipal;
-(void)setQueuedHostPrincipal:(id)arg1 ;
-(void)setQueuedHostProtocol:(Protocol *)arg1 ;
-(void)setMultipleInstanceUUID:(NSUUID *)arg1 ;
-(void)beginUsingWithSubsystemOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSObject*<OS_dispatch_queue>)_startQueue;
-(void)startPlugInSynchronously:(BOOL)arg1 subsystemOptions:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)beginUsingWithSubsystemOptions:(id)arg1 error:(id*)arg2 ;
-(void)setTerminating:(BOOL)arg1 ;
-(void)changeState:(unsigned long long)arg1 ;
-(BOOL)loadExtensions:(id)arg1 error:(id*)arg2 ;
-(void)setBeganUsingAt:(NSDate *)arg1 ;
-(void)setSyncService:(id<PKCorePlugInProtocol>)arg1 ;
-(id<PKCorePlugInProtocol>)syncService;
-(BOOL)terminating;
-(void)unwind:(unsigned long long)arg1 force:(BOOL)arg2 ;
-(void)setPluginConnection:(NSXPCConnection *)arg1 ;
-(void)setBootstrapWithSubsystemOptions:(id)arg1 ;
-(id)queuedHostPrincipal;
-(void)setPlugInPrincipal:(id)arg1 ;
-(void)setEmbeddedPrincipal:(id)arg1 ;
-(void)preparePlugInUsingService:(id)arg1 completion:(/*^block*/id)arg2 ;
-(Protocol *)queuedHostProtocol;
-(NSArray *)sandboxExtensions;
-(void)setSandboxExtensions:(NSArray *)arg1 ;
-(BOOL)isSandboxed;
-(NSDictionary *)discoveryExtensions;
-(void)messageTraceUsage;
-(BOOL)endUsingWithError:(id*)arg1 ;
-(void)setHostPrincipal:(id)arg1 withProtocol:(id)arg2 ;
-(id)embeddedPrincipal;
-(NSBundle *)embeddedBundle;
-(NSUUID *)effectiveUUID;
-(NSUUID *)supersedingUUID;
-(void)setSupersededBy:(id<PKPlugIn>)arg1 ;
-(void)setEmbeddedBundle:(NSBundle *)arg1 ;
-(NSDate *)beganUsingAt;
@end

