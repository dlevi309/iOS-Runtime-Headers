/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/HFItemProvider.h>

@protocol HFCharacteristicValueSource;
@class HMHome, NSMutableSet, HMAccessory, HFAccessoryInfoItem;

@interface HFAccessoryInfoDetailsItemProvider : HFItemProvider {

	HMHome* _home;
	id<HFCharacteristicValueSource> _valueSource;
	NSMutableSet* _accessoryInfoDetailItems;
	HMAccessory* _accessory;
	HFAccessoryInfoItem* _firmwareItem;
	HFAccessoryInfoItem* _softwareItem;
	HFAccessoryInfoItem* _wifiItem;

}

@property (nonatomic,retain) NSMutableSet * accessoryInfoDetailItems;                  //@synthesize accessoryInfoDetailItems=_accessoryInfoDetailItems - In the implementation block
@property (nonatomic,retain) HMAccessory * accessory;                                  //@synthesize accessory=_accessory - In the implementation block
@property (nonatomic,readonly) HFAccessoryInfoItem * firmwareItem;                     //@synthesize firmwareItem=_firmwareItem - In the implementation block
@property (nonatomic,readonly) HFAccessoryInfoItem * softwareItem;                     //@synthesize softwareItem=_softwareItem - In the implementation block
@property (nonatomic,readonly) HFAccessoryInfoItem * wifiItem;                         //@synthesize wifiItem=_wifiItem - In the implementation block
@property (nonatomic,readonly) HMHome * home;                                          //@synthesize home=_home - In the implementation block
@property (nonatomic,retain) id<HFCharacteristicValueSource> valueSource;              //@synthesize valueSource=_valueSource - In the implementation block
+(id)preferredCharacteristicOrderArray;
+(id)_displayValueForCachedValue:(id)arg1 characteristicType:(id)arg2 accessoryInfoService:(id)arg3 ;
+(/*^block*/id)accessoryInfoServiceDetailComparator;
-(id)init;
-(HMHome *)home;
-(id)items;
-(HMAccessory *)accessory;
-(void)setAccessory:(HMAccessory *)arg1 ;
-(id)reloadItems;
-(id<HFCharacteristicValueSource>)valueSource;
-(id)invalidationReasons;
-(void)setValueSource:(id<HFCharacteristicValueSource>)arg1 ;
-(id)initWithHome:(id)arg1 accessory:(id)arg2 ;
-(HFAccessoryInfoItem *)wifiItem;
-(NSMutableSet *)accessoryInfoDetailItems;
-(HFAccessoryInfoItem *)firmwareItem;
-(HFAccessoryInfoItem *)softwareItem;
-(BOOL)canToggleAccessoryInfoItem:(id)arg1 ;
-(void)toggleAccessoryInfoItem:(id)arg1 ;
-(void)setAccessoryInfoDetailItems:(NSMutableSet *)arg1 ;
@end

