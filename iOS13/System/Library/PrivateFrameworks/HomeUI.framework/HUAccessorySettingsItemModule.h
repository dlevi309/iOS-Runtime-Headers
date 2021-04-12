/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUServiceDetailsItemModule.h>
#import <libobjc.A.dylib/HFHomeKitSettingsObserver.h>
#import <libobjc.A.dylib/HFMediaObjectObserver.h>

@protocol HFHomeKitSettingsVendor;
@class HFAccessorySettingsItemProvider, NSSet, HMAccessory, HMSettings, NATreeNode, HFAccessorySettingsEntity, HMSettingGroup, NSString;

@interface HUAccessorySettingsItemModule : HUServiceDetailsItemModule <HFHomeKitSettingsObserver, HFMediaObjectObserver> {

	HFAccessorySettingsItemProvider* _accessorySettingsItemProvider;
	NSSet* _itemProviders;
	HMAccessory* _accessory;
	HMSettings* _settings;
	NATreeNode* _codex;
	HFAccessorySettingsEntity* _parentEntity;
	HMSettingGroup* _parentSettingGroup;
	NSSet* _settingItemsToBeDisplayed;
	NSSet* _groupItemsToBeDisplayed;
	id<HFHomeKitSettingsVendor> _homeKitSettingsVendor;

}

@property (nonatomic,readonly) HMAccessory * accessory;                                                      //@synthesize accessory=_accessory - In the implementation block
@property (nonatomic,readonly) HMSettings * settings;                                                        //@synthesize settings=_settings - In the implementation block
@property (nonatomic,readonly) NATreeNode * codex;                                                           //@synthesize codex=_codex - In the implementation block
@property (nonatomic,readonly) HFAccessorySettingsEntity * parentEntity;                                     //@synthesize parentEntity=_parentEntity - In the implementation block
@property (nonatomic,readonly) HMSettingGroup * parentSettingGroup;                                          //@synthesize parentSettingGroup=_parentSettingGroup - In the implementation block
@property (nonatomic,retain) NSSet * settingItemsToBeDisplayed;                                              //@synthesize settingItemsToBeDisplayed=_settingItemsToBeDisplayed - In the implementation block
@property (nonatomic,retain) NSSet * groupItemsToBeDisplayed;                                                //@synthesize groupItemsToBeDisplayed=_groupItemsToBeDisplayed - In the implementation block
@property (nonatomic,readonly) id<HFHomeKitSettingsVendor> homeKitSettingsVendor;                            //@synthesize homeKitSettingsVendor=_homeKitSettingsVendor - In the implementation block
@property (nonatomic,readonly) HFAccessorySettingsItemProvider * accessorySettingsItemProvider;              //@synthesize accessorySettingsItemProvider=_accessorySettingsItemProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(HMSettings *)settings;
-(id)itemProviders;
-(HMAccessory *)accessory;
-(void)mediaObject:(id)arg1 didUpdateSettings:(id)arg2 ;
-(void)settingsDidUpdate:(id)arg1 ;
-(id)buildSectionsWithDisplayedItems:(id)arg1 ;
-(id<HFHomeKitSettingsVendor>)homeKitSettingsVendor;
-(void)settings:(id)arg1 didUpdateSetting:(id)arg2 ;
-(void)registerForExternalUpdates;
-(void)unregisterForExternalUpdates;
-(void)updateItems:(id)arg1 ;
-(id)initWithItemUpdater:(id)arg1 homeKitSettingsVendor:(id)arg2 usageOptions:(id)arg3 ;
-(id)initWithItemUpdater:(id)arg1 settingGroupItem:(id)arg2 usageOptions:(id)arg3 ;
-(id)initWithItemUpdater:(id)arg1 home:(id)arg2 sourceItem:(id)arg3 ;
-(HFAccessorySettingsItemProvider *)accessorySettingsItemProvider;
-(id)updateItem:(id)arg1 withValue:(id)arg2 ;
-(id)initWithItemUpdater:(id)arg1 home:(id)arg2 sourceItem:(id)arg3 usageOptions:(id)arg4 ;
-(void)_registerForAccessorySettingsUpdates;
-(void)_unregisterForAccessorySettingsUpdates;
-(void)_resetIfNeeded;
-(HMSettingGroup *)parentSettingGroup;
-(NATreeNode *)codex;
-(id)getAllHomePodFromItem:(id)arg1 ;
-(BOOL)checkSoftwareVersionForAccessories:(id)arg1 neededSoftwareVersion:(id)arg2 ;
-(void)setSettingItemsToBeDisplayed:(NSSet *)arg1 ;
-(void)setGroupItemsToBeDisplayed:(NSSet *)arg1 ;
-(id)_itemSectionsForParentGroupWithItems;
-(HFAccessorySettingsEntity *)parentEntity;
-(id)_itemSectionsForGroupKeyPaths:(id)arg1 ;
-(NSSet *)settingItemsToBeDisplayed;
-(NSSet *)groupItemsToBeDisplayed;
-(id)_itemSectionsForShowInSeperateSectionItems:(id)arg1 ;
-(id)_itemSectionWithEntity:(id)arg1 items:(id)arg2 ;
-(id)_itemSectionForGroup:(id)arg1 entity:(id)arg2 settingItems:(id)arg3 groupItems:(id)arg4 ;
-(id)initWithItemUpdater:(id)arg1 mediaAccessoryItem:(id)arg2 ;
-(void)updateItems:(id)arg1 matchingDependency:(id)arg2 ;
-(void)updateItemsForKeyPath:(id)arg1 ;
@end

