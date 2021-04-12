/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setGroupItem:(HFAccessorySettingGroupItem *)arg1 ;
-(HFAccessorySettingGroupItem *)groupItem;
-(void)_registerForExternalUpdates;
-(void)_unregisterForExternalUpdates;
-(id)_buildItemProvidersForHome:(id)arg1 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg1 ;
-(HUAccessorySettingsItemModule *)accessorySettingsSectionItemModule;
-(id)initWithDelegate:(id)arg1 accessoryGroupItem:(id)arg2 ;
-(void)setAccessorySettingsSectionItemModule:(HUAccessorySettingsItemModule *)arg1 ;
@end

