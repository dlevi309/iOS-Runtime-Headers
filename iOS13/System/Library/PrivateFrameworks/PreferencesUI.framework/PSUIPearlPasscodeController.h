/*
* Generated on Monday, March 1, 2021 at 2:34:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
*/

#import <PreferencesUI/PSUIBiometricController.h>
#import <libobjc.A.dylib/BKUIPearlEnrollControllerDelegate.h>
#import <libobjc.A.dylib/LAUIDelegate.h>
#import <libobjc.A.dylib/BFFPasscodeViewControllerDelegate.h>

@class PSSpecifier, PSEnrollmentNavigationController, PSUIPearlAttentionGroupController, LAContext, OBPrivacyPresenter, NSString;

@interface PSUIPearlPasscodeController : PSUIBiometricController <BKUIPearlEnrollControllerDelegate, LAUIDelegate, BFFPasscodeViewControllerDelegate> {

	PSSpecifier* _enrollFaceSpecifier;
	PSEnrollmentNavigationController* _enrollFaceController;
	PSUIPearlAttentionGroupController* _attentionGroupController;
	LAContext* _authContext;
	OBPrivacyPresenter* _presenter;
	PSSpecifier* _currentlyPresentingPearlEnrollSpecifier;

}

@property (nonatomic,retain) PSSpecifier * enrollFaceSpecifier;                                         //@synthesize enrollFaceSpecifier=_enrollFaceSpecifier - In the implementation block
@property (nonatomic,retain) PSEnrollmentNavigationController * enrollFaceController;                   //@synthesize enrollFaceController=_enrollFaceController - In the implementation block
@property (nonatomic,retain) PSUIPearlAttentionGroupController * attentionGroupController;              //@synthesize attentionGroupController=_attentionGroupController - In the implementation block
@property (nonatomic,retain) LAContext * authContext;                                                   //@synthesize authContext=_authContext - In the implementation block
@property (nonatomic,retain) OBPrivacyPresenter * presenter;                                            //@synthesize presenter=_presenter - In the implementation block
@property (retain) PSSpecifier * currentlyPresentingPearlEnrollSpecifier;                               //@synthesize currentlyPresentingPearlEnrollSpecifier=_currentlyPresentingPearlEnrollSpecifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(OBPrivacyPresenter *)presenter;
-(id)specifiers;
-(LAContext *)authContext;
-(void)setAuthContext:(LAContext *)arg1 ;
-(void)event:(long long)arg1 params:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)enroll:(id)arg1 ;
-(BOOL)passcodeViewControllerAllowSkip:(id)arg1 ;
-(void)passcodeViewController:(id)arg1 didFinishWithPasscodeCreation:(id)arg2 ;
-(id)passcodeViewControllerCustomFirstEntryInstructions:(id)arg1 ;
-(void)pearlEnrollController:(id)arg1 finishedEnrollWithError:(id)arg2 ;
-(void)setPresenter:(OBPrivacyPresenter *)arg1 ;
-(BOOL)isEnrolled;
-(void)enrollBiometric;
-(id)biometricLogo;
-(id)biometricTableViewHeader;
-(id)headerForUseBiometricSection;
-(void)setBiometricUnlockEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)passcodeController;
-(BOOL)isEnrollmentAvailable;
-(void)pushPasscodePane;
-(void)backgrounded:(id)arg1 ;
-(void)popPearlEnrollmentController;
-(PSEnrollmentNavigationController *)enrollFaceController;
-(void)setEnrollFaceController:(PSEnrollmentNavigationController *)arg1 ;
-(PSSpecifier *)currentlyPresentingPearlEnrollSpecifier;
-(void)setCurrentlyPresentingPearlEnrollSpecifier:(PSSpecifier *)arg1 ;
-(void)deleteAllIdentities;
-(unsigned long long)numberOfAppsUsingPearl;
-(id)numberOfAppsUsingPearlDescription:(id)arg1 ;
-(id)pearlEnrollSpecifiers;
-(PSUIPearlAttentionGroupController *)attentionGroupController;
-(void)setAttentionGroupController:(PSUIPearlAttentionGroupController *)arg1 ;
-(void)pearlLearnMoreTapped:(id)arg1 ;
-(PSSpecifier *)enrollFaceSpecifier;
-(void)setEnrollFaceSpecifier:(PSSpecifier *)arg1 ;
@end

