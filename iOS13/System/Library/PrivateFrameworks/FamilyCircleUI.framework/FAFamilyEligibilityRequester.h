/*
* Generated on Monday, March 1, 2021 at 2:34:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
*/


@class AAGrandSlamSigner, AIDAAccountManager, NSOperationQueue;

@interface FAFamilyEligibilityRequester : NSObject {

	AAGrandSlamSigner* _grandSlamSigner;
	AIDAAccountManager* _accountManager;
	NSOperationQueue* _networkActivityQueue;

}
-(id)init;
-(id)_accountStore;
-(id)_appleAccount;
-(id)_grandSlamSigner;
-(id)initWithAccountManager:(id)arg1 ;
-(void)requestFamilyEligibilityWithCompletion:(/*^block*/id)arg1 ;
@end

