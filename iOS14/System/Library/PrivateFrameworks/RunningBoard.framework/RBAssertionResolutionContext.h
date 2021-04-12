/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

@property (nonatomic,readonly) RBProcessStateChangeSet * changeSet;              //@synthesize changeSet=_changeSet - In the implementation block
@property (nonatomic,readonly) RBSystemState * systemState;                      //@synthesize systemState=_systemState - In the implementation block
@property (nonatomic,readonly) NSSet * touchedAssertions;                        //@synthesize touchedAssertions=_touchedAssertions - In the implementation block
@property (nonatomic,readonly) NSSet * lostStartTimeDefining;                    //@synthesize lostStartTimeDefining=_lostStartTimeDefining - In the implementation block
@property (nonatomic,readonly) NSSet * gainedStartTimeDefining;                  //@synthesize gainedStartTimeDefining=_gainedStartTimeDefining - In the implementation block
-(RBSystemState *)systemState;
-(RBProcessStateChangeSet *)changeSet;
-(void)_finalizeStateChangeSet;
-(NSSet *)touchedAssertions;
-(id)_originatorInheritancesForAssertion:(id)arg1 ;
-(id)_assertionGraphFromAssertion:(id)arg1 ;
-(NSSet *)lostStartTimeDefining;
-(NSSet *)gainedStartTimeDefining;
-(void)_updateStatesForAssertion:(id)arg1 ;
-(void)_resolveSystemState;
-(void)_suspendOrResumeAssertionsForTarget:(id)arg1 oldState:(id)arg2 newState:(id)arg3 ;
-(void)_resolveProcessStateForTarget:(id)arg1 ofType:(unsigned long long)arg2 viaAssertion:(id)arg3 ;
-(void)_assertionGraphFromAssertion:(id)arg1 graph:(id)arg2 ;
-(id)_latestStateForIdentity:(id)arg1 ;
-(id)_inheritancesForOriginator:(id)arg1 ;
@end

