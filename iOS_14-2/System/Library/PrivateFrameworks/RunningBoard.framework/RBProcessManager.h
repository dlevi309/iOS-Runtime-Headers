/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
*/

#import <RunningBoard/RunningBoard-Structs.h>
#import <libobjc.A.dylib/RBProcessManaging.h>
#import <libobjc.A.dylib/RBStateCapturing.h>

@protocol RBBundlePropertiesManaging, RBEntitlementManaging, RBJetsamBandProviding, RBProcessManagerDelegate;
@class RBLaunchdJobManager, RBProcessIndex, RBSystemState, RBProcessMap, NSMutableDictionary, NSMapTable, NSString;

@interface RBProcessManager : NSObject <RBProcessManaging, RBStateCapturing> {

	RBLaunchdJobManager* _jobManager;
	id<RBBundlePropertiesManaging> _bundlePropertiesManager;
	id<RBEntitlementManaging> _entitlementManager;
	id<RBJetsamBandProviding> _jetsamBandProvider;
	id<RBProcessManagerDelegate> _delegate;
	os_unfair_lock_s _lock;
	os_unfair_lock_s _pendingExitBlockLock;
	AQ _counter;
	RBProcessIndex* _processIndex;
	RBProcessIndex* _processGraveyard;
	RBSystemState* _systemState;
	RBProcessMap* _processState;
	NSMutableDictionary* _identityToPendingExitBlock;
	NSMapTable* _identityToProcessLifecycleQueue;
	BOOL _systemPreventsIdleSleep;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * stateCaptureTitle; 
+(id)stateApplicationQueue;
-(id)captureState;
-(void)systemPreventIdleSleepStateDidChange:(BOOL)arg1 ;
-(id)init;
-(void)removeStateForProcessIdentity:(id)arg1 ;
-(void)start;
-(void)executeTerminateRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)processForIdentifier:(id)arg1 ;
-(id)processForIdentity:(id)arg1 ;
-(NSString *)debugDescription;
-(void)didUpdateProcessStates:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)processForInstance:(id)arg1 ;
-(void)applySystemState:(id)arg1 ;
-(id)_processForIdentifier:(id)arg1 withAuditToken:(id)arg2 ;
-(id)_getLifecycleQueueForIdentity:(id)arg1 ;
-(void)_removeProcess:(id)arg1 ;
-(id)_lifecycleQueue_addProcessWithInstance:(id)arg1 properties:(id)arg2 ;
-(id)executeLaunchRequest:(id)arg1 withError:(out id*)arg2 ;
-(NSString *)stateCaptureTitle;
-(id)_processForInstance:(id)arg1 ;
-(BOOL)isActiveProcess:(id)arg1 ;
-(BOOL)_canTerminateProcess:(id)arg1 withContext:(id)arg2 error:(out id*)arg3 ;
-(void)_validateBundleIDForProcess:(id)arg1 launchedWithContext:(id)arg2 ;
-(void)_executeLifecycleEventForIdentity:(id)arg1 sync:(BOOL)arg2 withBlock:(/*^block*/id)arg3 ;
-(id)busyExtensionInstancesFromSet:(id)arg1 ;
-(id)processesMatchingPredicate:(id)arg1 ;
-(id)processForAuditToken:(id)arg1 ;
-(id)_resolveProcessWithIdentifier:(id)arg1 auditToken:(id)arg2 properties:(id*)arg3 ;
-(id)_processForIdentifier:(id)arg1 ;
-(id)initWithBundlePropertiesManager:(id)arg1 entitlementManager:(id)arg2 jetsamBandProvider:(id)arg3 delegate:(id)arg4 ;
@end

