/*
* Generated on Thursday, January 14, 2021 at 2:22:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
*/

#import <libobjc.A.dylib/AAUIGenericTermsRemoteUIDelegate.h>

@protocol OS_dispatch_queue;
@class ACAccountStore, AAUIGenericTermsRemoteUI, SFSession, TRSession, NSMutableArray, TROperationQueue, NSObject, SFDevice, UIViewController, NSString;

@interface SFAuthenticateAccountsSession : NSObject <AAUIGenericTermsRemoteUIDelegate> {

	BOOL _activateCalled;
	BOOL _invalidateCalled;
	unsigned long long _startTicks;
	int _accountsState;
	ACAccountStore* _accountStore;
	int _iCloudTermsState;
	AAUIGenericTermsRemoteUI* _termsRemoteUI;
	SFSession* _sfSession;
	int _sfSessionState;
	BOOL _sessionSecured;
	int _pairVerifyState;
	int _pairSetupState;
	int _infoExchangeState;
	unsigned _targetedAccountTypes;
	int _trSessionState;
	TRSession* _trSession;
	NSMutableArray* _trOperations;
	TROperationQueue* _trOperationQueue;
	BOOL _trAuthenticationEnabled;
	int _trAuthenticationState;
	int _finishState;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	SFDevice* _peerDevice;
	UIViewController* _presentingViewController;
	/*^block*/id _progressHandler;
	/*^block*/id _promptForPINHandler;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;               //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,retain) SFDevice * peerDevice;                                    //@synthesize peerDevice=_peerDevice - In the implementation block
@property (nonatomic,retain) UIViewController * presentingViewController;              //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (nonatomic,copy) id progressHandler;                                         //@synthesize progressHandler=_progressHandler - In the implementation block
@property (nonatomic,copy) id promptForPINHandler;                                     //@synthesize promptForPINHandler=_promptForPINHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_run;
-(void)_cleanup;
-(id)init;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(int)_runSFSessionStart;
-(int)_validateAccounts;
-(int)_runPairVerify;
-(int)_validateiCloudAccountTerms;
-(int)_runPairSetup;
-(int)_runInfoExchange;
-(int)_runTRSessionStart;
-(int)_runTRAuthentication;
-(void)_handleShowTermsUI:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(void)_runInfoExchangeRequest;
-(id)_trTargetedServices;
-(id)_availableAccountsToSignIn;
-(void)_runInfoExchangeResponse:(id)arg1 error:(id)arg2 ;
-(void)_presentiCloudTermsUIWithAccount:(id)arg1 ;
-(void)genericTermsRemoteUI:(id)arg1 didFinishWithSuccess:(BOOL)arg2 ;
-(void)__runFinishWithSFSession:(id)arg1 ;
-(int)__validateAccountsWithAccountStore:(id)arg1 ;
-(SFDevice *)peerDevice;
-(void)_reportError:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(UIViewController *)presentingViewController;
-(void)activate;
-(void)pairSetupTryPIN:(id)arg1 ;
-(id)promptForPINHandler;
-(void)setPromptForPINHandler:(id)arg1 ;
-(void)setPresentingViewController:(UIViewController *)arg1 ;
-(void)setProgressHandler:(id)arg1 ;
-(void)setPeerDevice:(SFDevice *)arg1 ;
-(void)invalidate;
-(id)progressHandler;
-(int)_runFinish;
-(void)dealloc;
@end

