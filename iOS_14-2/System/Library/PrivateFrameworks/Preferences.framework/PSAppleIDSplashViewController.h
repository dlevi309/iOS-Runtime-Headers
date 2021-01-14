/*
* Generated on Thursday, January 14, 2021 at 2:20:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/

#import <Preferences/PSListController.h>
#import <libobjc.A.dylib/AKAppleIDAuthenticationInAppContextPasswordDelegate.h>
#import <libobjc.A.dylib/RemoteUIControllerDelegate.h>

@class AKAppleIDAuthenticationController, UIActivityIndicatorView, UIBarButtonItem, PSSpecifier, NSString, NSTimer, RemoteUIController;

@interface PSAppleIDSplashViewController : PSListController <AKAppleIDAuthenticationInAppContextPasswordDelegate, RemoteUIControllerDelegate> {

	AKAppleIDAuthenticationController* _authController;
	/*^block*/id _passwordHandler;
	UIActivityIndicatorView* _spinner;
	UIBarButtonItem* _spinnerBarItem;
	UIBarButtonItem* _nextButtonBarItem;
	UIBarButtonItem* _cancelButtonBarItem;
	PSSpecifier* _createNewAccountButtonSpecifier;
	PSSpecifier* _createNewAccountGroupSpecifier;
	PSSpecifier* _signInButtonSpecifier;
	PSSpecifier* _passwordSpecifier;
	PSSpecifier* _userSpecifier;
	NSString* _username;
	NSString* _password;
	id _textFieldTextDidChangeObserver;
	BOOL _isPasswordDirty;
	BOOL _shouldHideBackButton;
	void* _powerAssertion;
	NSTimer* _idleJiggleTimer;
	RemoteUIController* _remoteUIController;
	/*^block*/id _remoteUICompletion;
	BOOL _isPresentedModally;
	BOOL _shouldShowCreateAppleIDButton;

}

@property (assign,setter=setPresentedModally:,nonatomic) BOOL isPresentedModally;                         //@synthesize isPresentedModally=_isPresentedModally - In the implementation block
@property (nonatomic,readonly) AKAppleIDAuthenticationController * authenticationController; 
@property (assign,nonatomic) BOOL shouldShowCreateAppleIDButton;                                          //@synthesize shouldShowCreateAppleIDButton=_shouldShowCreateAppleIDButton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)specifiers;
-(void)setUsername:(id)arg1 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)_specifierForGroupWithiForgotLink;
-(BOOL)_runningInMail;
-(id)_specifierForLoginUserForm;
-(id)_specifierForLoginPasswordForm;
-(id)_usernameForSpecifier:(id)arg1 ;
-(id)_specifiersForSignInButton;
-(id)_specifiersForCreateNewAccount;
-(id)_silhouetteMonogram;
-(void)_setUsername:(id)arg1 withSpecifier:(id)arg2 ;
-(void)_setPassword:(id)arg1 withSpecifier:(id)arg2 ;
-(id)_passwordForSpecifier:(id)arg1 ;
-(void)_signInButtonWasTapped:(id)arg1 ;
-(void)_createNewAppleIDButtonWasTapped:(id)arg1 ;
-(void)_presentAppleIDPrivacyInformationPane;
-(void)_iForgotButtonWasTapped:(id)arg1 ;
-(void)_cancelButtonWasTapped:(id)arg1 ;
-(void)_updateSignInButton;
-(BOOL)_shouldAnchorCreateAccountButton;
-(double)_heightForCreateNewAccountSpecifierWithWidth:(double)arg1 ;
-(void)_reloadPasswordSpecifier;
-(double)_heightForCreateNewAccountFooterWithWidth:(double)arg1 ;
-(void)willBeginAuthWithContext:(id)arg1 ;
-(id)serviceIcon;
-(void)didFinishAuthWithContext:(id)arg1 results:(id)arg2 error:(id)arg3 ;
-(void)handleAuthCompletionWithResults:(id)arg1 ;
-(void)_signInWithUsername:(id)arg1 password:(id)arg2 ;
-(void)_openWebBasedCredentialRecoveryFlow;
-(void)_beginiCloudCreationFlowWithContinuationData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)createNewAppleIDWithCompletion:(/*^block*/id)arg1 ;
-(void)_setInteractionEnabled:(BOOL)arg1 ;
-(void)_textFieldValueDidChange:(id)arg1 ;
-(void)remoteUIControllerDidDismiss:(id)arg1 ;
-(BOOL)_shouldShowCancelDone;
-(BOOL)isPresentedModally;
-(void)setPresentedModally:(BOOL)arg1 ;
-(void)setUsernameEnabled:(BOOL)arg1 ;
-(void)_presentInvalidUsernameAlert;
-(id)serviceDescription;
-(BOOL)shouldShowCreateAppleIDButton;
-(void)setShouldShowCreateAppleIDButton:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(AKAppleIDAuthenticationController *)authenticationController;
-(void)willMoveToParentViewController:(id)arg1 ;
-(void)viewDidLoad;
-(void)context:(id)arg1 needsPasswordWithCompletion:(/*^block*/id)arg2 ;
-(id)serviceName;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)showBusyUI;
-(void)hideBusyUI;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)returnPressedAtEnd;
-(void)_cancelPasswordDelegateIfNecessary;
-(id)title;
-(void)dealloc;
@end

