/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/Home-Structs.h>
#import <Home/HFAccessorySettingItem.h>

@class HMAccessorySelectionSettingItem, NSDictionary;

@interface HFAccessorySettingOptionItem : HFAccessorySettingItem {

	HMAccessorySelectionSettingItem* _optionItem;
	NSDictionary* _usageOptions;

}

@property (nonatomic,retain) HMAccessorySelectionSettingItem * optionItem;              //@synthesize optionItem=_optionItem - In the implementation block
@property (nonatomic,retain) NSDictionary * usageOptions;                               //@synthesize usageOptions=_usageOptions - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)value;
-(id)homeKitObject;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(NSDictionary *)usageOptions;
-(HMAccessorySelectionSettingItem *)optionItem;
-(id)initWithHomeKitSettingsVendor:(id)arg1 usageOptions:(id)arg2 setting:(id)arg3 optionItem:(id)arg4 ;
-(id)settingKeyPath;
-(void)_decorateOutcomeWithDependencies:(id)arg1 ;
-(id)toggleSelection;
-(void)setOptionItem:(HMAccessorySelectionSettingItem *)arg1 ;
-(void)setUsageOptions:(NSDictionary *)arg1 ;
@end

