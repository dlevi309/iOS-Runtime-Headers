/*
* Generated on Monday, March 1, 2021 at 2:35:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
*/

#import <libobjc.A.dylib/RMExtensionConfigurationSubscriberRequestHandling.h>

@protocol RMExtensionConfigurationApplicator;
@class NSConditionLock, RMConfigurationSubscriberClient, RMAssetResolver, RMPolicyStore, NSArray, NSString;

@interface RMExtensionConfigurationSubscriber : NSObject <RMExtensionConfigurationSubscriberRequestHandling> {

	NSConditionLock* _configurationSubscriberClientLock;
	RMConfigurationSubscriberClient* _configurationSubscriberClient;
	RMAssetResolver* _assetResolver;
	RMPolicyStore* _policyStore;
	id<RMExtensionConfigurationApplicator> _applicator;
	NSArray* _configurationTypes;

}

@property (nonatomic,retain) RMConfigurationSubscriberClient * configurationSubscriberClient;              //@synthesize configurationSubscriberClient=_configurationSubscriberClient - In the implementation block
@property (nonatomic,retain) RMAssetResolver * assetResolver;                                              //@synthesize assetResolver=_assetResolver - In the implementation block
@property (nonatomic,retain) RMPolicyStore * policyStore;                                                  //@synthesize policyStore=_policyStore - In the implementation block
@property (nonatomic,readonly) id<RMExtensionConfigurationApplicator> applicator;                          //@synthesize applicator=_applicator - In the implementation block
@property (nonatomic,readonly) NSArray * configurationTypes;                                               //@synthesize configurationTypes=_configurationTypes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedSubscriber;
-(id)init;
-(id<RMExtensionConfigurationApplicator>)applicator;
-(RMAssetResolver *)assetResolver;
-(NSArray *)configurationTypes;
-(RMConfigurationSubscriberClient *)configurationSubscriberClient;
-(id)initWithConfigurationSubscriberClient:(id)arg1 assetResolver:(id)arg2 policyStore:(id)arg3 applicator:(id)arg4 configurationTypes:(id)arg5 ;
-(RMPolicyStore *)policyStore;
-(void)fetchThenApplyConfigurationsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setConfigurationSubscriberClient:(RMConfigurationSubscriberClient *)arg1 ;
-(void)setAssetResolver:(RMAssetResolver *)arg1 ;
-(void)setPolicyStore:(RMPolicyStore *)arg1 ;
@end

