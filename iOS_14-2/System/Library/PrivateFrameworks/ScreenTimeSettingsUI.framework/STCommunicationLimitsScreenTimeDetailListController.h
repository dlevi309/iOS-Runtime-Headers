/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
*/

#import <Preferences/PSListController.h>

@class PSSpecifier, STCommunicationLimits;

@interface STCommunicationLimitsScreenTimeDetailListController : PSListController {

	PSSpecifier* _allowedCommunicationGroupSpecifier;
	PSSpecifier* _allowEveryoneSpecifier;
	PSSpecifier* _allowContactsOnlySpecifier;
	PSSpecifier* _allowGroupsWithOneContactSpecifier;
	STCommunicationLimits* _communicationLimits;

}

@property (retain) PSSpecifier * allowedCommunicationGroupSpecifier;              //@synthesize allowedCommunicationGroupSpecifier=_allowedCommunicationGroupSpecifier - In the implementation block
@property (retain) PSSpecifier * allowEveryoneSpecifier;                          //@synthesize allowEveryoneSpecifier=_allowEveryoneSpecifier - In the implementation block
@property (retain) PSSpecifier * allowContactsOnlySpecifier;                      //@synthesize allowContactsOnlySpecifier=_allowContactsOnlySpecifier - In the implementation block
@property (retain) PSSpecifier * allowGroupsWithOneContactSpecifier;              //@synthesize allowGroupsWithOneContactSpecifier=_allowGroupsWithOneContactSpecifier - In the implementation block
@property (retain) STCommunicationLimits * communicationLimits;                   //@synthesize communicationLimits=_communicationLimits - In the implementation block
+(void)showCompatibilityAlertIfNeededWithCoordinator:(id)arg1 presentingViewController:(id)arg2 okHandler:(/*^block*/id)arg3 ;
-(id)specifiers;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)willResignActive;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(STCommunicationLimits *)communicationLimits;
-(void)setCommunicationLimits:(STCommunicationLimits *)arg1 ;
-(void)_didFinishEditingCommunicationLimit;
-(PSSpecifier *)allowedCommunicationGroupSpecifier;
-(void)setAllowedCommunicationGroupSpecifier:(PSSpecifier *)arg1 ;
-(void)setAllowEveryoneSpecifier:(PSSpecifier *)arg1 ;
-(void)setAllowContactsOnlySpecifier:(PSSpecifier *)arg1 ;
-(void)setAllowGroupsWithOneContactSpecifier:(PSSpecifier *)arg1 ;
-(id)_allowedCommunicationGroupFooterText:(id)arg1 ;
-(PSSpecifier *)allowEveryoneSpecifier;
-(PSSpecifier *)allowContactsOnlySpecifier;
-(PSSpecifier *)allowGroupsWithOneContactSpecifier;
-(void)_updateAllowedCommunicationGroupFooterText;
@end

