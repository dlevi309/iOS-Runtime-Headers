/*
* Generated on Thursday, January 14, 2021 at 2:24:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUItemTableViewController.h>
#import <libobjc.A.dylib/HUAccessorySettingsProfileModuleControllerDelegate.h>
#import <libobjc.A.dylib/HUAccessorySettingsProfileModuleDelegate.h>
#import <libobjc.A.dylib/HUAccessorySettingsDetailsViewControllerProtocol.h>

@class HFAccessorySettingGroupItem, HUAccessorySettingsProfileModule, HUAccessorySettingsProfileModuleController, NSString;

@interface HUAccessorySettingsProfileViewController : HUItemTableViewController <HUAccessorySettingsProfileModuleControllerDelegate, HUAccessorySettingsProfileModuleDelegate, HUAccessorySettingsDetailsViewControllerProtocol> {

	HFAccessorySettingGroupItem* _item;
	HUAccessorySettingsProfileModule* _profileModule;
	HUAccessorySettingsProfileModuleController* _profileModuleController;

}

@property (nonatomic,retain) HUAccessorySettingsProfileModule * profileModule;                                  //@synthesize profileModule=_profileModule - In the implementation block
@property (nonatomic,retain) HUAccessorySettingsProfileModuleController * profileModuleController;              //@synthesize profileModuleController=_profileModuleController - In the implementation block
@property (nonatomic,copy,readonly) HFAccessorySettingGroupItem * item;                                         //@synthesize item=_item - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(HFAccessorySettingGroupItem *)item;
-(id)hu_preloadContent;
-(id)itemModuleControllers;
-(id)initWithAccessoryGroupItem:(id)arg1 ;
-(HUAccessorySettingsProfileModule *)profileModule;
-(void)setProfileModule:(HUAccessorySettingsProfileModule *)arg1 ;
-(void)setProfileModuleController:(HUAccessorySettingsProfileModuleController *)arg1 ;
-(HUAccessorySettingsProfileModuleController *)profileModuleController;
-(void)accessorySettingsProfileModuleController:(id)arg1 needsNavigationToController:(id)arg2 ;
-(id)settingsProfileModule:(id)arg1 wantsProfileItemDeleted:(id)arg2 ;
@end

