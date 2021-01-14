/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
*/

#import <Preferences/PSListController.h>

@protocol STContentPrivacyViewModelCoordinator;
@class NSObject;

@interface STContentPrivacyMediaRestrictionsDetailController : PSListController {

	NSObject*<STContentPrivacyViewModelCoordinator> _coordinator;

}

@property (nonatomic,retain) NSObject*<STContentPrivacyViewModelCoordinator> coordinator;              //@synthesize coordinator=_coordinator - In the implementation block
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)specifiers;
-(id)init;
-(void)setCoordinator:(NSObject*<STContentPrivacyViewModelCoordinator>)arg1 ;
-(void)dealloc;
-(NSObject*<STContentPrivacyViewModelCoordinator>)coordinator;
-(void)setItemSpecifierValue:(id)arg1 specifier:(id)arg2 ;
-(id)getItemSpecifierValue:(id)arg1 ;
-(id)defaultLinkListSpecifierWithConfiguration:(id)arg1 key:(id)arg2 ;
-(id)radioGroupSpecifierWithName:(id)arg1 footerText:(id)arg2 item:(id)arg3 ;
-(id)defaultLinkListSpecifierWithConfiguration:(id)arg1 key:(id)arg2 titlesByValue:(id)arg3 sortByTitle:(BOOL)arg4 ;
-(id)defaultSwitchSpecifierWithConfiguration:(id)arg1 key:(id)arg2 ;
-(void)showWebFilterRestrictions:(id)arg1 ;
-(id)defaultLinkListSpecifierWithItem:(id)arg1 titlesByValue:(id)arg2 sortByTitle:(BOOL)arg3 ;
@end

