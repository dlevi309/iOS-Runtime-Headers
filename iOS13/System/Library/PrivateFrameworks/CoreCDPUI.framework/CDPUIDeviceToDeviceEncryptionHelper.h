/*
* Generated on Monday, March 1, 2021 at 2:34:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPUI.framework/CoreCDPUI
*/

#import <libobjc.A.dylib/CDPUIDeviceToDeviceEncryptionPasscodeValidationDelegate.h>

@protocol CDPUIDeviceToDeviceEncryptionHelperDelegate;
@class UIViewController, UINavigationController, AKAppleIDAuthenticationController, CDPUIDeviceToDeviceEncryptionFlowContext, NSString;

@interface CDPUIDeviceToDeviceEncryptionHelper : NSObject <CDPUIDeviceToDeviceEncryptionPasscodeValidationDelegate> {

	UIViewController* _presentingViewController;
	id<CDPUIDeviceToDeviceEncryptionHelperDelegate> _delegate;
	UINavigationController* _navController;
	AKAppleIDAuthenticationController* _authController;
	CDPUIDeviceToDeviceEncryptionFlowContext* _context;

}

@property (nonatomic,retain) UINavigationController * navController;                                       //@synthesize navController=_navController - In the implementation block
@property (nonatomic,retain) AKAppleIDAuthenticationController * authController;                           //@synthesize authController=_authController - In the implementation block
@property (nonatomic,retain) CDPUIDeviceToDeviceEncryptionFlowContext * context;                           //@synthesize context=_context - In the implementation block
@property (nonatomic,__weak,readonly) UIViewController * presentingViewController;                         //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (assign,nonatomic,__weak) id<CDPUIDeviceToDeviceEncryptionHelperDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<CDPUIDeviceToDeviceEncryptionHelperDelegate>)delegate;
-(void)setDelegate:(id<CDPUIDeviceToDeviceEncryptionHelperDelegate>)arg1 ;
-(CDPUIDeviceToDeviceEncryptionFlowContext *)context;
-(void)setContext:(CDPUIDeviceToDeviceEncryptionFlowContext *)arg1 ;
-(id)initWithContext:(id)arg1 ;
-(UIViewController *)presentingViewController;
-(UINavigationController *)navController;
-(id)_presentingViewController;
-(id)_authController;
-(id)initWithPresentingViewController:(id)arg1 ;
-(void)performDeviceToDeviceEncryptionStateRepairForContext:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)setNavController:(UINavigationController *)arg1 ;
-(void)performDeviceToDeviceEncryptionStateRepairWithCompletion:(/*^block*/id)arg1 ;
-(id)_encryptionErrorFromError:(id)arg1 ;
-(AKAppleIDAuthenticationController *)authController;
-(BOOL)_hasPasscode;
-(void)setAuthController:(AKAppleIDAuthenticationController *)arg1 ;
-(void)localSecretValidationCanCancelWithViewController:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_spinnerViewController;
-(void)_executeSyncOnMainThreadIfNeeded:(/*^block*/id)arg1 ;
-(void)_dismissPresentedViewControllerWithCompletion:(/*^block*/id)arg1 ;
-(void)_showUpgradeMessageWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_preflightDeviceToDeviceEncryptionWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)_hasManatee;
-(BOOL)_isInCircle;
-(void)_checkEligibilityWithCompletionForContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_isAccount2FAForAltDSID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_authContextFromContext:(id)arg1 ;
-(void)_setupPresentedViewController;
-(id)_inAppContextFromContext:(id)arg1 ;
-(void)_validateLocalSecretAndRepairCDPWithAuthResults:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_presentCDPUpgradeSpinnerWithCompletion:(/*^block*/id)arg1 ;
-(void)_presentIneligibleAlertWithCompletion:(/*^block*/id)arg1 ;
-(void)_legacyAskPermissionToContinueFlowWithCompletion:(/*^block*/id)arg1 ;
-(id)_upgradeUIProvider;
-(id)_presentingViewControllerInline;
-(void)_repairCDPWithAuthResults:(id)arg1 cachedSecret:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)_createPasscodeWithCompletion:(/*^block*/id)arg1 ;
-(void)_postBiometricFollowupIfNeeded;
-(id)_cdpStateControllerWithAuthResults:(id)arg1 ;
-(id)_cdpContextForPrimaryAccountWithAuthenticationResults:(id)arg1 ;
-(id)_cdpStateControllerWithContext:(id)arg1 ;
-(void)_shouldContinueCreationWithCompletion:(/*^block*/id)arg1 ;
-(void)_configurePresentingViewControllerForModalPresentation;
@end

