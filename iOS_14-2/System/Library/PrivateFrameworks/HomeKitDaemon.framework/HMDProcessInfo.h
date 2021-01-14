/*
* Generated on Thursday, January 14, 2021 at 2:25:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HMFoundation/HMFProcessInfo.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol HMFLocking;
@class NSHashTable, RBSProcessState, NSString, HMDApplicationInfo, HMFLocationAuthorization, RBSProcessHandle, NSArray;

@interface HMDProcessInfo : HMFProcessInfo <HMFLogging> {

	id<HMFLocking> _lock;
	NSHashTable* _connections;
	BOOL _entitledForAPIAccess;
	BOOL _entitledForSPIAccess;
	unsigned long long _state;
	RBSProcessState* _processState;
	NSString* _bundleIdentifier;
	HMDApplicationInfo* _applicationInfo;
	HMFLocationAuthorization* _locationAuthorization;
	RBSProcessHandle* _processHandle;

}

@property (assign) unsigned long long state;                                                                   //@synthesize state=_state - In the implementation block
@property (nonatomic,copy,readonly) RBSProcessState * processState;                                            //@synthesize processState=_processState - In the implementation block
@property (nonatomic,readonly) RBSProcessHandle * processHandle;                                               //@synthesize processHandle=_processHandle - In the implementation block
@property (copy,readonly) NSArray * connections; 
@property (copy,readonly) NSString * bundleIdentifier;                                                         //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (getter=isActive,readonly) BOOL active; 
@property (getter=isEntitledForAPIAccess,readonly) BOOL entitledForAPIAccess;                                  //@synthesize entitledForAPIAccess=_entitledForAPIAccess - In the implementation block
@property (getter=isEntitledForSPIAccess,readonly) BOOL entitledForSPIAccess;                                  //@synthesize entitledForSPIAccess=_entitledForSPIAccess - In the implementation block
@property (getter=isForegrounded,readonly) BOOL foreground; 
@property (getter=isBackgroundUpgradedToForeground,readonly) BOOL backgroundUpgradedToForeground; 
@property (getter=isBackgrounded,readonly) BOOL background; 
@property (getter=isSuspended,readonly) BOOL suspended; 
@property (getter=isTerminated,readonly) BOOL terminated; 
@property (readonly) BOOL shouldMonitor; 
@property (readonly) HMDApplicationInfo * applicationInfo;                                                     //@synthesize applicationInfo=_applicationInfo - In the implementation block
@property (readonly) HMFLocationAuthorization * locationAuthorization;                                         //@synthesize locationAuthorization=_locationAuthorization - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)privateClientIdentifierSalt;
+(id)processInfoWithConnection:(id)arg1 ;
-(BOOL)isSuspended;
-(id)init;
-(NSArray *)connections;
-(void)removeConnection:(id)arg1 ;
-(BOOL)isActive;
-(NSString *)bundleIdentifier;
-(id)initWithAuditToken:(SCD_Struct_HM32)arg1 ;
-(RBSProcessHandle *)processHandle;
-(BOOL)isBackgrounded;
-(void)addConnection:(id)arg1 ;
-(id)attributeDescriptions;
-(HMFLocationAuthorization *)locationAuthorization;
-(void)setState:(unsigned long long)arg1 ;
-(unsigned long long)state;
-(id)initWithIdentifier:(int)arg1 ;
-(RBSProcessState *)processState;
-(BOOL)isEqual:(id)arg1 ;
-(HMDApplicationInfo *)applicationInfo;
-(BOOL)isEntitledForSPIAccess;
-(BOOL)isEntitledForAPIAccess;
-(BOOL)shouldMonitor;
-(id)clientIdentifierSalt:(id*)arg1 ;
-(void)_updateProcessState:(id)arg1 ;
-(BOOL)isTerminated;
-(BOOL)isForegrounded;
-(BOOL)isBackgroundUpgradedToForeground;
@end

