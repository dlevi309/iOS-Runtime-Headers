/*
* Generated on Thursday, January 14, 2021 at 2:26:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AuthenticationServices.framework/AuthenticationServices
*/

#import <libobjc.A.dylib/_ASAccountAuthenticationModificationRemoteViewControllerDelegate.h>

@protocol ASAccountAuthenticationModificationControllerDelegate, ASAccountAuthenticationModificationControllerPresentationContextProviding;
@class _ASAccountAuthenticationModificationRemoteViewController, ASAccountAuthenticationModificationRequest, NSExtension, NSString;

@interface ASAccountAuthenticationModificationController : NSObject <_ASAccountAuthenticationModificationRemoteViewControllerDelegate> {

	_ASAccountAuthenticationModificationRemoteViewController* _accountAuthenticationModificationRemoteViewController;
	ASAccountAuthenticationModificationRequest* _request;
	ASAccountAuthenticationModificationController* _referenceToSelf;
	NSExtension* _helperExtension;
	id<ASAccountAuthenticationModificationControllerDelegate> _delegate;
	id<ASAccountAuthenticationModificationControllerPresentationContextProviding> _presentationContextProvider;

}

@property (assign,nonatomic,__weak) id<ASAccountAuthenticationModificationControllerDelegate> delegate;                                                     //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<ASAccountAuthenticationModificationControllerPresentationContextProviding> presentationContextProvider;              //@synthesize presentationContextProvider=_presentationContextProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_invalidate;
-(id)init;
-(id<ASAccountAuthenticationModificationControllerDelegate>)delegate;
-(void)performRequest:(id)arg1 ;
-(void)setDelegate:(id<ASAccountAuthenticationModificationControllerDelegate>)arg1 ;
-(id)_viewControllerToPresentFrom;
-(void)setPresentationContextProvider:(id<ASAccountAuthenticationModificationControllerPresentationContextProviding>)arg1 ;
-(void)accountModificationRemoteViewControllerDidFinishUpgradeToSignInWithApple:(id)arg1 userInfo:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)accountModificationRemoteViewController:(id)arg1 didFinishWithCredential:(id)arg2 userInfo:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)accountModificationRemoteViewController:(id)arg1 requestCanceledWithError:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)presentAccountModificationRemoteViewController:(id)arg1 ;
-(void)dismissAccountModificationRemoteViewController:(id)arg1 ;
-(void)accountModificationRemoteViewController:(id)arg1 viewServiceDidTerminateWithError:(id)arg2 ;
-(id<ASAccountAuthenticationModificationControllerPresentationContextProviding>)presentationContextProvider;
-(void)_performReplacePasswordWithSignInWithAppleRequest:(id)arg1 ;
-(void)_showUpgradeToStrongPasswordPromptForRequest:(id)arg1 ;
-(void)_failRequestWithError:(id)arg1 ;
-(void)_requestRemoteViewController:(/*^block*/id)arg1 ;
-(void)_performUpgradePasswordToStrongPasswordRequest:(id)arg1 ;
@end

