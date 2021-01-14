/*
* Generated on Thursday, January 14, 2021 at 2:24:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <Preferences/PSListController.h>

@class PSSpecifier, NSArray;

@interface VUIAccountSettingsConnectedAppsViewController : PSListController {

	PSSpecifier* _appGroup;
	NSArray* _appSpecifiers;

}
-(id)specifiers;
-(void)viewDidLoad;
-(long long)_alertStyle;
-(id)_appGroupSpecifier;
-(void)_loadAppGroup;
-(void)_addPrivacyFooterToGroup:(id)arg1 ;
-(void)_showPrivacySheet:(id)arg1 ;
-(void)_toggleSpecifier:(id)arg1 sender:(id)arg2 ;
-(id)_accessStatusForSpecifier:(id)arg1 ;
-(void)_stopAppSpinner;
-(void)_promptToDisableChannel:(id)arg1 withExternalID:(id)arg2 ;
-(void)_showVppaExpiredPrompt:(id)arg1 ;
-(void)_promptToEnableChannel:(id)arg1 withExternalID:(id)arg2 ;
-(void)_startAppSpinner;
@end

