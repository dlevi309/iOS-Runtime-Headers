/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
*/


@protocol RBDomainAttributeManaging, RBBundlePropertiesManaging, RBEntitlementManaging;
@class RBAssertionCollection, RBProcessIndex, RBProcessMap;

@interface RBAssertionStateResolver : NSObject {

	RBAssertionCollection* _assertionCollection;
	RBProcessIndex* _processIndex;
	RBProcessMap* _stateMap;
	id<RBDomainAttributeManaging> _domainAttributeManager;
	id<RBBundlePropertiesManaging> _bundlePropertiesManager;
	id<RBEntitlementManaging> _entitlementManager;

}

@property (nonatomic,retain) RBAssertionCollection * assertionCollection;                         //@synthesize assertionCollection=_assertionCollection - In the implementation block
@property (nonatomic,retain) RBProcessIndex * processIndex;                                       //@synthesize processIndex=_processIndex - In the implementation block
@property (nonatomic,retain) RBProcessMap * stateMap;                                             //@synthesize stateMap=_stateMap - In the implementation block
@property (nonatomic,retain) id<RBDomainAttributeManaging> domainAttributeManager;                //@synthesize domainAttributeManager=_domainAttributeManager - In the implementation block
@property (nonatomic,retain) id<RBBundlePropertiesManaging> bundlePropertiesManager;              //@synthesize bundlePropertiesManager=_bundlePropertiesManager - In the implementation block
@property (nonatomic,retain) id<RBEntitlementManaging> entitlementManager;                        //@synthesize entitlementManager=_entitlementManager - In the implementation block
-(void)setDomainAttributeManager:(id<RBDomainAttributeManaging>)arg1 ;
-(void)setEntitlementManager:(id<RBEntitlementManaging>)arg1 ;
-(RBProcessMap *)stateMap;
-(void)setBundlePropertiesManager:(id<RBBundlePropertiesManaging>)arg1 ;
-(id)assertionDescriptorsWithFlattenedAttributes:(BOOL)arg1 ;
-(void)setStateMap:(RBProcessMap *)arg1 ;
-(void)setAssertionCollection:(RBAssertionCollection *)arg1 ;
-(id<RBBundlePropertiesManaging>)bundlePropertiesManager;
-(RBProcessIndex *)processIndex;
-(id<RBEntitlementManaging>)entitlementManager;
-(RBAssertionCollection *)assertionCollection;
-(id<RBDomainAttributeManaging>)domainAttributeManager;
-(void)setProcessIndex:(RBProcessIndex *)arg1 ;
-(id)resolveForAssertions:(id)arg1 ;
@end

