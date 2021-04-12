/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/Home-Structs.h>
#import <Home/HFItemProvider.h>

@protocol HFHomeKitSettingsVendor;
@class HMSettingGroup, NSDictionary, NSMutableDictionary, NSMutableSet, NATreeNode;

@interface HFAccessorySettingsItemProvider : HFItemProvider {

	HMSettingGroup* _settingGroup;
	/*^block*/id _filter;
	id<HFHomeKitSettingsVendor> _homeKitSettingsVendor;
	NSDictionary* _usageOptions;
	NSMutableDictionary* _settingToItemCache;
	NSMutableSet* _settingItems;
	NATreeNode* _parentNode;

}

@property (nonatomic,retain) NSDictionary * usageOptions;                                      //@synthesize usageOptions=_usageOptions - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * settingToItemCache;                         //@synthesize settingToItemCache=_settingToItemCache - In the implementation block
@property (nonatomic,retain) NSMutableSet * settingItems;                                      //@synthesize settingItems=_settingItems - In the implementation block
@property (nonatomic,readonly) NATreeNode * parentNode;                                        //@synthesize parentNode=_parentNode - In the implementation block
@property (nonatomic,copy) id filter;                                                          //@synthesize filter=_filter - In the implementation block
@property (nonatomic,readonly) id<HFHomeKitSettingsVendor> homeKitSettingsVendor;              //@synthesize homeKitSettingsVendor=_homeKitSettingsVendor - In the implementation block
@property (nonatomic,retain) HMSettingGroup * settingGroup;                                    //@synthesize settingGroup=_settingGroup - In the implementation block
+(id)buildItemTuplesForHomeKitSettings:(id)arg1 usageOptions:(id)arg2 settingGroup:(id)arg3 underNode:(id)arg4 cache:(id)arg5 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NATreeNode *)parentNode;
-(id)items;
-(void)setFilter:(id)arg1 ;
-(id)filter;
-(id)reloadItems;
-(id)invalidationReasons;
-(id<HFHomeKitSettingsVendor>)homeKitSettingsVendor;
-(NSDictionary *)usageOptions;
-(void)setUsageOptions:(NSDictionary *)arg1 ;
-(HMSettingGroup *)settingGroup;
-(void)setSettingGroup:(HMSettingGroup *)arg1 ;
-(NSMutableDictionary *)settingToItemCache;
-(id)initWithHomeKitSettingsVendor:(id)arg1 settingGroup:(id)arg2 usageOptions:(id)arg3 ;
-(NSMutableSet *)settingItems;
-(void)setSettingToItemCache:(NSMutableDictionary *)arg1 ;
-(void)setSettingItems:(NSMutableSet *)arg1 ;
@end

