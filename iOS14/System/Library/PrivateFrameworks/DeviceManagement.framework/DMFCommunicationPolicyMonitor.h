/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
*/


@class NSDictionary, DMFApplicationPolicyMonitor, NSArray, NSUUID;

@interface DMFCommunicationPolicyMonitor : NSObject {

	BOOL _didFetchInitialPolicies;
	NSDictionary* _policiesByBundleIdentifier;
	DMFApplicationPolicyMonitor* _applicationPolicyMonitor;
	NSArray* _policyTypes;
	NSUUID* _identifier;

}

@property (nonatomic,copy) NSDictionary * policiesByBundleIdentifier;                               //@synthesize policiesByBundleIdentifier=_policiesByBundleIdentifier - In the implementation block
@property (nonatomic,readonly) DMFApplicationPolicyMonitor * applicationPolicyMonitor;              //@synthesize applicationPolicyMonitor=_applicationPolicyMonitor - In the implementation block
@property (assign,nonatomic) BOOL didFetchInitialPolicies;                                          //@synthesize didFetchInitialPolicies=_didFetchInitialPolicies - In the implementation block
@property (nonatomic,copy,readonly) NSArray * policyTypes;                                          //@synthesize policyTypes=_policyTypes - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * identifier;                                            //@synthesize identifier=_identifier - In the implementation block
+(id)new;
+(id)_transformEffectivePoliciesIntoCommunicationPolicies:(id)arg1 ;
+(id)_equivalentCommunicationBundleIdentifiersForCommunicationBundleIdentifier:(id)arg1 ;
+(unsigned long long)communicationPolicyForApplicationPolicy:(id)arg1 downtimeEnforced:(BOOL)arg2 ;
+(id)_categoryForCommunicationBundleIdentifier:(id)arg1 ;
+(id)_calculateCommunicationPoliciesWithApplicationPoliciesByBundleIdentifier:(id)arg1 categoryEffectivePolicy:(id)arg2 ;
+(id)communicationBundleIdentifiers;
-(void)_updateWithPoliciesByBundleIdentifier:(id)arg1 categoryEffectivePolicy:(id)arg2 ;
-(NSDictionary *)policiesByBundleIdentifier;
-(id)init;
-(void)_updatePoliciesByBundleIdentifier;
-(void)setPoliciesByBundleIdentifier:(NSDictionary *)arg1 ;
-(id)requestPoliciesByBundleIdentifierWithError:(id*)arg1 ;
-(id)initWithPolicyChangeHandler:(/*^block*/id)arg1 ;
-(NSArray *)policyTypes;
-(void)setDidFetchInitialPolicies:(BOOL)arg1 ;
-(void)requestPoliciesByBundleIdentifierWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)didFetchInitialPolicies;
-(DMFApplicationPolicyMonitor *)applicationPolicyMonitor;
-(NSUUID *)identifier;
-(void)dealloc;
@end

