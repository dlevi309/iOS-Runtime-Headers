/*
* Generated on Thursday, January 14, 2021 at 2:26:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AuthenticationServices.framework/AuthenticationServices
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/_ASAccountAuthenticationModificationHostViewControllerDelegate.h>
#import <libobjc.A.dylib/ASAccountAuthenticationModificationServiceViewControllerProtocol.h>

@class _ASAccountAuthenticationModificationHostViewController, ASPasswordCredential, ASCredentialServiceIdentifier, NSString;

@interface ASAccountAuthenticationModificationServiceViewController : UIViewController <_ASAccountAuthenticationModificationHostViewControllerDelegate, ASAccountAuthenticationModificationServiceViewControllerProtocol> {

	_ASAccountAuthenticationModificationHostViewController* _accountModificationHostViewController;
	BOOL _isPerformingAppInitiatedUpgrade;
	ASPasswordCredential* _existingCredential;
	ASCredentialServiceIdentifier* _serviceIdentifierForUpgrade;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_remoteViewControllerInterface;
+(id)_exportedInterface;
-(void)presentUIForAccountModificationHostViewController:(id)arg1 ;
-(void)accountModificationHostViewControllerDidCompleteUpgradeToSignInWithApple:(id)arg1 userInfo:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)accountModificationHostViewController:(id)arg1 didFinishWithCredential:(id)arg2 userInfo:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)dismissUIForAccountModificationHostViewController:(id)arg1 ;
-(void)accountModificationHostViewController:(id)arg1 requestCanceledWithError:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)upgradeCredentialToSignInWithApple:(id)arg1 forServiceIdentifier:(id)arg2 userInfo:(id)arg3 extension:(id)arg4 ;
-(void)updateCredential:(id)arg1 forServiceIdentifier:(id)arg2 userInfo:(id)arg3 extension:(id)arg4 ;
-(BOOL)_ensureHostHasAccountModificationEntitlement;
-(void)_upgradeCredentialToSignInWithApple:(id)arg1 forServiceIdentifier:(id)arg2 userInfo:(id)arg3 extension:(id)arg4 ;
-(void)_findExtensionSupportingUpgrade:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_updateCredential:(id)arg1 forServiceIdentifier:(id)arg2 userInfo:(id)arg3 extension:(id)arg4 ;
-(BOOL)_isKeychainSyncEnabled;
-(void)_deleteExistingKeychainCredentialIfPossible;
-(void)_updateKeychainWithNewCredential:(id)arg1 ;
@end

