/*
* Generated on Monday, March 1, 2021 at 2:32:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (nonatomic,readonly) NSUUID * identifier;                                                 //@synthesize identifier=_identifier - In the implementation block
+(id)_transformEffectivePoliciesIntoCommunicationPolicies:(id)arg1 ;
+(id)communicationBundleIdentifiers;
+(id)_equivalentCommunicationBundleIdentifiersForCommunicationBundleIdentifier:(id)arg1 ;
+(id)_categoryForCommunicationBundleIdentifier:(id)arg1 ;
+(id)_calculateCommunicationPoliciesWithApplicationPoliciesByBundleIdentifier:(id)arg1 categoryEffectivePolicy:(id)arg2 ;
+(unsigned long long)communicationPolicyForApplicationPolicy:(id)arg1 downtimeEnforced:(BOOL)arg2 ;
-(id)init;
-(void)dealloc;
-(NSUUID *)identifier;
-(id)initWithPolicyChangeHandler:(/*^block*/id)arg1 ;
-(NSArray *)policyTypes;
-(void)_updatePoliciesByBundleIdentifier;
-(DMFApplicationPolicyMonitor *)applicationPolicyMonitor;
-(void)_updateWithPoliciesByBundleIdentifier:(id)arg1 categoryEffectivePolicy:(id)arg2 ;
-(NSDictionary *)policiesByBundleIdentifier;
-(void)setPoliciesByBundleIdentifier:(NSDictionary *)arg1 ;
-(BOOL)didFetchInitialPolicies;
-(void)setDidFetchInitialPolicies:(BOOL)arg1 ;
-(id)requestPoliciesByBundleIdentifierWithError:(id*)arg1 ;
-(void)requestPoliciesByBundleIdentifierWithCompletionHandler:(/*^block*/id)arg1 ;
@end

