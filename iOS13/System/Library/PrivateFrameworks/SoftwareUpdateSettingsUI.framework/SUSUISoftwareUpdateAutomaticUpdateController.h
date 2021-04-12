/*
* Generated on Monday, March 1, 2021 at 2:35:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateSettingsUI.framework/SoftwareUpdateSettingsUI
*/

#import <Preferences/PSListController.h>

@class PSSpecifier;

@interface SUSUISoftwareUpdateAutomaticUpdateController : PSListController {

	PSSpecifier* _automaticUpdateGroup;
	PSSpecifier* _automaticUpdateSwitchSpecifier;

}

@property (nonatomic,retain) PSSpecifier * automaticUpdateGroup;                        //@synthesize automaticUpdateGroup=_automaticUpdateGroup - In the implementation block
@property (nonatomic,retain) PSSpecifier * automaticUpdateSwitchSpecifier;              //@synthesize automaticUpdateSwitchSpecifier=_automaticUpdateSwitchSpecifier - In the implementation block
-(id)specifiers;
-(id)automaticUpdateStatus;
-(void)setAutomaticUpdateGroup:(PSSpecifier *)arg1 ;
-(PSSpecifier *)automaticUpdateGroup;
-(void)armedAutoUpdateForAutomaticUpdatesToggled:(id)arg1 forSpecifier:(id)arg2 ;
-(void)setAutomaticUpdateSwitchSpecifier:(PSSpecifier *)arg1 ;
-(PSSpecifier *)automaticUpdateSwitchSpecifier;
@end

