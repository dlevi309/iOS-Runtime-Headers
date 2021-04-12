/*
* Generated on Monday, March 1, 2021 at 2:34:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AuthenticationServices.framework/AuthenticationServices
*/

#import <AuthenticationServices/_ASExtensionViewController.h>

@protocol _ASPasswordCredentialAuthenticationViewControllerDelegate;
@class ASPasswordCredentialIdentity;

@interface _ASPasswordCredentialAuthenticationViewController : _ASExtensionViewController {

	ASPasswordCredentialIdentity* _credentialIdentity;
	id<_ASPasswordCredentialAuthenticationViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<_ASPasswordCredentialAuthenticationViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<_ASPasswordCredentialAuthenticationViewControllerDelegate>)delegate;
-(void)setDelegate:(id<_ASPasswordCredentialAuthenticationViewControllerDelegate>)arg1 ;
-(id)initWithExtension:(id)arg1 credentialIdentity:(id)arg2 ;
-(void)prepareToCompleteRequestWithHostContext:(id)arg1 credential:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_requestDidFailWithError:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_nonUIRequestDidRequireUserInteraction;
-(void)_finishWithCredential:(id)arg1 error:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

