/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
*/

#import <CommunicationsSetupUI/CNFRegFirstRunController.h>
#import <libobjc.A.dylib/CNFRegCreateAccountControllerDelegate.h>

@class PSSpecifier, NSString, CNFRegLearnMoreButton;

@interface CNFRegSignInController : CNFRegFirstRunController <CNFRegCreateAccountControllerDelegate> {

	PSSpecifier* _usernameSpecifier;
	PSSpecifier* _passwordSpecifier;
	PSSpecifier* _actionGroupSpecifier;
	PSSpecifier* _signInButtonSpecifier;
	PSSpecifier* _createAccountButtonSpecifier;
	NSString* _pendingUsername;
	NSString* _pendingPassword;
	unsigned long long _signinFailureCount;
	CNFRegLearnMoreButton* _learnMoreButton;
	BOOL _hideLearnMoreButton;
	BOOL _useSystemAccount;

}

@property (nonatomic,copy) NSString * pendingUsername;                           //@synthesize pendingUsername=_pendingUsername - In the implementation block
@property (nonatomic,copy) NSString * pendingPassword;                           //@synthesize pendingPassword=_pendingPassword - In the implementation block
@property (assign,nonatomic) unsigned long long signinFailureCount;              //@synthesize signinFailureCount=_signinFailureCount - In the implementation block
@property (assign,nonatomic) BOOL hideLearnMoreButton;                           //@synthesize hideLearnMoreButton=_hideLearnMoreButton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)bundle;
-(void)handleURL:(id)arg1 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)applicationDidResume;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)systemApplicationDidEnterBackground;
-(void)systemApplicationWillEnterForeground;
-(void)setSpecifier:(id)arg1 ;
-(void)_updateUI;
-(void)cancelButtonTapped;
-(void)_handleTimeout;
-(id)logName;
-(id)specifierList;
-(void)_setFieldsEnabled:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_setupEventHandlers;
-(void)signInWithUsername:(id)arg1 password:(id)arg2 ;
-(void)_buildSpecifierCache:(id)arg1 ;
-(void)_launchForgotPasswordUrl;
-(void)_resetSigninFailureCount;
-(void)_incrementSigninFailureCount;
-(void)_showRegistrationFailureWithError:(id)arg1 ;
-(void)createAccountControllerDidFinish:(id)arg1 withAppleId:(id)arg2 authID:(id)arg3 authToken:(id)arg4 ;
-(void)setHideLearnMoreButton:(BOOL)arg1 ;
-(BOOL)hideLearnMoreButton;
-(void)_returnKeyPressed;
-(id)_rightButtonItem;
-(id)validationString;
-(void)_updateControllerState;
-(void)_layoutLearnMoreButton;
-(void)learnMorePressed:(id)arg1 ;
-(void)_resignFirstResponders;
-(id)usernameTextField;
-(id)passwordTextField;
-(NSString *)pendingUsername;
-(NSString *)pendingPassword;
-(id)getUserNameForSpecifier:(id)arg1 ;
-(id)getPasswordForSpecifier:(id)arg1 ;
-(BOOL)passwordIsEmpty;
-(void)setSignInButtonEnabled:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)usernameIsEmpty;
-(void)setPasswordText:(id)arg1 ;
-(void)__userTappedTextField;
-(void)setUsernameText:(id)arg1 ;
-(void)setPendingUsername:(NSString *)arg1 ;
-(void)setPendingPassword:(NSString *)arg1 ;
-(void)_startTimeout;
-(void)_loadRegionsIfNecessary;
-(void)setUsernameEnabled:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setPasswordEnabled:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setCreateAccountButtonEnabled:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)signInTapped:(id)arg1 ;
-(void)_buildCreateAccountButtonSpecifierCache:(id)arg1 ;
-(void)_buildSignInGroupSpecifierCache:(id)arg1 ;
-(void)_buildCredentialSpecifierCache:(id)arg1 ;
-(unsigned long long)signinFailureCount;
-(void)_showSigninFailureAlert;
-(void)setSigninFailureCount:(unsigned long long)arg1 ;
-(void)_showNewPasswordNeededSheetWithAppleID:(id)arg1 ;
-(void)_showAccountNotAuthorizedSheetWithAuthID:(id)arg1 token:(id)arg2 ;
-(void)_finishSignInWithAccount:(id)arg1 animated:(BOOL)arg2 ;
-(void)usernameFieldEmptyStateChanged:(id)arg1 forSpecifier:(id)arg2 ;
-(void)passwordFieldEmptyStateChanged:(id)arg1 forSpecifier:(id)arg2 ;
-(void)usernameFieldDidBeginEditing:(id)arg1 ;
-(void)passwordFieldDidBeginEditing:(id)arg1 ;
-(void)showCreateAccountController;
-(void)forgotIDButtonTapped;
-(void)_setupAppearBlockForNewPasswordWithAppleID:(id)arg1 ;
-(void)_setupAppearBlockForAccountAuthorizeWithAuthID:(id)arg1 token:(id)arg2 ;
@end

