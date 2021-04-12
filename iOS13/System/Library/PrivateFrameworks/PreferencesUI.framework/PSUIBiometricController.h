/*
* Generated on Monday, March 1, 2021 at 2:34:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
*/

#import <PreferencesUI/PreferencesUI-Structs.h>
#import <PreferencesUI/PSUIPasscodeLockController.h>
#import <UIKit/UIPopoverControllerDelegate.h>

@class PSEnrollContainerViewController, UIViewController, NSString;

@interface PSUIBiometricController : PSUIPasscodeLockController <UIPopoverControllerDelegate> {

	BOOL _currentlyEnablingTouchIDForPurchases;
	long long _storeState;
	PSEnrollContainerViewController* _enrollController;
	/*^block*/id _modalFlowSuccessCompletion;
	/*^block*/id _modalFlowCancelCompletion;
	UIViewController* _enrollmentPopoverController;

}

@property (assign,nonatomic) long long storeState;                                                   //@synthesize storeState=_storeState - In the implementation block
@property (assign,nonatomic,__weak) PSEnrollContainerViewController * enrollController;              //@synthesize enrollController=_enrollController - In the implementation block
@property (nonatomic,copy) id modalFlowSuccessCompletion;                                            //@synthesize modalFlowSuccessCompletion=_modalFlowSuccessCompletion - In the implementation block
@property (nonatomic,copy) id modalFlowCancelCompletion;                                             //@synthesize modalFlowCancelCompletion=_modalFlowCancelCompletion - In the implementation block
@property (assign,nonatomic) BOOL currentlyEnablingTouchIDForPurchases;                              //@synthesize currentlyEnablingTouchIDForPurchases=_currentlyEnablingTouchIDForPurchases - In the implementation block
@property (nonatomic,retain) UIViewController * enrollmentPopoverController;                         //@synthesize enrollmentPopoverController=_enrollmentPopoverController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)shouldPresentEnrollmentInPopover;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)popoverPresentationControllerShouldDismissPopover:(id)arg1 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)didUnlock;
-(void)devicePINController:(id)arg1 didAcceptSetPIN:(id)arg2 ;
-(void)didCancelEnteringPIN;
-(id)authorizationToken;
-(PSEnrollContainerViewController *)enrollController;
-(void)setEnrollController:(PSEnrollContainerViewController *)arg1 ;
-(void)setupBiometricLogoHeader;
-(void)setModalFlowSuccessCompletion:(id)arg1 ;
-(void)enrollBiometric;
-(void)presentPasscodePaneFromSpecifier:(id)arg1 ;
-(BOOL)hasPasscodeAndBiometric;
-(BOOL)isTouchIDUnlockRestricted;
-(UIViewController *)enrollmentPopoverController;
-(void)addEnrollmentOrCreatePasscodeIfNecessaryWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)shouldRestrictFeaturesRequiringEnrollment;
-(void)setStoreState:(long long)arg1 ;
-(BOOL)currentlyEnablingTouchIDForPurchases;
-(long long)storeState;
-(void)setCurrentlyEnablingTouchIDForPurchases:(BOOL)arg1 ;
-(void)updateStoreBiometricsState;
-(BOOL)isTouchIDForPurchasesRestricted;
-(BOOL)isTouchIDForStockholmRestricted;
-(BOOL)isBiometricEditingAllowed;
-(id)biometricLogo;
-(id)biometricTableViewHeader;
-(id)headerForUseBiometricSection;
-(void)setBiometricUnlockEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)isTouchIDUnlockEnabled:(id)arg1 ;
-(void)setTouchIDForPurchasesEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)isTouchIDForPurchasesEnabled:(id)arg1 ;
-(void)setTouchIDForStockholmEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)isTouchIDForStockholmEnabled:(id)arg1 ;
-(void)setSafariAutoFillEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)safariAutoFillEnabled:(id)arg1 ;
-(BOOL)isSafariAutofillRestricted;
-(void)presentPopoverForContentViewController:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_passcodeControllerForSpecifier:(id)arg1 ;
-(void)presentPopoverForContentViewController:(id)arg1 ;
-(id)passcodeController;
-(id)modalFlowSuccessCompletion;
-(void)setModalFlowCancelCompletion:(id)arg1 ;
-(void)_popEnrollmentController;
-(id)modalFlowCancelCompletion;
-(void)setEnrollmentPopoverController:(UIViewController *)arg1 ;
-(void)enrollmentControllerDidDismiss;
-(void)completeModalFlow;
-(void)cancelModalFlow;
-(void)updateTouchIDUnlockSpecifier;
-(void)updateTouchIDForPurchasesSpecifier;
-(void)updateTouchIDForStockholmSpecifier;
-(BOOL)isEnrollmentAvailable;
-(id)useBiometricForSpecifiers;
-(void)pushPasscodePane;
-(void)hideCancelButton;
-(void)enrollmentCompletedForIdentity:(id)arg1 ;
@end

