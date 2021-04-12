/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
*/

#import <Preferences/PSListController.h>

@protocol STContentPrivacyViewModelCoordinator;
@class NSObject;

@interface STContentPrivacyAllowedAppsDetailController : PSListController {

	NSObject*<STContentPrivacyViewModelCoordinator> _coordinator;

}

@property (nonatomic,retain) NSObject*<STContentPrivacyViewModelCoordinator> coordinator;              //@synthesize coordinator=_coordinator - In the implementation block
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setCoordinator:(NSObject*<STContentPrivacyViewModelCoordinator>)arg1 ;
-(NSObject*<STContentPrivacyViewModelCoordinator>)coordinator;
-(id)specifiers;
-(void)_addBlacklistAppSpecifier:(id)arg1 bundleID:(id)arg2 ;
-(void)_addBooleanAppSpecifier:(id)arg1 configuration:(id)arg2 key:(id)arg3 bundleID:(id)arg4 ;
-(id)defaultSwitchSpecifierWithConfiguration:(id)arg1 key:(id)arg2 fallbackLabel:(id)arg3 icon:(id)arg4 ;
-(void)setItemSpecifierValue:(id)arg1 specifier:(id)arg2 ;
-(id)getItemSpecifierValue:(id)arg1 ;
-(id)nameForInstalledSystemApp:(id)arg1 ;
@end

