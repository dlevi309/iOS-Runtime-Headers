/*
* Generated on Monday, March 1, 2021 at 2:34:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AuthenticationServices.framework/AuthenticationServices
*/

#import <AuthenticationServices/_ASExtensionViewController.h>

@protocol _ASCredentialProviderExtensionConfigurationViewControllerDelegate;
@interface _ASCredentialProviderExtensionConfigurationViewController : _ASExtensionViewController {

	id<_ASCredentialProviderExtensionConfigurationViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<_ASCredentialProviderExtensionConfigurationViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<_ASCredentialProviderExtensionConfigurationViewControllerDelegate>)delegate;
-(void)setDelegate:(id<_ASCredentialProviderExtensionConfigurationViewControllerDelegate>)arg1 ;
-(void)prepareToCompleteExtensionConfigurationRequestWithHost:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_finishWithSuccess:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)beginConfiguringExtension;
-(void)_requestDidFailWithError:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

