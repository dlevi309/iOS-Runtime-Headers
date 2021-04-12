/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
*/

#import <CommunicationsSetupUI/CNFRegFirstRunController.h>

@class PSSpecifier, NSArray, NSTimer, NSString;

@interface CNFRegEmailController : CNFRegFirstRunController {

	PSSpecifier* _emailSpecifier;
	PSSpecifier* _actionGroupSpecifier;
	PSSpecifier* _currentActionSpecifier;
	NSArray* _checkMailSpecifiers;
	NSTimer* _validationTimeoutTimer;
	NSString* _pendingAlias;
	BOOL _validating;

}

@property (nonatomic,copy) NSString * pendingAlias;              //@synthesize pendingAlias=_pendingAlias - In the implementation block
-(void)dealloc;
-(id)bundle;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(double)timeoutDuration;
-(id)titleString;
-(void)systemApplicationDidEnterBackground;
-(void)systemApplicationWillEnterForeground;
-(void)_updateUI;
-(id)logName;
-(id)selectedAliases;
-(id)specifierList;
-(void)_setFieldsEnabled:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_setupEventHandlers;
-(void)_stopValidationModeAnimated:(BOOL)arg1 ;
-(void)_buildSpecifierCache:(id)arg1 ;
-(id)aliasSpecifiers;
-(void)setAliasSelected:(id)arg1 ;
-(void)_returnKeyPressed;
-(id)_rightButtonItem;
-(void)_handleValidationModeCancelled;
-(void)_updateControllerState;
-(void)_finishValidation;
-(void)_failValidationWithError:(id)arg1 ;
-(void)stopValidationTimeoutTimer;
-(BOOL)shouldShowAllVettedAliases;
-(BOOL)_phoneNumberInAliases:(id)arg1 ;
-(id)_createSpecifierForAlias:(id)arg1 ;
-(void)nextTapped;
-(void)_showCheckMailButton:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)startValidationTimeoutTimer;
-(id)emailTextField;
-(void)setPendingAlias:(NSString *)arg1 ;
-(BOOL)emailFieldIsEmpty;
-(NSString *)pendingAlias;
-(void)_refreshEnabledStateOfAliasSpecifiers;
-(void)validationTimeout:(id)arg1 ;
-(void)_buildEmailSpecifierCache:(id)arg1 ;
-(void)_buildCheckMailSpecifierCache:(id)arg1 ;
-(void)_buildActionGroupSpecifierCache:(id)arg1 ;
-(BOOL)showActionSpecifier:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)onlyLocalPhoneNumberSentinelAliasIsSelected;
-(void)checkMailTapped:(id)arg1 ;
-(void)emailFieldEmptyStateChanged:(id)arg1 forSpecifier:(id)arg2 ;
-(id)pendingAliasForSpecifier:(id)arg1 ;
-(void)setPendingAlias:(id)arg1 forSpecifier:(id)arg2 ;
@end

