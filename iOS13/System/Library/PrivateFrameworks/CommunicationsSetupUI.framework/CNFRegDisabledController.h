/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
*/

#import <CommunicationsSetupUI/CNFRegFirstRunController.h>

@class PSSpecifier;

@interface CNFRegDisabledController : CNFRegFirstRunController {

	PSSpecifier* _spinner;
	PSSpecifier* _turnOnButton;

}
-(id)bundle;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)specifierList;
-(id)getAccountNameForSpecifier:(id)arg1 ;
-(void)_setupAccountHandlersForDisabledOperation;
-(id)_rightButtonItem;
-(void)_activateSpinner;
-(void)_deactivateSpinner;
-(void)turnOnTapped:(id)arg1 ;
@end

