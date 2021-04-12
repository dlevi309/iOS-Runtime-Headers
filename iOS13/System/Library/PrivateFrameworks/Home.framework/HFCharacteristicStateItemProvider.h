/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/Home-Structs.h>
#import <Home/HFItemProvider.h>

@protocol HFCharacteristicValueSource;
@class HMAccessory, HMService, NSSet;

@interface HFCharacteristicStateItemProvider : HFItemProvider {

	HMAccessory* _accessory;
	HMService* _service;
	id<HFCharacteristicValueSource> _valueSource;
	NSSet* _characteristicStateItems;
	NSSet* _batteryItems;

}

@property (nonatomic,retain) NSSet * characteristicStateItems;                           //@synthesize characteristicStateItems=_characteristicStateItems - In the implementation block
@property (nonatomic,retain) NSSet * batteryItems;                                       //@synthesize batteryItems=_batteryItems - In the implementation block
@property (nonatomic,readonly) HMAccessory * accessory;                                  //@synthesize accessory=_accessory - In the implementation block
@property (nonatomic,readonly) HMService * service;                                      //@synthesize service=_service - In the implementation block
@property (nonatomic,readonly) id<HFCharacteristicValueSource> valueSource;              //@synthesize valueSource=_valueSource - In the implementation block
+(id)_createBatteryItemWithSourceItem:(id)arg1 characteristicType:(id)arg2 valueFormatBlock:(/*^block*/id)arg3 ;
+(id)standardCharacteristicTypes;
+(id)_setupCharacteristicStateItemForCharacteristic:(id)arg1 valueSource:(id)arg2 serviceType:(id)arg3 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)items;
-(HMService *)service;
-(HMAccessory *)accessory;
-(id)reloadItems;
-(id<HFCharacteristicValueSource>)valueSource;
-(id)invalidationReasons;
-(id)initWithValueSource:(id)arg1 service:(id)arg2 ;
-(id)initWithValueSource:(id)arg1 accessory:(id)arg2 service:(id)arg3 ;
-(NSSet *)characteristicStateItems;
-(NSSet *)batteryItems;
-(id)_reloadCharacteristicStateItems;
-(id)_reloadBatteryItems;
-(void)setBatteryItems:(NSSet *)arg1 ;
-(void)setCharacteristicStateItems:(NSSet *)arg1 ;
-(id)initWithValueSource:(id)arg1 accessory:(id)arg2 ;
-(/*^block*/id)characteristicStateItemComparator;
@end

