/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
*/


@protocol RBDomainAttributeManaging, RBBundlePropertiesManaging, RBEntitlementManaging;
@class RBAssertion, RBSAssertionIdentifier, RBConcreteTarget, RBProcess, RBSProcessIdentity, RBProcessState, RBInheritanceCollection;

@interface RBAttributeContext : NSObject {

	unsigned long long _activeDueToInheritedEndowmentCount;
	BOOL _targetIsSystem;
	RBAssertion* _assertion;
	RBSAssertionIdentifier* _assertionID;
	RBConcreteTarget* _target;
	RBProcess* _targetProcess;
	RBSProcessIdentity* _targetIdentity;
	RBProcessState* _initialProcessState;
	RBInheritanceCollection* _availableInheritances;
	id<RBDomainAttributeManaging> _domainAttributeManager;
	id<RBBundlePropertiesManaging> _bundlePropertiesManager;
	id<RBEntitlementManaging> _entitlementManager;

}

@property (nonatomic,retain) RBAssertion * assertion;                                             //@synthesize assertion=_assertion - In the implementation block
@property (nonatomic,readonly) RBSAssertionIdentifier * assertionID;                              //@synthesize assertionID=_assertionID - In the implementation block
@property (nonatomic,readonly) RBConcreteTarget * target;                                         //@synthesize target=_target - In the implementation block
@property (nonatomic,readonly) BOOL targetIsSystem;                                               //@synthesize targetIsSystem=_targetIsSystem - In the implementation block
@property (nonatomic,readonly) RBProcess * targetProcess;                                         //@synthesize targetProcess=_targetProcess - In the implementation block
@property (nonatomic,readonly) RBSProcessIdentity * targetIdentity;                               //@synthesize targetIdentity=_targetIdentity - In the implementation block
@property (nonatomic,retain) RBProcessState * initialProcessState;                                //@synthesize initialProcessState=_initialProcessState - In the implementation block
@property (nonatomic,retain) RBInheritanceCollection * availableInheritances;                     //@synthesize availableInheritances=_availableInheritances - In the implementation block
@property (nonatomic,retain) id<RBDomainAttributeManaging> domainAttributeManager;                //@synthesize domainAttributeManager=_domainAttributeManager - In the implementation block
@property (nonatomic,retain) id<RBBundlePropertiesManaging> bundlePropertiesManager;              //@synthesize bundlePropertiesManager=_bundlePropertiesManager - In the implementation block
@property (nonatomic,retain) id<RBEntitlementManaging> entitlementManager;                        //@synthesize entitlementManager=_entitlementManager - In the implementation block
@property (nonatomic,readonly) BOOL isActiveDueToInheritedEndowment; 
-(RBConcreteTarget *)target;
-(RBAssertion *)assertion;
-(void)setAssertion:(RBAssertion *)arg1 ;
-(RBProcess *)targetProcess;
-(RBSAssertionIdentifier *)assertionID;
-(BOOL)isActiveDueToInheritedEndowment;
-(RBSProcessIdentity *)targetIdentity;
-(RBInheritanceCollection *)availableInheritances;
-(id<RBEntitlementManaging>)entitlementManager;
-(BOOL)targetIsSystem;
-(id<RBBundlePropertiesManaging>)bundlePropertiesManager;
-(RBProcessState *)initialProcessState;
-(void)setDomainAttributeManager:(id<RBDomainAttributeManaging>)arg1 ;
-(void)setBundlePropertiesManager:(id<RBBundlePropertiesManaging>)arg1 ;
-(void)setEntitlementManager:(id<RBEntitlementManaging>)arg1 ;
-(void)setInitialProcessState:(RBProcessState *)arg1 ;
-(id<RBDomainAttributeManaging>)domainAttributeManager;
-(void)pushActiveDueToInheritedEndowment;
-(void)popActiveDueToInheritedEndowment;
-(void)setAvailableInheritances:(RBInheritanceCollection *)arg1 ;
@end

