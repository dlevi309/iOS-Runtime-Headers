/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setFilter:(id)arg1 ;
-(id)filter;
-(id)init;
-(id)items;
-(void)setValueSource:(id)arg1 ;
-(id)reloadItems;
-(id)invalidationReasons;
-(id<HFCharacteristicValueSource>)overrideValueSource;
-(void)setOverrideValueSource:(id<HFCharacteristicValueSource>)arg1 ;
-(id)valueSource;
-(id)copyWithZone:(NSZone*)arg1 ;
-(HMHome *)home;
-(void)setOptionItems:(NSMutableSet *)arg1 ;
-(NSMutableSet *)optionItems;
-(HFItem*<HFServiceVendor>)serviceVendingItem;
-(id)initWithServiceVendingItem:(id)arg1 home:(id)arg2 ;
-(void)setServiceVendingItem:(HFItem*<HFServiceVendor>)arg1 ;
-(id)_notifyingCharacteristicsKeyedByTypeForServices:(id)arg1 ;
-(id)_optionsForCharacteristicType:(id)arg1 characteristics:(id)arg2 ;
@end

