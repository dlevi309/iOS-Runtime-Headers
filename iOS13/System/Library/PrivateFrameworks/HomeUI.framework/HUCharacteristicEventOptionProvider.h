/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <Home/HFItemProvider.h>

@protocol HFServiceVendor, HFCharacteristicValueSource;
@class HMHome, HFItem, NSMutableSet;

@interface HUCharacteristicEventOptionProvider : HFItemProvider {

	HMHome* _home;
	/*^block*/id _filter;
	HFItem*<HFServiceVendor> _serviceVendingItem;
	NSMutableSet* _optionItems;
	id<HFCharacteristicValueSource> _overrideValueSource;

}

@property (nonatomic,retain) NSMutableSet * optionItems;                                       //@synthesize optionItems=_optionItems - In the implementation block
@property (nonatomic,retain) HFItem*<HFServiceVendor> serviceVendingItem;                      //@synthesize serviceVendingItem=_serviceVendingItem - In the implementation block
@property (nonatomic,retain) id<HFCharacteristicValueSource> overrideValueSource;              //@synthesize overrideValueSource=_overrideValueSource - In the implementation block
@property (nonatomic,readonly) HMHome * home;                                                  //@synthesize home=_home - In the implementation block
@property (nonatomic,copy) id filter;                                                          //@synthesize filter=_filter - In the implementation block
+(BOOL)hasOptionsForAnyServiceInHome:(id)arg1 ;
+(BOOL)hasOptionsForServiceVendingItem:(id)arg1 outCharacteristicType:(id*)arg2 ;
+(BOOL)homeHubUpdateRequiredForServiceVendingItem:(id)arg1 forHome:(id)arg2 ;
+(BOOL)_hasOptionsForServices:(id)arg1 outCharacteristicType:(id*)arg2 ;
+(id)_supportedCharacteristicTypes;
+(id)_characteristicTypesRequiringUpdatedHomeHubs;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(HMHome *)home;
-(id)items;
-(void)setFilter:(id)arg1 ;
-(id)filter;
-(id)reloadItems;
-(id)valueSource;
-(id)invalidationReasons;
-(void)setValueSource:(id)arg1 ;
-(id<HFCharacteristicValueSource>)overrideValueSource;
-(void)setOverrideValueSource:(id<HFCharacteristicValueSource>)arg1 ;
-(void)setOptionItems:(NSMutableSet *)arg1 ;
-(NSMutableSet *)optionItems;
-(HFItem*<HFServiceVendor>)serviceVendingItem;
-(id)initWithServiceVendingItem:(id)arg1 home:(id)arg2 ;
-(void)setServiceVendingItem:(HFItem*<HFServiceVendor>)arg1 ;
-(id)_notifyingCharacteristicsKeyedByTypeForServices:(id)arg1 ;
-(id)_optionsForCharacteristicType:(id)arg1 characteristics:(id)arg2 ;
@end

