/*
* Generated on Thursday, January 14, 2021 at 2:24:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUItemTableViewController.h>
#import <libobjc.A.dylib/HUAccessorySettingsDetailsViewControllerProtocol.h>

@class HMHome, HUAnnounceSettingsItemModuleController, NSString;

@interface HUAnnounceSettingsViewController : HUItemTableViewController <HUAccessorySettingsDetailsViewControllerProtocol> {

	HMHome* _home;
	HUAnnounceSettingsItemModuleController* _moduleController;

}

@property (nonatomic,readonly) HMHome * home;                                                        //@synthesize home=_home - In the implementation block
@property (nonatomic,retain) HUAnnounceSettingsItemModuleController * moduleController;              //@synthesize moduleController=_moduleController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithHome:(id)arg1 ;
-(HMHome *)home;
-(id)buildItemModuleControllerForModule:(id)arg1 ;
-(void)setModuleController:(HUAnnounceSettingsItemModuleController *)arg1 ;
-(HUAnnounceSettingsItemModuleController *)moduleController;
-(id)initWithAccessoryGroupItem:(id)arg1 ;
-(id)initWithAccessorySettingItem:(id)arg1 ;
@end

