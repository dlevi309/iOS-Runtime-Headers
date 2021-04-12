/*
* Generated on Thursday, January 14, 2021 at 2:28:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Settings/DisplayAndBrightnessSettings.framework/DisplayAndBrightnessSettings
*/

#import <Preferences/PSListController.h>

@class SBSHomeScreenService;

@interface DBSHomeScreenPhoneListController : PSListController {

	SBSHomeScreenService* __homeScreenService;

}

@property (nonatomic,retain) SBSHomeScreenService * _homeScreenService;              //@synthesize _homeScreenService=__homeScreenService - In the implementation block
-(id)specifiers;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)init;
-(SBSHomeScreenService *)_homeScreenService;
-(void)setShowsBadgesInAppLibrary:(id)arg1 specifier:(id)arg2 ;
-(id)showsBadgesInAppLibrary:(id)arg1 ;
-(void)set_homeScreenService:(SBSHomeScreenService *)arg1 ;
@end

