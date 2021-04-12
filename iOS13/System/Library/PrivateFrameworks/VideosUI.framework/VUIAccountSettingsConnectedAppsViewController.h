/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <Preferences/PSListController.h>

@class PSSpecifier, NSArray;

@interface VUIAccountSettingsConnectedAppsViewController : PSListController {

	PSSpecifier* _appGroup;
	NSArray* _appSpecifiers;

}
-(void)viewDidLoad;
-(long long)_alertStyle;
-(id)specifiers;
-(void)_showPrivacySheet:(id)arg1 ;
-(id)_appGroupSpecifier;
-(void)_loadAppGroup;
-(void)_addPrivacyFooterToGroup:(id)arg1 ;
-(void)_toggleSpecifier:(id)arg1 sender:(id)arg2 ;
-(id)_accessStatusForSpecifier:(id)arg1 ;
-(void)_stopAppSpinner;
-(void)_promptToDisableChannel:(id)arg1 withExternalID:(id)arg2 ;
-(void)_showVppaExpiredPrompt:(id)arg1 ;
-(void)_promptToEnableChannel:(id)arg1 withExternalID:(id)arg2 ;
-(void)_startAppSpinner;
@end

