/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
*/

#import <RunningBoard/RunningBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol RBBundleProperties, RBEntitlementPossessing, RBEntitlementManaging, RBBundlePropertiesManaging, RBDomainAttributeManaging;
@class RBAssertionDescriptorValidator, RBSAssertionDescriptor, RBProcess, RBProcessState, RBConcreteTarget, RBSProcessIdentity, RBSProcessIdentifier, RBAssertionAcquisitionContext;

@interface RBAssertionDescriptorValidatorContext : NSObject <NSCopying> {

	id<RBBundleProperties> _targetProperties;
	id<RBEntitlementPossessing> _originatorEntitlements;
	id<RBEntitlementPossessing> _targetEntitlements;
	unsigned long long _ignoreRestrictions;
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
@property (nonatomic,readonly) id<RBEntitlementPossessing> targetEntitlements; 
@property (nonatomic,readonly) id<RBBundleProperties> targetProperties; 
@property (nonatomic,readonly) BOOL ignoreRestrictions; 
@property (nonatomic,readonly) BOOL targetIsSystem;                                                       //@synthesize targetIsSystem=_targetIsSystem - In the implementation block
+(id)context;
-(void)setTarget:(RBConcreteTarget *)arg1 ;
-(id<RBEntitlementPossessing>)targetEntitlements;
-(RBProcess *)targetProcess;
-(BOOL)targetIsSystem;
-(void)setOriginatorState:(RBProcessState *)arg1 ;
-(void)setDomainAttributeManager:(id<RBDomainAttributeManaging>)arg1 ;
-(RBProcessState *)targetState;
-(void)setEntitlementManager:(id<RBEntitlementManaging>)arg1 ;
-(void)setTargetIdentity:(RBSProcessIdentity *)arg1 ;
-(RBAssertionDescriptorValidator *)assertionDescriptionValidator;
-(RBSProcessIdentity *)targetIdentity;
-(void)setBundlePropertiesManager:(id<RBBundlePropertiesManaging>)arg1 ;
-(void)setTargetIdentifier:(RBSProcessIdentifier *)arg1 ;
-(void)setAssertionDescriptionValidator:(RBAssertionDescriptorValidator *)arg1 ;
-(void)setTargetState:(RBProcessState *)arg1 ;
-(void)popIgnoreRestrictions;
-(void)setOriginatorProcess:(RBProcess *)arg1 ;
-(BOOL)ignoreRestrictions;
-(id<RBBundlePropertiesManaging>)bundlePropertiesManager;
-(id<RBEntitlementPossessing>)originatorEntitlements;
-(void)setAssertionDescriptor:(RBSAssertionDescriptor *)arg1 ;
-(RBAssertionAcquisitionContext *)acquisitionContext;
-(id<RBEntitlementManaging>)entitlementManager;
-(RBSProcessIdentity *)originatorIdentity;
-(RBSProcessIdentifier *)targetIdentifier;
-(RBConcreteTarget *)target;
-(id<RBDomainAttributeManaging>)domainAttributeManager;
-(void)setAcquisitionContext:(RBAssertionAcquisitionContext *)arg1 ;
-(RBProcessState *)originatorState;
-(void)setTargetProcess:(RBProcess *)arg1 ;
-(RBSAssertionDescriptor *)assertionDescriptor;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)pushIgnoreRestrictions;
-(RBProcess *)originatorProcess;
-(id<RBBundleProperties>)targetProperties;
@end

