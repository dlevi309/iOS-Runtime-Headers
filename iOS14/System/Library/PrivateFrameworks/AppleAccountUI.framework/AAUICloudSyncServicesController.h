/*
* Generated on Thursday, January 14, 2021 at 2:25:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
*/


@class ACAccountStore, ACAccount, NSMutableDictionary, NSMutableArray, MFAccountValidator, AAAutoAccountVerifier;

@interface AAUICloudSyncServicesController : NSObject {

	ACAccountStore* _accountStore;
	ACAccount* _account;
	NSMutableDictionary* _queuedDataclassActions;
	NSMutableArray* _dataclassesRequiringMergeDecision;
	NSMutableDictionary* _queuedDataclassStates;
	BOOL _didUserConsentToMerge;
	BOOL _isVerifyingExistingEmailAccount;
	MFAccountValidator* _validator;
	AAAutoAccountVerifier* _verifier;
	/*^block*/id _handler;

}
+(id)_domainFromAddress:(id)arg1 ;
+(id)_usernameFromAddress:(id)arg1 ;
-(id)init;
-(void)accountValidator:(id)arg1 finishedValidationOfAccount:(id)arg2 usedSSL:(BOOL)arg3 ;
-(id)_account;
-(void)_presentMergeConfirmationForDataclasses:(id)arg1 account:(id)arg2 ;
-(void)_addMailAccount:(id)arg1 ;
-(void)setCloudServicesEnabled:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)setDeviceLocatorEnabled:(BOOL)arg1 ;
-(void)setBackupEnabled:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)completeEnablingCloudServicesWithCompletion:(/*^block*/id)arg1 ;
-(void)verifyAccountWithAppleID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_validateMailAccount:(id)arg1 ;
@end

