/*
* Generated on Thursday, January 14, 2021 at 2:20:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <libobjc.A.dylib/CNUICoreParentContainerProvider.h>

@class CNCache, CNContactStore, NSString;

@interface CNContactViewCache : NSObject <CNUICoreParentContainerProvider> {

	CNCache* _cachedContainers;
	CNCache* _cachedPolicies;
	CNCache* _cachedAccounts;
	CNContactStore* _contactStore;

}

@property (nonatomic,retain) CNCache * cachedContainers;                 //@synthesize cachedContainers=_cachedContainers - In the implementation block
@property (nonatomic,retain) CNCache * cachedPolicies;                   //@synthesize cachedPolicies=_cachedPolicies - In the implementation block
@property (nonatomic,retain) CNCache * cachedAccounts;                   //@synthesize cachedAccounts=_cachedAccounts - In the implementation block
@property (nonatomic,retain) CNContactStore * contactStore;              //@synthesize contactStore=_contactStore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isCandidatePolicy:(id)arg1 ofContactInCandidateContainerWithType:(long long)arg2 preferredOverPolicy:(id)arg3 ofContactInContainerWithType:(long long)arg4 ;
+(BOOL)shouldIgnorePolicyOfContactInGuarianRestrictedContainer:(id)arg1 ;
-(void)setContactStore:(CNContactStore *)arg1 ;
-(void)resetCache;
-(CNContactStore *)contactStore;
-(CNCache *)cachedAccounts;
-(CNCache *)cachedPolicies;
-(id)containerForContact:(id)arg1 ;
-(id)policyForContact:(id)arg1 ;
-(id)policyForDefaultContainer;
-(id)accountForContact:(id)arg1 ;
-(CNCache *)cachedContainers;
-(id)_policyForContact:(id)arg1 ;
-(id)predicateForContainerForContact:(id)arg1 inStore:(id)arg2 ;
-(id)defaultContainerPolicy;
-(id)_accountForContact:(id)arg1 ;
-(id)bestPolicyForContact:(id)arg1 ;
-(void)setCachedContainers:(CNCache *)arg1 ;
-(void)setCachedPolicies:(CNCache *)arg1 ;
-(void)setCachedAccounts:(CNCache *)arg1 ;
-(id)nts_lazyContactStore;
@end

