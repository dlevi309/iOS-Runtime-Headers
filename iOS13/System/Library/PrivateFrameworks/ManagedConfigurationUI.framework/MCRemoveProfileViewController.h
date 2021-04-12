/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
*/

#import <ManagedConfigurationUI/ManagedConfigurationUI-Structs.h>
#import <ManagedConfigurationUI/MCInstallProfileViewController.h>
#import <libobjc.A.dylib/MCInteractionDelegate.h>
#import <libobjc.A.dylib/MCProfileViewControllerDelegate.h>
#import <libobjc.A.dylib/PSStateRestoration.h>
#import <UIKit/UIActionSheetDelegate.h>
#import <UIKit/UITextFieldDelegate.h>

@class UIAlertView, MCProfile, UITextField, NSString;

@interface MCRemoveProfileViewController : MCInstallProfileViewController <MCInteractionDelegate, MCProfileViewControllerDelegate, PSStateRestoration, UIActionSheetDelegate, UITextFieldDelegate> {

	BOOL _profileWantsToReEnroll;
	BOOL _actionButtonHidden;
	UIAlertView* _activeAlert;
	struct {
		unsigned installedThisLaunch : 1;
		unsigned profileSuggestsReboot : 1;
	}  _configurationFlags;
	MCProfile* _updatingProfile;
	UITextField* _passwordField;

}

@property (nonatomic,retain) MCProfile * updatingProfile;              //@synthesize updatingProfile=_updatingProfile - In the implementation block
@property (nonatomic,retain) UITextField * passwordField;              //@synthesize passwordField=_passwordField - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProfile:(id)arg1 ;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)alertViewCancel:(id)arg1 ;
-(UITextField *)passwordField;
-(void)didAcceptEnteredPIN:(id)arg1 ;
-(void)didCancelEnteringPIN;
-(void)setPasswordField:(UITextField *)arg1 ;
-(void)setInstallState:(int)arg1 animated:(BOOL)arg2 ;
-(void)_cancelActiveAlertController:(BOOL)arg1 ;
-(void)updateTitleForProfileInstallationState:(int)arg1 ;
-(void)updateBarButtonItemsForProfileInstallationState:(int)arg1 animated:(BOOL)arg2 ;
-(void)_profileRemovalDidFinish;
-(BOOL)_isProfileInstalled;
-(void)profileViewControllerDidSelectRemoveProfile:(id)arg1 ;
-(void)profileViewControllerDidSelectUpdateProfile:(id)arg1 ;
-(BOOL)_signatureForProfile:(id)arg1 matchesProfileB:(id)arg2 ;
-(void)_profileListChanged:(id)arg1 ;
-(MCProfile *)updatingProfile;
-(void)setUpdatingProfile:(MCProfile *)arg1 ;
-(void)_removeProfile;
-(void)_updateProfile;
-(void)_showRemovalWarningAfterPINVerification;
-(void)_showLeaveRemoteManagementAlert;
-(void)_showRemovalWarningAlert;
-(void)_showRemovalWarningActionSheet;
-(void)_performReEnroll;
-(void)_performReEnrollAfterPINVerification;
-(void)_showWrongRemovalPasswordAlert;
-(void)_showEraseDeviceAlert;
-(void)_leaveRemoteManagementAndErase;
-(void)_resetWithMode:(int)arg1 ;
-(id)_mdmProfileRemovalAlertBody;
-(void)_clearCachedTableCells;
-(void)_cancelActiveAlert:(BOOL)arg1 ;
@end

