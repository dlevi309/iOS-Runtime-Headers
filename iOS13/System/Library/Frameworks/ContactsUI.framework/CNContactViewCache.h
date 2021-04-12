/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(BOOL)shouldIgnorePolicyOfContactInGuarianRestrictedContainer:(id)arg1 ;
+(BOOL)isCandidatePolicy:(id)arg1 ofContactInCandidateContainerWithType:(long long)arg2 preferredOverPolicy:(id)arg3 ofContactInContainerWithType:(long long)arg4 ;
-(CNContactStore *)contactStore;
-(void)setContactStore:(CNContactStore *)arg1 ;
-(CNCache *)cachedAccounts;
-(void)setCachedAccounts:(CNCache *)arg1 ;
-(id)containerForContact:(id)arg1 ;
-(id)nts_lazyContactStore;
-(id)policyForContact:(id)arg1 ;
-(id)policyForDefaultContainer;
-(id)accountForContact:(id)arg1 ;
-(void)resetCache;
-(CNCache *)cachedContainers;
-(CNCache *)cachedPolicies;
-(id)_policyForContact:(id)arg1 ;
-(id)defaultContainerPolicy;
-(id)bestPolicyForContact:(id)arg1 ;
-(id)_accountForContact:(id)arg1 ;
-(void)setCachedContainers:(CNCache *)arg1 ;
-(void)setCachedPolicies:(CNCache *)arg1 ;
@end

