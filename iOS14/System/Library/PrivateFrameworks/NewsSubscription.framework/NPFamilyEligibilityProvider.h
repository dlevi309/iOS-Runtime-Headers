/*
* Generated on Thursday, January 14, 2021 at 2:24:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsSubscription.framework/NewsSubscription
*/

#import <libobjc.A.dylib/AIDAAccountManagerDelegate.h>
#import <libobjc.A.dylib/NPFamilyEligibilityProviderType.h>

@class ACAccountStore, AIDAAccountManager, FAFamilyEligibilityRequester, NSString;

@interface NPFamilyEligibilityProvider : NSObject <AIDAAccountManagerDelegate, NPFamilyEligibilityProviderType> {

	ACAccountStore* _store;
	AIDAAccountManager* _accountManager;
	FAFamilyEligibilityRequester* _eligibilityRequester;

}

@property (nonatomic,readonly) ACAccountStore * store;                                           //@synthesize store=_store - In the implementation block
@property (nonatomic,readonly) AIDAAccountManager * accountManager;                              //@synthesize accountManager=_accountManager - In the implementation block
@property (nonatomic,readonly) FAFamilyEligibilityRequester * eligibilityRequester;              //@synthesize eligibilityRequester=_eligibilityRequester - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(AIDAAccountManager *)accountManager;
-(id)init;
-(ACAccountStore *)store;
-(id)accountsForAccountManager:(id)arg1 ;
-(id)requestFamilyEligibility;
-(FAFamilyEligibilityRequester *)eligibilityRequester;
@end

