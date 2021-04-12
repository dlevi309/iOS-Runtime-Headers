/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/Home-Structs.h>
#import <Home/HFItem.h>
#import <libobjc.A.dylib/HFHomeKitSettingItemProtocol.h>
#import <libobjc.A.dylib/HFHomeKitSettingsVendorProvider.h>

@protocol HFHomeKitSettingsVendor;
@class HFAccessorySettingsEntity, NSDictionary, HMSettingGroup, HMAccessorySelectionSetting, NSString;

@interface HFAccessorySettingGroupItem : HFItem <HFHomeKitSettingItemProtocol, HFHomeKitSettingsVendorProvider> {

	id<HFHomeKitSettingsVendor> _homeKitSettingsVendor;
	HFAccessorySettingsEntity* _entity;
	NSDictionary* _usageOptions;
	HMSettingGroup* _settingGroup;
	HMAccessorySelectionSetting* _selectionSetting;

}

@property (nonatomic,retain) NSDictionary * usageOptions;                                      //@synthesize usageOptions=_usageOptions - In the implementation block
@property (nonatomic,readonly) HMSettingGroup * settingGroup;                                  //@synthesize settingGroup=_settingGroup - In the implementation block
@property (nonatomic,readonly) HMAccessorySelectionSetting * selectionSetting;                 //@synthesize selectionSetting=_selectionSetting - In the implementation block
@property (nonatomic,readonly) HFAccessorySettingsEntity * entity;                             //@synthesize entity=_entity - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<HFHomeKitObject> homeKitObject; 
@property (nonatomic,readonly) id<HFHomeKitSettingsVendor> homeKitSettingsVendor;              //@synthesize homeKitSettingsVendor=_homeKitSettingsVendor - In the implementation block
@property (nonatomic,readonly) NSString * settingKeyPath; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(HFAccessorySettingsEntity *)entity;
-(id)_displayTitle;
-(id<HFHomeKitObject>)homeKitObject;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(id<HFHomeKitSettingsVendor>)homeKitSettingsVendor;
-(NSDictionary *)usageOptions;
-(NSString *)settingKeyPath;
-(void)setUsageOptions:(NSDictionary *)arg1 ;
-(void)_decorateHiddenOrDisabled:(id)arg1 ;
-(BOOL)_validateKeyPathDependencies;
-(id)initWithHomeKitSettingsVendor:(id)arg1 usageOptions:(id)arg2 group:(id)arg3 ;
-(id)initWithHomeKitSettingsVendor:(id)arg1 usageOptions:(id)arg2 entity:(id)arg3 ;
-(HMAccessorySelectionSetting *)selectionSetting;
-(id)initWithHomeKitSettingsVendor:(id)arg1 usageOptions:(id)arg2 selectionSetting:(id)arg3 ;
-(HMSettingGroup *)settingGroup;
-(id)initWithHomeKitSettingsVendor:(id)arg1 usageOptions:(id)arg2 ;
@end

