/*
* Generated on Monday, March 1, 2021 at 2:34:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPUI.framework/CoreCDPUI
*/

#import <Preferences/PSKeychainSyncSecurityCodeController.h>

@class CDPRecoveryKeyCreateHeaderView, NSString, CDPRecoveryKeyEntryViewModel;

@interface CDPRecoveryKeyEntryViewController : PSKeychainSyncSecurityCodeController {

	CDPRecoveryKeyCreateHeaderView* _headerView;
	NSString* _recoveryCode;
	CDPRecoveryKeyEntryViewModel* _context;

}
-(void)dealloc;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)viewDidLayoutSubviews;
-(id)headerView;
-(id)specifiers;
-(id)textEntryCell;
-(id)placeholderText;
-(void)didFinishEnteringText:(id)arg1 ;
-(BOOL)hidesNextButton;
-(id)initWithRecoveryContext:(id)arg1 ;
-(void)disableUserInteractionAndStartSpinner;
-(void)enableUserInteractionAndStopSpinner;
-(void)cancelFlow:(id)arg1 ;
-(id)footerActionButton;
-(void)continueFlow:(id)arg1 ;
-(id)footerTextLabel;
-(void)_handleRecoveryKeyValidationWithSuccess:(BOOL)arg1 error:(id)arg2 ;
@end

