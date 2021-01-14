/*
* Generated on Thursday, January 14, 2021 at 2:26:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AuthenticationServices.framework/AuthenticationServices
*/

#import <AuthenticationServices/_ASExtensionViewController.h>
#import <libobjc.A.dylib/_ASCredentialProviderExtensionHostContextDelegate.h>

@protocol _ASCredentialProviderExtensionConfigurationViewControllerDelegate;
@class NSString;

@interface _ASCredentialProviderExtensionConfigurationViewController : _ASExtensionViewController <_ASCredentialProviderExtensionHostContextDelegate> {

	id<_ASCredentialProviderExtensionConfigurationViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<_ASCredentialProviderExtensionConfigurationViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<_ASCredentialProviderExtensionConfigurationViewControllerDelegate>)delegate;
-(void)setDelegate:(id<_ASCredentialProviderExtensionConfigurationViewControllerDelegate>)arg1 ;
-(void)_requestDidFailWithError:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)prepareToCompleteExtensionConfigurationRequestWithHost:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_finishWithSuccess:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)beginConfiguringExtension;
@end

