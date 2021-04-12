/*
* Generated on Monday, March 1, 2021 at 2:33:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFMessageTransport.h>
#import <libobjc.A.dylib/HMDaemonConnection.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol OS_dispatch_queue;
@class NSObject, NSXPCConnection, HMDProcessInfo, NSString, HMDXPCRequestTracker, HMDApplicationRegistry, NSSet;

@interface HMDXPCClientConnection : HMFMessageTransport <HMDaemonConnection, HMFLogging> {

	NSObject*<OS_dispatch_queue> _queue;
	BOOL _activated;
	BOOL _entitledForAPIAccess;
	BOOL _entitledForBackgroundMode;
	BOOL _entitledForCameraClipsAccess;
	BOOL _entitledForMultiUserSetupAccess;
	NSXPCConnection* _xpcConnection;
	HMDProcessInfo* _processInfo;
	unsigned long long _entitlements;
	NSString* _clientName;
	HMDXPCRequestTracker* _requestTracker;
	HMDApplicationRegistry* _appRegistry;

}

@property (nonatomic,readonly) id remoteProxy; 
@property (nonatomic,retain) NSString * clientName;                                                                                      //@synthesize clientName=_clientName - In the implementation block
@property (assign,nonatomic,__weak) NSXPCConnection * xpcConnection;                                                                     //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (nonatomic,readonly) HMDXPCRequestTracker * requestTracker;                                                                    //@synthesize requestTracker=_requestTracker - In the implementation block
@property (assign,getter=isActivated,nonatomic) BOOL activated;                                                                          //@synthesize activated=_activated - In the implementation block
@property (assign,nonatomic,__weak) HMDApplicationRegistry * appRegistry;                                                                //@synthesize appRegistry=_appRegistry - In the implementation block
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) int clientPid; 
@property (nonatomic,readonly) NSSet * activeRequests; 
@property (assign,nonatomic,__weak) HMDProcessInfo * processInfo;                                                                        //@synthesize processInfo=_processInfo - In the implementation block
@property (getter=isAuthorizedForHomeDataAccess,nonatomic,readonly) BOOL authorizedForHomeDataAccess; 
@property (getter=isAuthorizedForMicrophoneAccess,nonatomic,readonly) BOOL authorizedForMicrophoneAccess; 
@property (readonly) unsigned long long entitlements;                                                                                    //@synthesize entitlements=_entitlements - In the implementation block
@property (getter=isEntitledForAPIAccess,nonatomic,readonly) BOOL entitledForAPIAccess;                                                  //@synthesize entitledForAPIAccess=_entitledForAPIAccess - In the implementation block
@property (getter=isEntitledForSPIAccess,readonly) BOOL entitledForSPIAccess; 
@property (getter=isAuthorizedForLocationAccess,nonatomic,readonly) BOOL authorizedForLocationAccess; 
@property (getter=isEntitledForBackgroundMode,nonatomic,readonly) BOOL entitledForBackgroundMode;                                        //@synthesize entitledForBackgroundMode=_entitledForBackgroundMode - In the implementation block
@property (getter=isEntitledForHomeLocationAccess,nonatomic,readonly) BOOL entitledForHomeLocationAccess; 
@property (getter=isEntitledForCameraClipsAccess,nonatomic,readonly) BOOL entitledForCameraClipsAccess;                                  //@synthesize entitledForCameraClipsAccess=_entitledForCameraClipsAccess - In the implementation block
@property (getter=isEntitledForMultiUserSetupAccess,nonatomic,readonly) BOOL entitledForMultiUserSetupAccess;                            //@synthesize entitledForMultiUserSetupAccess=_entitledForMultiUserSetupAccess - In the implementation block
@property (getter=isEntitledForShortcutsAutomationAccess,nonatomic,readonly) BOOL entitledForShortcutsAutomationAccess; 
@property (getter=isEntitledToProvideAccessorySetupPayload,nonatomic,readonly) BOOL entitledToProvideAccessorySetupPayload; 
@property (getter=isPlatformBinary,readonly) BOOL platformBinary; 
@property (nonatomic,readonly) NSString * applicationBundleIdentifier; 
@property (nonatomic,readonly) NSString * companionAppBundleIdentifier; 
@property (nonatomic,readonly) NSString * teamIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(unsigned long long)entitlementsForConnection:(id)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(NSString *)name;
-(HMDProcessInfo *)processInfo;
-(NSXPCConnection *)xpcConnection;
-(id)_displayName;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(unsigned long long)entitlements;
-(NSString *)clientName;
-(int)clientPid;
-(void)sendMessage:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)activate;
-(void)deactivate;
-(void)setActivated:(BOOL)arg1 ;
-(NSString *)applicationBundleIdentifier;
-(NSString *)teamIdentifier;
-(BOOL)isActivated;
-(id)logIdentifier;
-(BOOL)isPlatformBinary;
-(void)setProcessInfo:(HMDProcessInfo *)arg1 ;
-(void)setClientName:(NSString *)arg1 ;
-(void)handleMessage:(id)arg1 ;
-(BOOL)canSendMessage:(id)arg1 ;
-(id)remoteProxy;
-(NSSet *)activeRequests;
-(void)handleMessage:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(void)checkinWithName:(id)arg1 ;
-(BOOL)isEntitledForSPIAccess;
-(BOOL)isEntitledToProvideAccessorySetupPayload;
-(BOOL)isAuthorizedForLocationAccess;
-(BOOL)isEntitledForHomeLocationAccess;
-(BOOL)isEntitledForShortcutsAutomationAccess;
-(BOOL)isEntitledForAPIAccess;
-(BOOL)isAuthorizedForHomeDataAccess;
-(BOOL)isAuthorizedForMicrophoneAccess;
-(BOOL)isEntitledForBackgroundMode;
-(NSString *)companionAppBundleIdentifier;
-(HMDXPCRequestTracker *)requestTracker;
-(BOOL)isEntitledForCameraClipsAccess;
-(BOOL)isEntitledForMultiUserSetupAccess;
-(BOOL)shouldSendResponseForMessageIdentifier:(id)arg1 ;
-(void)_notifyOfNewIncomingClientMessage;
-(id)initWithConnection:(id)arg1 appRegistry:(id)arg2 ;
-(id)extractTeamIdentifier;
-(id)_extractBundleIdentifier;
-(HMDApplicationRegistry *)appRegistry;
-(void)setAppRegistry:(HMDApplicationRegistry *)arg1 ;
@end

