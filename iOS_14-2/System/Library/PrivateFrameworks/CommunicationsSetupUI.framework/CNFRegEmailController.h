/*
* Generated on Thursday, January 14, 2021 at 2:27:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)bundle;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(double)timeoutDuration;
-(void)systemApplicationWillEnterForeground;
-(id)logName;
-(void)viewDidLoad;
-(void)_updateUI;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)titleString;
-(void)systemApplicationDidEnterBackground;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)dealloc;
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
-(id)selectedAliases;
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

