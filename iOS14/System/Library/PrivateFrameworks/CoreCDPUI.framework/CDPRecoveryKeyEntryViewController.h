/*
* Generated on Thursday, January 14, 2021 at 2:27:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPUI.framework/CoreCDPUI
*/

#import <Preferences/PSKeychainSyncSecurityCodeController.h>

@class CDPRecoveryKeyCreateHeaderView, NSString, CDPRecoveryKeyEntryViewModel;

@interface CDPRecoveryKeyEntryViewController : PSKeychainSyncSecurityCodeController {

	CDPRecoveryKeyCreateHeaderView* _headerView;
	NSString* _recoveryCode;
	CDPRecoveryKeyEntryViewModel* _context;

}
-(void)viewWillLayoutSubviews;
-(id)specifiers;
-(id)textEntryCell;
-(id)placeholderText;
-(void)didFinishEnteringText:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(id)headerView;
-(BOOL)hidesNextButton;
-(void)viewDidLayoutSubviews;
-(void)dealloc;
-(id)footerTextLabel;
-(id)initWithRecoveryContext:(id)arg1 ;
-(void)disableUserInteractionAndStartSpinner;
-(void)enableUserInteractionAndStopSpinner;
-(void)cancelFlow:(id)arg1 ;
-(id)footerActionButton;
-(void)continueFlow:(id)arg1 ;
-(void)_handleRecoveryKeyValidationWithSuccess:(BOOL)arg1 error:(id)arg2 ;
@end

