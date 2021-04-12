/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <Home/HFItemProvider.h>

@class HMSettingGroup, NSMutableSet, HFAccessorySettingManagedConfigurationAdapter;

@interface HUAccessorySettingsProfileItemProvider : HFItemProvider {

	/*^block*/id _filter;
	HMSettingGroup* _settingGroup;
	NSMutableSet* _accessorySettingsProfileItems;
	HFAccessorySettingManagedConfigurationAdapter* _adapter;

}

@property (nonatomic,retain) HMSettingGroup * settingGroup;                                        //@synthesize settingGroup=_settingGroup - In the implementation block
@property (nonatomic,retain) NSMutableSet * accessorySettingsProfileItems;                         //@synthesize accessorySettingsProfileItems=_accessorySettingsProfileItems - In the implementation block
@property (nonatomic,retain) HFAccessorySettingManagedConfigurationAdapter * adapter;              //@synthesize adapter=_adapter - In the implementation block
@property (nonatomic,copy) id filter;                                                              //@synthesize filter=_filter - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)items;
-(void)setFilter:(id)arg1 ;
-(id)filter;
-(HFAccessorySettingManagedConfigurationAdapter *)adapter;
-(void)setAdapter:(HFAccessorySettingManagedConfigurationAdapter *)arg1 ;
-(id)reloadItems;
-(id)invalidationReasons;
-(HMSettingGroup *)settingGroup;
-(void)setSettingGroup:(HMSettingGroup *)arg1 ;
-(id)initWithAdapter:(id)arg1 settingGroup:(id)arg2 ;
-(NSMutableSet *)accessorySettingsProfileItems;
-(void)setAccessorySettingsProfileItems:(NSMutableSet *)arg1 ;
@end

