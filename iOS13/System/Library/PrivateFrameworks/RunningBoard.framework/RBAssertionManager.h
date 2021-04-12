/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
*/

#import <RunningBoard/RunningBoard-Structs.h>
#import <libobjc.A.dylib/RBAssertionManagerQueueDelegate.h>
#import <libobjc.A.dylib/RBAssertionManaging.h>
#import <libobjc.A.dylib/RBStateCapturing.h>

@protocol OS_dispatch_queue, RBAssertionManagerDelegate, RBBundlePropertiesManaging, RBAssertionDescriptorValidating, RBDomainAttributeManaging, RBEntitlementManaging, RBJetsamBandProviding, RBAssertionOriginatorPidPersisting, RBStateCaptureManaging;
@class NSObject, RBAssertionCollection, RBSystemState, RBProcessIndex, RBProcessMap, NSMutableDictionary, NSCountedSet, RBAssertionStateResolver, RBAssertionManagerEventQueue, NSMutableSet, NSString;

@interface RBAssertionManager : NSObject <RBAssertionManagerQueueDelegate, RBAssertionManaging, RBStateCapturing> {

	NSObject*<OS_dispatch_queue> _workloop;
	NSObject*<OS_dispatch_queue> _calloutQueue;
	os_unfair_lock_s _lock;
	id<RBAssertionManagerDelegate> _delegate;
	RBAssertionCollection* _assertions;
	RBSystemState* _systemState;
	RBProcessIndex* _processIndex;
	RBProcessMap* _stateMap;
	NSMutableDictionary* _relativeStartTimesByTargetIdentity;
	double _creationTime;
	NSMutableDictionary* _originatorToInFlightOperationsCountMap;
	NSCountedSet* _inFlightAssertionTargets;
	os_unfair_lock_s _inFlightOperationsLock;
	id<RBBundlePropertiesManaging> _bundlePropertiesManager;
	id<RBAssertionDescriptorValidating> _descriptorValidator;
	id<RBDomainAttributeManaging> _domainAttributeManager;
	id<RBEntitlementManaging> _entitlementManager;
	id<RBJetsamBandProviding> _jetsamBandProvider;
	id<RBAssertionOriginatorPidPersisting> _originatorPidStore;
	id<RBStateCaptureManaging> _stateCaptureManager;
	unsigned long long _maxOperationsInFlight;
	unsigned long long _maxAssertionsPerOriginator;
	RBAssertionStateResolver* _stateResolver;
	RBAssertionManagerEventQueue* _eventQueue;
	NSMutableSet* _assertionTargets;
	NSMutableSet* _acquiringAssertionIdentifiers;
	NSMutableSet* _invalidAssertions;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * stateCaptureTitle; 
+(id)sharedWorkloop;
-(id)init;
-(NSString *)debugDescription;
-(id)stateForIdentity:(id)arg1 ;
-(id)captureState;
-(id)processForIdentity:(id)arg1 ;
-(BOOL)invalidateAssertionsDueToCPUUsageViolationForProcessIdentifier:(id)arg1 ;
-(double)eventQueue:(id)arg1 startTimeForAssertion:(id)arg2 ;
-(void)eventQueue:(id)arg1 handleWarningEventForAssertion:(id)arg2 ;
-(void)eventQueue:(id)arg1 handleInvalidationEventForAssertion:(id)arg2 ;
-(double)eventQueue:(id)arg1 remainingRuntimeForProcessIdentity:(id)arg2 ;
-(void)eventQueue:(id)arg1 handleAssertionsExpirationWarningEventForProcessIdentity:(id)arg2 expirationTime:(double)arg3 ;
-(NSString *)stateCaptureTitle;
-(id)_concreteTargetForTarget:(id)arg1 withContext:(id)arg2 ;
-(BOOL)_lock_hasStartTimeDefiningAssertionsForTargetProcessIdentity:(id)arg1 ;
-(double)_lock_invalidationTimeForAssertion:(id)arg1 ;
-(void)_lock_setState:(id)arg1 forProcessIdentity:(id)arg2 ;
-(void)_increaseInFlightOperationsForTargetIdentity:(id)arg1 ;
-(BOOL)_increaseInFlightOperationsForOriginator:(id)arg1 ;
-(void)_decreaseInFlightOperationsForTargetIdentity:(id)arg1 ;
-(BOOL)_decreaseInFlightOperationsForOriginator:(id)arg1 ;
-(void)_lock_deactivateDelayedAssertionsForTargetsAndUpdateStates:(id)arg1 ;
-(void)_lock_addAssertion:(id)arg1 ;
-(id)_lock_updateStatesDueToChangingAssertions:(id)arg1 ;
-(BOOL)invalidateAssertion:(id)arg1 ;
-(void)_lock_enqueueAssertionsForRemoval:(id)arg1 ;
-(void)_lock_removeInvalidAssertions;
-(id)assertionDescriptorsWithFlattenedAttributes:(BOOL)arg1 ;
-(double)_remainingRuntimeForProcessIdentity:(id)arg1 ;
-(id)assertionsForOriginator:(id)arg1 ;
-(void)acquireAssertionWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_acquireUnderlyingAssertionForProcess:(id)arg1 ;
-(void)_lock_removeAssertions:(id)arg1 ;
-(void)_lock_removeStateForProcessIdentityIfNecessary:(id)arg1 ;
-(id)attributesForDomain:(id)arg1 andName:(id)arg2 targetProperties:(id)arg3 withError:(id*)arg4 ;
-(id)originatorEntitlementsForDomain:(id)arg1 andName:(id)arg2 ;
-(id)endowmentNamespaceForDomain:(id)arg1 andName:(id)arg2 ;
-(BOOL)containsAttributeWithDomain:(id)arg1 andName:(id)arg2 ;
-(id)allEntitlements;
-(BOOL)areTargetPropertiesValid:(id)arg1 forAttributeWithDomain:(id)arg2 andName:(id)arg3 ;
-(double)_lock_startTimeForAssertion:(id)arg1 ;
-(void)_removeInvalidAssertions;
-(unsigned long long)_lock_numberofStartTimeDefiningAssertionsForTargetProcessIdentity:(id)arg1 ;
-(id)_lock_activateDelayedAssertionsForTargets:(id)arg1 ;
-(void)_lock_clearStartTimesForUnbusyTargets:(id)arg1 ;
-(void)_lock_notifyDelegateOfProcessStateChangeSet:(id)arg1 ;
-(void)_lock_removeAssertion:(id)arg1 ;
-(id)_lock_sortedAssertionsForTarget:(id)arg1 ;
-(void)_lock_dumpAssertionsForTarget:(id)arg1 ;
-(void)_dumpAssertions;
-(id)_lock_deactivateDelayedAssertionsForTargets:(id)arg1 ;
-(void)_lock_setSystemState:(id)arg1 ;
-(double)_lock_relativeStartTimeForAssertion:(id)arg1 ;
-(double)_lock_delayedStartTimeForAssertion:(id)arg1 ;
-(BOOL)invalidateAssertionFromOriginator:(id)arg1 withIdentifier:(id)arg2 ;
-(BOOL)invalidateAssertionWithIdentifier:(id)arg1 ;
-(id)limitationsForInstance:(id)arg1 ;
-(BOOL)hasAssertionWithIdentifier:(id)arg1 ;
-(void)processDidLaunch:(id)arg1 ;
-(void)processDidTerminate:(id)arg1 ;
-(void)revalidateAssertionsForProcessIdentities:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 domainAttributeManager:(id)arg2 bundlePropertiesManager:(id)arg3 originatorPidStore:(id)arg4 assertionDescriptorValidator:(id)arg5 entitlementManager:(id)arg6 jetsamBandProvider:(id)arg7 stateCaptureManager:(id)arg8 maxOperationsInFlight:(unsigned long long)arg9 maxAssertionsPerOriginator:(unsigned long long)arg10 ;
@end

