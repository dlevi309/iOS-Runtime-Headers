/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
*/


@protocol AASignInFlowControllerDelegate, CDPStateUIProvider;
@class ACAccountStore, CDPContext, CUMessageSession;

@interface AASignInFlowController : NSObject {

	ACAccountStore* _accountStore;
	CDPContext* _cdpContextForAccount;
	BOOL _pendingSignIn;
	BOOL _existingAccount;
	BOOL _shouldAutomaticallySaveSignInResults;
	BOOL _ignoreLockAssertErrors;
	id<AASignInFlowControllerDelegate> _delegate;
	id<CDPStateUIProvider> _cdpUIProvider;
	CUMessageSession* _messageSession;

}

@property (assign,nonatomic) BOOL ignoreLockAssertErrors;                                     //@synthesize ignoreLockAssertErrors=_ignoreLockAssertErrors - In the implementation block
@property (nonatomic,retain) CUMessageSession * messageSession;                               //@synthesize messageSession=_messageSession - In the implementation block
@property (assign,nonatomic,__weak) id<AASignInFlowControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<CDPStateUIProvider> cdpUIProvider;                     //@synthesize cdpUIProvider=_cdpUIProvider - In the implementation block
@property (assign,nonatomic) BOOL shouldAutomaticallySaveSignInResults;                       //@synthesize shouldAutomaticallySaveSignInResults=_shouldAutomaticallySaveSignInResults - In the implementation block
-(id)init;
-(id<AASignInFlowControllerDelegate>)delegate;
-(BOOL)_shouldStashLoginResponse;
-(id<CDPStateUIProvider>)cdpUIProvider;
-(void)setDelegate:(id<AASignInFlowControllerDelegate>)arg1 ;
-(id)_updateOrCreateAppleAccountForAuthResults:(id)arg1 accountCreationError:(id*)arg2 ;
-(void)_delegate_presentAccountCreationError:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_stashLoginResponseWithAuthenticationResults:(id)arg1 appleAccount:(id)arg2 ;
-(void)_enableFindMyIfPossibleWithAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)_delegateRequiresTerms;
-(void)_delegate_presentGenericTermsUIforAccount:(id)arg1 serverError:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_saveTermsWithAuthResults:(id)arg1 account:(id)arg2 ;
-(void)_registerAndVerifyLoginForiCloudAccount:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_prepareExistingAppleAccountForSignIn:(id)arg1 withAuthResults:(id)arg2 accountCreationError:(id*)arg3 ;
-(void)_updateAppleAccount:(id)arg1 withAuthenticationResults:(id)arg2 ;
-(id)_createNewAppleAccountWithAuthResults:(id)arg1 accountCreationError:(id*)arg2 ;
-(void)_createCDPContextForPrimaryAccount:(id)arg1 withAuthResults:(id)arg2 ;
-(void)_updateAppleAccountIfNecessary:(id)arg1 withAltDSID:(id)arg2 rawPassword:(id)arg3 ;
-(id)_userPersonaUniqueString;
-(id)_aaErrorForErrorCode:(long long)arg1 ;
-(id)_nameForCloudService;
-(CUMessageSession *)messageSession;
-(BOOL)ignoreLockAssertErrors;
-(void)_verifyLoginResponseForiCloudAccount:(id)arg1 withSuccess:(BOOL)arg2 error:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_delegate_presentValidationAlertForError:(id)arg1 forAccount:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_saveAccount:(id)arg1 withAllDataclassesEnabledIfPossibleWithCompletion:(/*^block*/id)arg2 ;
-(void)_validateCDPStateForAccount:(id)arg1 withCDPContext:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)_shouldEnableDataclassesForAccount:(id)arg1 ;
-(unsigned long long)_findMyActivationAction;
-(BOOL)shouldAutomaticallySaveSignInResults;
-(void)_delegate_enableFindMyWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)_delegateWantsToBackgroundDataclassEnablement;
-(id)_titleForSignInFailureAlert;
-(void)_backgroundSaveAccount:(id)arg1 withDataclassEnablement:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_delegate_saveAccount:(id)arg1 withDataclassEnablement:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_saveAccount:(id)arg1 withDataclassEnablement:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)_aaErrorForErrorCode:(long long)arg1 withUnderlyingError:(id)arg2 ;
-(id)_titleForVerificationFailureAlert;
-(void)setCdpUIProvider:(id<CDPStateUIProvider>)arg1 ;
-(id)_aaMessageForErrorCode:(long long)arg1 ;
-(BOOL)_isDuplicateAccountError:(long long)arg1 ;
-(BOOL)_delegateWantsToSkipDataclassEnablement;
-(void)signInWithIDMSAuthenticationResults:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)prewarmOperationsWithCompletion:(/*^block*/id)arg1 ;
-(void)setShouldAutomaticallySaveSignInResults:(BOOL)arg1 ;
-(void)setIgnoreLockAssertErrors:(BOOL)arg1 ;
-(void)setMessageSession:(CUMessageSession *)arg1 ;
@end

