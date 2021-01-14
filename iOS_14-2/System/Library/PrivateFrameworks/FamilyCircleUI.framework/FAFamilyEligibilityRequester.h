/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
*/


@class AAGrandSlamSigner, AIDAAccountManager, NSOperationQueue;

@interface FAFamilyEligibilityRequester : NSObject {

	AAGrandSlamSigner* _grandSlamSigner;
	AIDAAccountManager* _accountManager;
	NSOperationQueue* _networkActivityQueue;
	BOOL _allowsAuthenticationPrompt;

}

@property (assign,nonatomic) BOOL allowsAuthenticationPrompt;              //@synthesize allowsAuthenticationPrompt=_allowsAuthenticationPrompt - In the implementation block
-(BOOL)allowsAuthenticationPrompt;
-(id)init;
-(id)_accountStore;
-(id)_grandSlamSigner;
-(id)initWithAccountManager:(id)arg1 ;
-(void)requestFamilyEligibilityWithCompletion:(/*^block*/id)arg1 ;
-(void)setAllowsAuthenticationPrompt:(BOOL)arg1 ;
-(id)_appleAccount;
@end

