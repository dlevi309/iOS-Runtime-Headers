/*
* Generated on Thursday, January 14, 2021 at 2:28:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Settings/PrivacySettingsUI.framework/PrivacySettingsUI
*/

#import <Preferences/PSListController.h>

@interface PUIContactsPrivacyController : PSListController {

	id _controller;

}

@property (nonatomic,retain) id controller;              //@synthesize controller=_controller - In the implementation block
-(id)specifiers;
-(void)setController:(id)arg1 ;
-(void)controller:(id)arg1 didRefreshInfoForAppsWithBundleIdentifiers:(id)arg2 ;
-(void)setAuthorizationLevel:(id)arg1 forSpecifier:(id)arg2 ;
-(id)authorizationLevelForSpecifier:(id)arg1 ;
-(id)controller;
-(id)createSpecifiers;
-(id)footerSpecifier;
-(id)appsUsingConactsSpecifiers;
-(id)specifierForBundleIdentifier:(id)arg1 ;
@end

