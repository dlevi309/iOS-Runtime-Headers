/*
* Generated on Thursday, January 14, 2021 at 2:25:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
*/

#import <libobjc.A.dylib/AAUIGenericTermsRemoteUIDelegate.h>
#import <libobjc.A.dylib/AAUISignInOperationDelegate.h>
#import <libobjc.A.dylib/AASignInFlowControllerDelegate.h>

@class CDPContext, NSSet, AAUIGenericTermsRemoteUI, ACAccountStore, UIViewController, NSString;

@interface AAUISignInFlowControllerDelegate : NSObject <AAUIGenericTermsRemoteUIDelegate, AAUISignInOperationDelegate, AASignInFlowControllerDelegate> {

	/*^block*/id _pendingEnableDataclassesCompletion;
	/*^block*/id _pendingTermsCompletion;
	AAUIGenericTermsRemoteUI* _genericTermsRemoteUI;
	ACAccountStore* _accountStore;
	BOOL skipCDPEnablement;
	BOOL backgroundDataclassEnablement;
	BOOL skipDataclassEnablement;
	BOOL shouldStashLoginResponse;
	CDPContext* cdpContext;
	NSSet* requiredTerms;
	unsigned long long findMyActivationAction;
	UIViewController* _presentingViewController;

}

@property (assign,nonatomic,__weak) UIViewController * presentingViewController;              //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) CDPContext * cdpContext; 
@property (assign,nonatomic) BOOL skipCDPEnablement; 
@property (assign,nonatomic) BOOL backgroundDataclassEnablement; 
@property (assign,nonatomic) BOOL skipDataclassEnablement; 
@property (nonatomic,copy) NSSet * requiredTerms; 
@property (assign,nonatomic) BOOL shouldStashLoginResponse; 
@property (assign,nonatomic) unsigned long long findMyActivationAction; 
-(id)init;
-(id)initWithPresentingViewController:(id)arg1 ;
-(CDPContext *)cdpContext;
-(void)genericTermsRemoteUI:(id)arg1 didFinishWithSuccess:(BOOL)arg2 ;
-(BOOL)shouldStashLoginResponse;
-(void)setShouldStashLoginResponse:(BOOL)arg1 ;
-(UIViewController *)presentingViewController;
-(NSSet *)requiredTerms;
-(BOOL)skipCDPEnablement;
-(void)setPresentingViewController:(UIViewController *)arg1 ;
-(void)signInFlowController:(id)arg1 saveAccount:(id)arg2 withAllDataclassesEnabledIfPossibleWithCompletion:(/*^block*/id)arg3 ;
-(void)signInFlowController:(id)arg1 showAlertWithTitle:(id)arg2 message:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)signInFlowController:(id)arg1 presentGenericTermsUIForAccount:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)signInFlowController:(id)arg1 enableFindMyWithAction:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)skipDataclassEnablement;
-(BOOL)backgroundDataclassEnablement;
-(unsigned long long)findMyActivationAction;
-(void)setCdpContext:(CDPContext *)arg1 ;
-(void)_hasActivationLockSupportedWatchWithCompletion:(/*^block*/id)arg1 ;
-(void)signInOperationManager:(id)arg1 didSaveAccount:(id)arg2 error:(id)arg3 ;
-(void)setSkipCDPEnablement:(BOOL)arg1 ;
-(void)setBackgroundDataclassEnablement:(BOOL)arg1 ;
-(void)setSkipDataclassEnablement:(BOOL)arg1 ;
-(void)setRequiredTerms:(NSSet *)arg1 ;
-(void)setFindMyActivationAction:(unsigned long long)arg1 ;
@end

