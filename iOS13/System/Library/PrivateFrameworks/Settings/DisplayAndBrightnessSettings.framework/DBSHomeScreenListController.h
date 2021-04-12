/*
* Generated on Monday, March 1, 2021 at 2:34:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Settings/DisplayAndBrightnessSettings.framework/DisplayAndBrightnessSettings
*/

#import <Preferences/PSListController.h>
#import <libobjc.A.dylib/DBSDeviceAppIconSizeTableViewCellDelegate.h>

@class SBSHomeScreenService, NSString;

@interface DBSHomeScreenListController : PSListController <DBSDeviceAppIconSizeTableViewCellDelegate> {

	SBSHomeScreenService* __homeScreenService;

}

@property (nonatomic,retain) SBSHomeScreenService * _homeScreenService;              //@synthesize _homeScreenService=__homeScreenService - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(id)specifiers;
-(SBSHomeScreenService *)_homeScreenService;
-(void)_updateDeviceAppIconSizeWithNewOption:(unsigned long long)arg1 ;
-(void)deviceAppIconSizeTableViewCellUserDidTapOnMoreOption:(id)arg1 ;
-(void)deviceAppIconSizeTableViewCellUserDidTapOnBiggerOption:(id)arg1 ;
-(id)getTodayViewOnHomeScreenEnabledForSpecifier:(id)arg1 ;
-(void)setTodayViewOnHomeScreenEnabled:(id)arg1 forSpecifier:(id)arg2 ;
-(void)set_homeScreenService:(SBSHomeScreenService *)arg1 ;
@end

