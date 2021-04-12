/*
* Generated on Thursday, January 14, 2021 at 2:28:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(id)specifiers;
-(id)init;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(SBSHomeScreenService *)_homeScreenService;
-(void)set_homeScreenService:(SBSHomeScreenService *)arg1 ;
-(void)_updateDeviceAppIconSizeWithNewOption:(unsigned long long)arg1 ;
-(void)deviceAppIconSizeTableViewCellUserDidTapOnMoreOption:(id)arg1 ;
-(void)deviceAppIconSizeTableViewCellUserDidTapOnBiggerOption:(id)arg1 ;
-(id)getTodayViewOnHomeScreenEnabledForSpecifier:(id)arg1 ;
-(void)setTodayViewOnHomeScreenEnabled:(id)arg1 forSpecifier:(id)arg2 ;
@end

