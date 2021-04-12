/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
*/


@protocol RBDomainAttributeManaging, RBBundlePropertiesManaging, RBEntitlementManaging;
@class NSMutableSet, RBProcessMap, RBAttributeContext, RBProcessStateChangeSet, RBAssertionCollection, RBProcessIndex, RBSystemState, NSSet;

@interface RBAssertionResolutionContext : NSObject {

	NSMutableSet* _assertions;
	NSMutableSet* _touchedAssertions;
	NSMutableSet* _lostStartTimeDefining;
	NSMutableSet* _gainedStartTimeDefining;
	NSMutableSet* _targetsPendingResolution;
	RBProcessMap* _resolvedState;
	RBProcessMap* _originatorInheritances;
	RBAttributeContext* _attributeContext;
	RBProcessStateChangeSet* _changeSet;
	RBAssertionCollection* _assertionCollection;
	RBProcessIndex* _processIndex;
	RBProcessMap* _stateMap;
	id<RBDomainAttributeManaging> _domainAttributeManager;
	id<RBBundlePropertiesManaging> _bundlePropertiesManager;
	id<RBEntitlementManaging> _entitlementManager;
	RBSystemState* _systemState;

}

@property (nonatomic,retain) RBAssertionCollection * assertionCollection;                         //@synthesize assertionCollection=_assertionCollection - In the implementation block
@property (nonatomic,retain) RBProcessIndex * processIndex;                                       //@synthesize processIndex=_processIndex - In the implementation block
@property (nonatomic,retain) RBProcessMap * stateMap;                                             //@synthesize stateMap=_stateMap - In the implementation block
@property (nonatomic,retain) id<RBDomainAttributeManaging> domainAttributeManager;                //@synthesize domainAttributeManager=_domainAttributeManager - In the implementation block
@property (nonatomic,retain) id<RBBundlePropertiesManaging> bundlePropertiesManager;              //@synthesize bundlePropertiesManager=_bundlePropertiesManager - In the implementation block
@property (nonatomic,retain) id<RBEntitlementManaging> entitlementManager;                        //@synthesize entitlementManager=_entitlementManager - In the implementation block
@property (nonatomic,readonly) RBProcessStateChangeSet * changeSet;                               //@synthesize changeSet=_changeSet - In the implementation block
@property (nonatomic,readonly) RBSystemState * systemState;                                       //@synthesize systemState=_systemState - In the implementation block
@property (nonatomic,readonly) NSSet * touchedAssertions;                                         //@synthesize touchedAssertions=_touchedAssertions - In the implementation block
@property (nonatomic,readonly) NSSet * lostStartTimeDefining;                                     //@synthesize lostStartTimeDefining=_lostStartTimeDefining - In the implementation block
@property (nonatomic,readonly) NSSet * gainedStartTimeDefining;                                   //@synthesize gainedStartTimeDefining=_gainedStartTimeDefining - In the implementation block
-(void)resolve;
-(RBProcessStateChangeSet *)changeSet;
-(RBSystemState *)systemState;
-(id<RBEntitlementManaging>)entitlementManager;
-(id<RBBundlePropertiesManaging>)bundlePropertiesManager;
-(void)setAssertionCollection:(RBAssertionCollection *)arg1 ;
-(void)setProcessIndex:(RBProcessIndex *)arg1 ;
-(void)setStateMap:(RBProcessMap *)arg1 ;
-(void)setDomainAttributeManager:(id<RBDomainAttributeManaging>)arg1 ;
-(void)setBundlePropertiesManager:(id<RBBundlePropertiesManaging>)arg1 ;
-(void)setEntitlementManager:(id<RBEntitlementManaging>)arg1 ;
-(NSSet *)gainedStartTimeDefining;
-(NSSet *)lostStartTimeDefining;
-(NSSet *)touchedAssertions;
-(id<RBDomainAttributeManaging>)domainAttributeManager;
-(id)initWithAssertions:(id)arg1 ;
-(id)_createContextForAssertion:(id)arg1 ;
-(RBAssertionCollection *)assertionCollection;
-(RBProcessIndex *)processIndex;
-(RBProcessMap *)stateMap;
-(void)_updateStatesForAssertion:(id)arg1 ;
-(void)_resolveProcessStateForTarget:(id)arg1 ofType:(unsigned long long)arg2 viaAssertion:(id)arg3 ;
-(void)_finalizeStateChangeSet;
-(void)_resolveSystemState;
-(void)_assertionGraphFromAssertion:(id)arg1 graph:(id)arg2 ;
-(id)_assertionGraphFromAssertion:(id)arg1 ;
-(id)_inheritancesForOriginator:(id)arg1 ;
-(id)_originatorInheritancesForAssertion:(id)arg1 ;
-(id)_latestStateForIdentity:(id)arg1 ;
-(void)_suspendOrResumeAssertionsForTarget:(id)arg1 oldState:(id)arg2 newState:(id)arg3 ;
@end

