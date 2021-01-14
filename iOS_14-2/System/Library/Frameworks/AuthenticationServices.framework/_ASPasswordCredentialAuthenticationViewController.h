/*
* Generated on Thursday, January 14, 2021 at 2:26:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AuthenticationServices.framework/AuthenticationServices
*/

#import <AuthenticationServices/_ASExtensionViewController.h>
#import <libobjc.A.dylib/_ASCredentialProviderExtensionHostContextDelegate.h>

@protocol _ASPasswordCredentialAuthenticationViewControllerDelegate;
@class ASPasswordCredentialIdentity, NSString;

@interface _ASPasswordCredentialAuthenticationViewController : _ASExtensionViewController <_ASCredentialProviderExtensionHostContextDelegate> {

	ASPasswordCredentialIdentity* _credentialIdentity;
	id<_ASPasswordCredentialAuthenticationViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<_ASPasswordCredentialAuthenticationViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<_ASPasswordCredentialAuthenticationViewControllerDelegate>)delegate;
-(void)setDelegate:(id<_ASPasswordCredentialAuthenticationViewControllerDelegate>)arg1 ;
-(id)initWithExtension:(id)arg1 credentialIdentity:(id)arg2 ;
-(void)_nonUIRequestDidRequireUserInteraction;
-(void)_requestDidFailWithError:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)prepareToCompleteRequestWithHostContext:(id)arg1 credential:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_finishWithCredential:(id)arg1 error:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

