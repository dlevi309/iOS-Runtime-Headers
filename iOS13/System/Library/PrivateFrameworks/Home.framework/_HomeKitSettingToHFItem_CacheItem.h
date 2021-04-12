/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <libobjc.A.dylib/NAIdentifiable.h>

@protocol HFHomeKitSettingsVendor;
@class HFItem, HMSetting, HMSettingGroup, HMAccessorySelectionSettingItem, HFAccessorySettingsEntity, NSDictionary, NSString;

@interface _HomeKitSettingToHFItem_CacheItem : NSObject <NAIdentifiable> {

	HFItem* _outputItem;
	id<HFHomeKitSettingsVendor> _homeKitSettingsVendor;
	HMSetting* _singleSetting;
	HMSettingGroup* _settingGroup;
	HMAccessorySelectionSettingItem* _optionItem;
	HFAccessorySettingsEntity* _accessoryGroupEntity;
	NSDictionary* _usageOptions;

}

@property (nonatomic,readonly) id<HFHomeKitSettingsVendor> homeKitSettingsVendor;              //@synthesize homeKitSettingsVendor=_homeKitSettingsVendor - In the implementation block
@property (nonatomic,readonly) NSString * keyPath; 
@property (nonatomic,readonly) HMSetting * singleSetting;                                      //@synthesize singleSetting=_singleSetting - In the implementation block
@property (nonatomic,readonly) HMSettingGroup * settingGroup;                                  //@synthesize settingGroup=_settingGroup - In the implementation block
@property (nonatomic,readonly) HMAccessorySelectionSettingItem * optionItem;                   //@synthesize optionItem=_optionItem - In the implementation block
@property (nonatomic,readonly) HFAccessorySettingsEntity * accessoryGroupEntity;               //@synthesize accessoryGroupEntity=_accessoryGroupEntity - In the implementation block
@property (nonatomic,readonly) HFItem * outputItem;                                            //@synthesize outputItem=_outputItem - In the implementation block
@property (nonatomic,readonly) NSString * cacheKey; 
@property (nonatomic,readonly) NSDictionary * usageOptions;                                    //@synthesize usageOptions=_usageOptions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)na_identity;
+(BOOL)_checkSettingGroupForSettingsThatNeedToBeDisplayed:(id)arg1 usageOptions:(id)arg2 settingGroup:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)keyPath;
-(NSString *)cacheKey;
-(id<HFHomeKitSettingsVendor>)homeKitSettingsVendor;
-(id)initWithHomeKitSettingsVendor:(id)arg1 usageOptions:(id)arg2 setting:(id)arg3 ;
-(NSDictionary *)usageOptions;
-(HMAccessorySelectionSettingItem *)optionItem;
-(id)initWithHomeKitSettingsVendor:(id)arg1 usageOptions:(id)arg2 setting:(id)arg3 optionItem:(id)arg4 ;
-(id)initWithHomeKitSettingsVendor:(id)arg1 usageOptions:(id)arg2 group:(id)arg3 ;
-(HMSettingGroup *)settingGroup;
-(HMSetting *)singleSetting;
-(HFAccessorySettingsEntity *)accessoryGroupEntity;
-(BOOL)shouldBeDisplayed;
-(id)initWithHomeKitSettingsVendor:(id)arg1 usageOptions:(id)arg2 accessoryGroupEntity:(id)arg3 ;
-(HFItem *)outputItem;
@end

