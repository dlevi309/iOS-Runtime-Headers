/*
* Generated on Thursday, January 14, 2021 at 2:24:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItemManager.h>

@class HFAccessorySettingGroupItem, HUAccessorySettingsItemModule;

@interface HUAccessorySettingsItemManager : HFItemManager {

	HFAccessorySettingGroupItem* _groupItem;
	HUAccessorySettingsItemModule* _accessorySettingsSectionItemModule;

}

@property (nonatomic,retain) HUAccessorySettingsItemModule * accessorySettingsSectionItemModule;              //@synthesize accessorySettingsSectionItemModule=_accessorySettingsSectionItemModule - In the implementation block
@property (nonatomic,retain) HFAccessorySettingGroupItem * groupItem;                                         //@synthesize groupItem=_groupItem - In the implementation block
-(id)_buildSectionsWithDisplayedItems:(id)arg1 ;
-(void)_registerForExternalUpdates;
-(void)_unregisterForExternalUpdates;
-(id)_buildItemProvidersForHome:(id)arg1 ;
-(HFAccessorySettingGroupItem *)groupItem;
-(HUAccessorySettingsItemModule *)accessorySettingsSectionItemModule;
-(id)initWithDelegate:(id)arg1 accessoryGroupItem:(id)arg2 ;
-(void)setGroupItem:(HFAccessorySettingGroupItem *)arg1 ;
-(void)setAccessorySettingsSectionItemModule:(HUAccessorySettingsItemModule *)arg1 ;
@end

