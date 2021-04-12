/*
* Generated on Thursday, January 14, 2021 at 2:26:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (readonly) NSUUID * uuid; 
@property (readonly) NSDate * timestamp; 
@property (retain) NSDictionary * extensionState; 
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)endUsing:(/*^block*/id)arg1 ;
-(id)initWithForm:(id)arg1 ;
-(void)setPlugInPrincipal:(id)arg1 ;
-(void)setPluginConnection:(NSXPCConnection *)arg1 ;
-(BOOL)useBundle:(id)arg1 error:(id*)arg2 ;
-(NSXPCConnection *)pluginConnection;
-(void)updateFromForm:(id)arg1 ;
-(id)embeddedPrincipal;
-(void)setEmbeddedPrincipal:(id)arg1 ;
-(void)setSupersedingUUID:(NSUUID *)arg1 ;
-(NSUserDefaults *)defaults;
-(id)queuedHostPrincipal;
-(void)setQueuedHostProtocol:(Protocol *)arg1 ;
-(NSObject*<OS_dispatch_queue>)_startQueue;
-(void)setMultipleInstanceUUID:(NSUUID *)arg1 ;
-(void)unwind:(unsigned long long)arg1 force:(BOOL)arg2 ;
-(void)suspend;
-(BOOL)active;
-(void)setSupersededBy:(id<PKPlugIn>)arg1 ;
-(NSDictionary *)extensionState;
-(id)createInstanceWithUUID:(id)arg1 ;
-(void)setTerminating:(BOOL)arg1 ;
-(void)preparePlugInUsingService:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setDiscoveryExtensions:(NSDictionary *)arg1 ;
-(void)setUseCount:(unsigned)arg1 ;
-(NSDictionary *)sourceForm;
-(id)plugInPrincipal;
-(NSBundle *)embeddedBundle;
-(id)notificationBlock;
-(id<PKCorePlugInProtocol>)syncService;
-(NSObject*<OS_dispatch_queue>)_replyQueue;
-(long long)userElection;
-(void)changeState:(unsigned long long)arg1 ;
-(BOOL)beginUsingWithSubsystemOptions:(id)arg1 error:(id*)arg2 ;
-(NSString *)serviceExtension;
-(void)setSyncService:(id<PKCorePlugInProtocol>)arg1 ;
-(void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(BOOL)arg3 ;
-(void)beginUsingWithSubsystemOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setNotificationBlock:(id)arg1 ;
-(NSDictionary *)discoveryExtensions;
-(void)setReplyQueue:(id)arg1 ;
-(void)setBootstrapWithSubsystemOptions:(id)arg1 ;
-(void)setEmbeddedBundle:(NSBundle *)arg1 ;
-(NSDate *)beganUsingAt;
-(NSArray *)sandboxExtensions;
-(NSObject*<OS_dispatch_queue>)_syncQueue;
-(void)setSourceForm:(NSDictionary *)arg1 ;
-(NSString *)description;
-(void)setBeganUsingAt:(NSDate *)arg1 ;
-(void)set_replyQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSUUID *)multipleInstanceUUID;
-(void)setEnvironment:(NSDictionary *)arg1 ;
-(void)setService:(id<PKCorePlugInProtocol>)arg1 ;
-(void)set_syncQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(unsigned)useCount;
-(id<PKPlugIn>)supersededBy;
-(void)setQueuedHostPrincipal:(id)arg1 ;
-(void)setState:(unsigned long long)arg1 ;
-(void)setSandboxExtensions:(NSArray *)arg1 ;
-(unsigned long long)state;
-(NSDictionary *)environment;
-(BOOL)terminating;
-(void)startPlugInSynchronously:(BOOL)arg1 subsystemOptions:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)spent;
-(void)setUserElection:(long long)arg1 ;
-(void)set_startQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setServiceExtension:(NSString *)arg1 ;
-(void)setExtensionState:(NSDictionary *)arg1 ;
-(NSUUID *)effectiveUUID;
-(BOOL)beginUsingWithError:(id*)arg1 ;
-(BOOL)loadExtensions:(id)arg1 error:(id*)arg2 ;
-(void)resume;
-(NSUUID *)supersedingUUID;
-(void)messageTraceUsage;
-(void)setHostPrincipal:(id)arg1 withProtocol:(id)arg2 ;
-(id<PKCorePlugInProtocol>)service;
-(BOOL)endUsingWithError:(id*)arg1 ;
-(Protocol *)queuedHostProtocol;
-(BOOL)isSandboxed;
-(void)beginUsing:(/*^block*/id)arg1 ;
@end

