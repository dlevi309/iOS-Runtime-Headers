/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariServices/SFPasswordServiceViewController.h>
#import <libobjc.A.dylib/SFCredentialProviderExtensionManagerObserver.h>
#import <libobjc.A.dylib/_ASPasswordCredentialAuthenticationViewControllerDelegate.h>
#import <libobjc.A.dylib/_SFAuthenticationClient.h>
#import <libobjc.A.dylib/_SFAuthenticationContextDelegate.h>
#import <libobjc.A.dylib/SFExternalPasswordCredentialServiceViewControllerProtocol.h>

@class _SFAuthenticationContext, _ASPasswordCredentialAuthenticationViewController, NSString;

@interface SFExternalPasswordCredentialServiceViewController : SFPasswordServiceViewController <SFCredentialProviderExtensionManagerObserver, _ASPasswordCredentialAuthenticationViewControllerDelegate, _SFAuthenticationClient, _SFAuthenticationContextDelegate, SFExternalPasswordCredentialServiceViewControllerProtocol> {

	_SFAuthenticationContext* _authenticationContext;
	_ASPasswordCredentialAuthenticationViewController* _extensionController;
	long long _completionAction;
	/*^block*/id _getCredentialCompletion;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_exportedInterface;
+(id)_remoteViewControllerInterface;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)_dismiss;
-(id)_authenticationContext;
-(void)autoFillWithCredentialIdentity:(id)arg1 ;
-(void)getCredentialForCredentialIdentity:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)credentialProviderExtensionManagerExtensionListDidChange:(id)arg1 ;
-(id)authenticationCustomUIProgressObserverForContext:(id)arg1 ;
-(id)authenticationMessageForContext:(id)arg1 ;
-(id)passcodePromptForContext:(id)arg1 ;
-(BOOL)displayMessageAsTitleForContext:(id)arg1 ;
-(void)presentUIForPasswordCredentialAuthenticationViewController:(id)arg1 ;
-(void)passwordCredentialAuthenticationViewController:(id)arg1 didFinishWithCredential:(id)arg2 error:(id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)contextRequiresSessionBasedAuthentication:(id)arg1 ;
-(BOOL)contextShouldAllowPasscodeFallback:(id)arg1 ;
-(BOOL)contextShouldAllowMultipleBiometricFailures:(id)arg1 ;
-(void)_finishRequestToAutoFillCredential:(id)arg1 extensionShowedUI:(BOOL)arg2 error:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_finishRequestToReturnCredential:(id)arg1 extensionShowedUI:(BOOL)arg2 error:(id)arg3 completion:(/*^block*/id)arg4 ;
@end

