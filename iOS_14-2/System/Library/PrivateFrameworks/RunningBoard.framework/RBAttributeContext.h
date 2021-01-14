/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(RBProcess *)targetProcess;
-(BOOL)targetIsSystem;
-(void)setDomainAttributeManager:(id<RBDomainAttributeManaging>)arg1 ;
-(RBInheritanceCollection *)availableInheritances;
-(void)setAssertion:(RBAssertion *)arg1 ;
-(void)setEntitlementManager:(id<RBEntitlementManaging>)arg1 ;
-(void)setInitialProcessState:(RBProcessState *)arg1 ;
-(RBAssertion *)assertion;
-(RBSProcessIdentity *)targetIdentity;
-(void)setBundlePropertiesManager:(id<RBBundlePropertiesManaging>)arg1 ;
-(BOOL)isActiveDueToInheritedEndowment;
-(void)popActiveDueToInheritedEndowment;
-(id<RBBundlePropertiesManaging>)bundlePropertiesManager;
-(void)pushActiveDueToInheritedEndowment;
-(RBSAssertionIdentifier *)assertionID;
-(id<RBEntitlementManaging>)entitlementManager;
-(void)setAvailableInheritances:(RBInheritanceCollection *)arg1 ;
-(RBConcreteTarget *)target;
-(id<RBDomainAttributeManaging>)domainAttributeManager;
-(RBProcessState *)initialProcessState;
@end

