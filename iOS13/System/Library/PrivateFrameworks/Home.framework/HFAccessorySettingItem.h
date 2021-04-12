/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/Home-Structs.h>
#import <Home/HFItem.h>
#import <libobjc.A.dylib/HFHomeKitSettingItemProtocol.h>

@protocol HFHomeKitSettingsVendor;
@class HFAccessorySettingsEntity, NSString, HMSetting, NSDictionary;

@interface HFAccessorySettingItem : HFItem <HFHomeKitSettingItemProtocol> {

	id<HFHomeKitSettingsVendor> _homeKitSettingsVendor;
	HMSetting* _setting;
	HFAccessorySettingsEntity* _entity;
	NSDictionary* _usageOptions;

}

@property (nonatomic,retain) id<HFHomeKitSettingsVendor> homeKitSettingsVendor;              //@synthesize homeKitSettingsVendor=_homeKitSettingsVendor - In the implementation block
@property (nonatomic,retain) HMSetting * setting;                                            //@synthesize setting=_setting - In the implementation block
@property (nonatomic,retain) HFAccessorySettingsEntity * entity;                             //@synthesize entity=_entity - In the implementation block
@property (nonatomic,retain) NSDictionary * usageOptions;                                    //@synthesize usageOptions=_usageOptions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<HFHomeKitObject> homeKitObject; 
@property (nonatomic,readonly) NSString * settingKeyPath; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)value;
-(void)setEntity:(HFAccessorySettingsEntity *)arg1 ;
-(HFAccessorySettingsEntity *)entity;
-(HMSetting *)setting;
-(void)setSetting:(HMSetting *)arg1 ;
-(id<HFHomeKitObject>)homeKitObject;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(id<HFHomeKitSettingsVendor>)homeKitSettingsVendor;
-(id)initWithHomeKitSettingsVendor:(id)arg1 usageOptions:(id)arg2 setting:(id)arg3 ;
-(NSDictionary *)usageOptions;
-(id)updateValue:(id)arg1 ;
-(NSString *)settingKeyPath;
-(void)_decorateOutcomeWithDependencies:(id)arg1 ;
-(void)setUsageOptions:(NSDictionary *)arg1 ;
-(void)_decorateOutcomeWithResultKeys:(id)arg1 ;
-(void)_decorateOutcomeWithAccessorySettingResultKeys:(id)arg1 ;
-(void)_decorateHiddenOrDisabled:(id)arg1 ;
-(BOOL)_validateKeyPathDependencies;
-(void)setHomeKitSettingsVendor:(id<HFHomeKitSettingsVendor>)arg1 ;
@end

