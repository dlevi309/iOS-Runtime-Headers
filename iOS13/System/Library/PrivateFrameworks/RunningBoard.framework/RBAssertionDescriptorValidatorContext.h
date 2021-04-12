/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
*/

#import <RunningBoard/RunningBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol RBBundleProperties, RBEntitlementPossessing, RBEntitlementManaging, RBBundlePropertiesManaging, RBDomainAttributeManaging;
@class RBAssertionDescriptorValidator, RBSAssertionDescriptor, RBProcess, RBProcessState, RBConcreteTarget, RBSProcessIdentity, RBSProcessIdentifier, RBAssertionAcquisitionContext;

@interface RBAssertionDescriptorValidatorContext : NSObject <NSCopying> {

	id<RBBundleProperties> _targetProperties;
	id<RBEntitlementPossessing> _originatorEntitlements;
	unsigned long long _ignoreEntitlementViolationsCount;
	unsigned long long _ignoreTargetPropertyViolationsCount;
	BOOL _targetIsSystem;
	RBAssertionDescriptorValidator* _assertionDescriptionValidator;
	RBSAssertionDescriptor* _assertionDescriptor;
	RBProcess* _originatorProcess;
	RBProcessState* _originatorState;
	RBConcreteTarget* _target;
	RBProcess* _targetProcess;
	RBSProcessIdentity* _targetIdentity;
	RBSProcessIdentifier* _targetIdentifier;
	RBProcessState* _targetState;
	RBAssertionAcquisitionContext* _acquisitionContext;
	id<RBEntitlementManaging> _entitlementManager;
	id<RBBundlePropertiesManaging> _bundlePropertiesManager;
	id<RBDomainAttributeManaging> _domainAttributeManager;

}

@property (nonatomic,retain) RBAssertionDescriptorValidator * assertionDescriptionValidator;              //@synthesize assertionDescriptionValidator=_assertionDescriptionValidator - In the implementation block
@property (nonatomic,retain) RBSAssertionDescriptor * assertionDescriptor;                                //@synthesize assertionDescriptor=_assertionDescriptor - In the implementation block
@property (nonatomic,retain) RBProcess * originatorProcess;                                               //@synthesize originatorProcess=_originatorProcess - In the implementation block
@property (nonatomic,retain) RBProcessState * originatorState;                                            //@synthesize originatorState=_originatorState - In the implementation block
@property (nonatomic,retain) RBConcreteTarget * target;                                                   //@synthesize target=_target - In the implementation block
@property (nonatomic,retain) RBProcess * targetProcess;                                                   //@synthesize targetProcess=_targetProcess - In the implementation block
@property (nonatomic,retain) RBSProcessIdentity * targetIdentity;                                         //@synthesize targetIdentity=_targetIdentity - In the implementation block
@property (nonatomic,retain) RBSProcessIdentifier * targetIdentifier;                                     //@synthesize targetIdentifier=_targetIdentifier - In the implementation block
@property (nonatomic,retain) RBProcessState * targetState;                                                //@synthesize targetState=_targetState - In the implementation block
@property (nonatomic,retain) RBAssertionAcquisitionContext * acquisitionContext;                          //@synthesize acquisitionContext=_acquisitionContext - In the implementation block
@property (nonatomic,retain) id<RBEntitlementManaging> entitlementManager;                                //@synthesize entitlementManager=_entitlementManager - In the implementation block
@property (nonatomic,retain) id<RBBundlePropertiesManaging> bundlePropertiesManager;                      //@synthesize bundlePropertiesManager=_bundlePropertiesManager - In the implementation block
@property (nonatomic,retain) id<RBDomainAttributeManaging> domainAttributeManager;                        //@synthesize domainAttributeManager=_domainAttributeManager - In the implementation block
@property (nonatomic,readonly) RBSProcessIdentity * originatorIdentity; 
@property (nonatomic,readonly) id<RBEntitlementPossessing> originatorEntitlements; 
@property (nonatomic,readonly) id<RBBundleProperties> targetProperties; 
@property (nonatomic,readonly) BOOL ignoreEntitlementViolations; 
@property (nonatomic,readonly) BOOL ignoreTargetPropertyViolations; 
@property (nonatomic,readonly) BOOL targetIsSystem;                                                       //@synthesize targetIsSystem=_targetIsSystem - In the implementation block
+(id)context;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTarget:(RBConcreteTarget *)arg1 ;
-(RBConcreteTarget *)target;
-(RBProcessState *)targetState;
-(void)setTargetState:(RBProcessState *)arg1 ;
-(RBProcess *)targetProcess;
-(RBSProcessIdentifier *)targetIdentifier;
-(void)setTargetIdentifier:(RBSProcessIdentifier *)arg1 ;
-(RBSProcessIdentity *)targetIdentity;
-(RBSAssertionDescriptor *)assertionDescriptor;
-(id<RBEntitlementPossessing>)originatorEntitlements;
-(RBProcess *)originatorProcess;
-(RBProcessState *)originatorState;
-(id<RBEntitlementManaging>)entitlementManager;
-(BOOL)targetIsSystem;
-(BOOL)ignoreTargetPropertyViolations;
-(id<RBBundleProperties>)targetProperties;
-(id<RBBundlePropertiesManaging>)bundlePropertiesManager;
-(BOOL)ignoreEntitlementViolations;
-(void)setDomainAttributeManager:(id<RBDomainAttributeManaging>)arg1 ;
-(void)setBundlePropertiesManager:(id<RBBundlePropertiesManaging>)arg1 ;
-(void)setEntitlementManager:(id<RBEntitlementManaging>)arg1 ;
-(void)setAssertionDescriptor:(RBSAssertionDescriptor *)arg1 ;
-(void)setOriginatorProcess:(RBProcess *)arg1 ;
-(void)setOriginatorState:(RBProcessState *)arg1 ;
-(void)setTargetProcess:(RBProcess *)arg1 ;
-(void)setTargetIdentity:(RBSProcessIdentity *)arg1 ;
-(void)setAcquisitionContext:(RBAssertionAcquisitionContext *)arg1 ;
-(void)setAssertionDescriptionValidator:(RBAssertionDescriptorValidator *)arg1 ;
-(void)pushIgnoreEntitlementViolations;
-(void)popIgnoreEntitlementViolations;
-(void)pushIgnoreTargetPropertyViolations;
-(void)popIgnoreTargetPropertyViolations;
-(RBSProcessIdentity *)originatorIdentity;
-(RBAssertionDescriptorValidator *)assertionDescriptionValidator;
-(RBAssertionAcquisitionContext *)acquisitionContext;
-(id<RBDomainAttributeManaging>)domainAttributeManager;
@end

