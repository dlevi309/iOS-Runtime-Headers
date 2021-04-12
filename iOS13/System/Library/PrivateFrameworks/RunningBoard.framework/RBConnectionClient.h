/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
*/

#import <RunningBoard/RunningBoard-Structs.h>
#import <libobjc.A.dylib/RBClientInheritanceManagerDelegate.h>
#import <libobjc.A.dylib/RBEntitlementPossessing.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/RBStateCapturing.h>

@protocol OS_xpc_object, RBAssertionManaging, RBEntitlementManaging, RBProcessManaging, RBProcessMonitoring, RBStateCaptureManaging, RBEntitlementPossessing;
@class NSObject, RBProcess, NSString, RBSProcessHandle, RBSProcessIdentity, RBSProcessIdentifier, RBClientInheritanceManager, NSMutableSet, RBProcessMonitorObserver, RBSAssertionIdentifier;

@interface RBConnectionClient : NSObject <RBClientInheritanceManagerDelegate, RBEntitlementPossessing, BSDescriptionProviding, RBStateCapturing> {

	NSObject*<OS_xpc_object> _connection;
	os_unfair_lock_s _lock;
	id<RBAssertionManaging> _assertionManager;
	id<RBEntitlementManaging> _entitlementManager;
	id<RBProcessManaging> _processManager;
	id<RBProcessMonitoring> _processMonitor;
	id<RBStateCaptureManaging> _stateCaptureManager;
	RBProcess* _containingProcess;
	NSString* _logProem;
	RBProcess* _process;
	RBSProcessHandle* _processHandle;
	RBSProcessIdentity* _processIdentity;
	RBSProcessIdentifier* _processIdentifier;
	unsigned _euid;
	RBClientInheritanceManager* _inheritanceManager;
	id<RBEntitlementPossessing> _entitlements;
	NSMutableSet* _assertionIdentifiers;
	NSMutableSet* _deathMonitors;
	RBProcessMonitorObserver* _stateObserver;
	RBSAssertionIdentifier* _expirationBoostAssertionIdentifier;

}

@property (nonatomic,readonly) RBProcess * process;                                        //@synthesize process=_process - In the implementation block
@property (nonatomic,copy,readonly) RBSProcessIdentifier * processIdentifier;              //@synthesize processIdentifier=_processIdentifier - In the implementation block
@property (nonatomic,copy,readonly) RBSProcessIdentity * processIdentity;                  //@synthesize processIdentity=_processIdentity - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * stateCaptureTitle; 
+(id)sharedLaunchWorkloop;
+(id)sharedTerminationWorkloop;
-(id)init;
-(NSString *)description;
-(void)invalidate;
-(RBSProcessIdentifier *)processIdentifier;
-(RBProcess *)process;
-(BOOL)hasEntitlement:(id)arg1 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)infoPlistResultForInstance:(id)arg1 forKeys:(id)arg2 error:(out id*)arg3 ;
-(BOOL)invalidateAssertionWithIdentifier:(id)arg1 error:(out id*)arg2 ;
-(id)assertionDescriptorsWithFlattenedAttributes:(BOOL)arg1 error:(out id*)arg2 ;
-(RBSProcessIdentity *)processIdentity;
-(id)lookupHandleForKey:(id)arg1 error:(out id*)arg2 ;
-(id)lookupHandleForPredicate:(id)arg1 error:(out id*)arg2 ;
-(id)subscribeToProcessDeath:(id)arg1 error:(out id*)arg2 ;
-(id)lastExitContextForInstance:(id)arg1 error:(out id*)arg2 ;
-(id)limitationsForInstance:(id)arg1 error:(out id*)arg2 ;
-(id)hostProcessForInstance:(id)arg1 error:(out id*)arg2 ;
-(id)identifiersForStateCaptureSubsystemsWithError:(out id*)arg1 ;
-(id)busyExtensionInstancesFromSet:(id)arg1 error:(out id*)arg2 ;
-(id)handshakeWithRequest:(id)arg1 ;
-(id)captureState;
-(void)handleMessage:(id)arg1 ;
-(BOOL)hasEntitlementDomain:(unsigned long long)arg1 ;
-(void)didUpdateProcessStates:(id)arg1 ;
-(NSString *)stateCaptureTitle;
-(oneway void)invalidateAssertionWithIdentifier:(id)arg1 ;
-(void)acquireAssertionForDescriptor:(id)arg1 withReply:(id)arg2 ;
-(void)executeLaunchRequest:(id)arg1 withReply:(id)arg2 ;
-(void)executeTerminateRequest:(id)arg1 withReply:(id)arg2 ;
-(BOOL)subscribeToProcessStateChangesWithConfiguration:(id)arg1 error:(out id*)arg2 ;
-(void)unsubscribeFromProcessStateChangesWithIdentifier:(unsigned long long)arg1 ;
-(void)statesForPredicate:(id)arg1 withDescriptor:(id)arg2 withReply:(id)arg3 ;
-(BOOL)intendToExit:(id)arg1 withStatus:(id)arg2 error:(out id*)arg3 ;
-(void)captureStateForSubsystem:(id)arg1 withReply:(id)arg2 ;
-(void)requestPluginHoldForIdentity:(id)arg1 terminate:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)inheritanceManager:(id)arg1 didChangeInheritances:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithContext:(id)arg1 process:(id)arg2 connection:(id)arg3 ;
-(void)willExpireAssertionsSoonForProcess:(id)arg1 expirationTime:(double)arg2 ;
-(void)willInvalidateAssertion:(id)arg1 ;
-(void)didInvalidateAssertions:(id)arg1 ;
-(void)didRemoveProcess:(id)arg1 withState:(id)arg2 ;
@end

