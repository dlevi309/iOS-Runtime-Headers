/*
* Generated on Thursday, January 14, 2021 at 2:27:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

