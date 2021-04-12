/*
* Generated on Thursday, January 14, 2021 at 2:26:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
*/

#import <ManagedConfigurationUI/MCInstallProfileViewController.h>
#import <libobjc.A.dylib/MCProfileViewControllerDelegate.h>
#import <libobjc.A.dylib/DevicePINControllerDelegate.h>

@class MCProfile, UITextField, NSString;

@interface MCRemoveProfileViewController : MCInstallProfileViewController <MCProfileViewControllerDelegate, DevicePINControllerDelegate> {

	BOOL _profileWantsToReEnroll;
	MCProfile* _updatingProfile;
	UITextField* _passwordField;

}

@property (nonatomic,retain) MCProfile * updatingProfile;              //@synthesize updatingProfile=_updatingProfile - In the implementation block
@property (nonatomic,retain) UITextField * passwordField;              //@synthesize passwordField=_passwordField - In the implementation block
@property (assign,nonatomic) BOOL profileWantsToReEnroll;              //@synthesize profileWantsToReEnroll=_profileWantsToReEnroll - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProfile:(id)arg1 ;
-(UITextField *)passwordField;
-(void)didCancelEnteringPIN;
-(void)didAcceptEnteredPIN:(id)arg1 ;
-(BOOL)profileViewControllerIsProfileInstalled;
-(void)profileViewControllerDidSelectRemoveProfile:(id)arg1 ;
-(void)profileViewControllerDidSelectUpdateProfile:(id)arg1 ;
-(void)setInstallState:(int)arg1 animated:(BOOL)arg2 ;
-(void)updateTitleForProfileInstallationState:(int)arg1 ;
-(void)updateBarButtonItemsForProfileInstallationState:(int)arg1 animated:(BOOL)arg2 ;
-(void)profileRemovalDidFinish;
-(void)_didFinishEnteringPINWithCompletion:(/*^block*/id)arg1 ;
-(MCProfile *)updatingProfile;
-(void)setUpdatingProfile:(MCProfile *)arg1 ;
-(void)_showRemovalWarningAfterPINVerification;
-(void)_performReEnroll;
-(BOOL)profileWantsToReEnroll;
-(void)_performReEnrollAfterPINVerification;
-(void)setProfileWantsToReEnroll:(BOOL)arg1 ;
-(void)_showLeaveRemoteManagementAlert;
-(void)_showRemovalWarningAlert;
-(void)_showRemovalWarningActionSheet;
-(void)_showEraseDeviceAlert;
-(void)_leaveRemoteManagementAndErase;
-(void)_resetWithMode:(int)arg1 ;
-(id)_mdmProfileRemovalAlertBody;
-(void)_showWrongRemovalPasswordAlert;
-(void)setPasswordField:(UITextField *)arg1 ;
@end

